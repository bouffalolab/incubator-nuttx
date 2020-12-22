/****************************************************************************
 * arch/risc-v/src/bl602/bl602_netdev.c
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <stdint.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <assert.h>
#include <debug.h>
#include <sched.h>
#include <semaphore.h>
#include <nuttx/nuttx.h>
#include <nuttx/kmalloc.h>

#include <arpa/inet.h>

#include <nuttx/arch.h>
#include <nuttx/irq.h>
#include <nuttx/wdog.h>
#include <nuttx/wqueue.h>
#include <nuttx/net/arp.h>
#include <nuttx/net/net.h>
#include <nuttx/net/netdev.h>
#include <nuttx/wireless/wireless.h>

#ifdef CONFIG_NET_PKT
#include <nuttx/net/pkt.h>
#endif

#include "wifi_manager/include/bitset.h"
#include "wifi_manager/wifi_mgmr.h"
#include "wifi_manager/include/wifi_mgmr_ext.h"
#include "hardware/bl602_efuse.h"
#include "bl602_netdev.h"

//#ifdef CONFIG_NET_BL602_NETDEV
#if 1

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Work queue support is required. */

#if !defined(CONFIG_SCHED_WORKQUEUE)
#error Work queue support is required in this configuration (CONFIG_SCHED_WORKQUEUE)
#endif

/* The low priority work queue is preferred.  If it is not enabled, LPWORK
 * will be the same as HPWORK.
 *
 * NOTE:  However, the network should NEVER run on the high priority work
 * queue!  That queue is intended only to service short back end interrupt
 * processing that never suspends.  Suspending the high priority work queue
 * may bring the system to its knees!
 */

#define ETHWORK LPWORK

/* CONFIG_BL602_NET_NINTERFACES determines the number of physical interfaces
 * that will be supported.
 */

#ifndef CONFIG_BL602_NET_NINTERFACES
#define CONFIG_BL602_NET_NINTERFACES 1
#endif

/* TX poll delay = 1 seconds.
 * CLK_TCK is the number of clock ticks per second
 */

#define BL602_NET_WDDELAY (1 * CLK_TCK)

/* TX timeout = 1 minute */

#define BL602_NET_TXTIMEOUT (60 * CLK_TCK)

#define BL602_NET_TXBUFF_NUM 8
#define BL602_NET_TXBUFF_SIZE 1600

#if BL602_NET_TXBUFF_SIZE & 0x3 != 0
#error "BL602_NET_TXBUFF_SIZE must be aligned to 4 bytes"
#endif

#define TX_BUFF_BIT_SIZE BL602_NET_TXBUFF_NUM

/* This is a helper pointer for accessing the contents of Ethernet header */

#define BUF ((struct eth_hdr_s *)priv->net_dev.d_buf)

/****************************************************************************
 * Private Types
 ****************************************************************************/

/* The bl602_net_driver_s encapsulates all state information for a single hardware
 * interface
 */

struct bl602_net_driver_s {
  bool bifup;              /* true:ifup false:ifdown */
  struct wdog_s txpoll;    /* TX poll timer */
  struct wdog_s txtimeout; /* TX timeout timer */
  struct work_s irqwork;   /* For deferring interrupt work to the work queue */
  struct work_s pollwork;  /* For deferring poll work to the work queue */

  /* wifi manager */

  struct wlan_netif *wlan;

  int current_mode; /* current mode */
  int scan_result_len;

  uint8_t *out_buf_bak;

  /* This holds the information visible to the NuttX network */

  struct net_driver_s net_dev; /* Interface understood by the network */
};

struct scan_parse_param_s {
  FAR struct bl602_net_driver_s *priv;

  int flags;
  struct iw_scan_req scan_req;
};

BITSET_DEFINE(tx_buf_ind_s, TX_BUFF_BIT_SIZE);

/****************************************************************************
 * Private Data
 ****************************************************************************/

/* These statically allocated structures would mean that only a single
 * instance of the device could be supported.  In order to support multiple
 * devices instances, this data would have to be allocated dynamically.
 */

/* A single packet buffer per device is used in this example.  There might
 * be multiple packet buffers in a more complex, pipelined design.  Many
 * contemporary Ethernet interfaces, for example,  use multiple, linked DMA
 * descriptors in rings to implement such a pipeline.  This example assumes
 * much simpler hardware that simply handles one packet at a time.
 *
 * NOTE that if CONFIG_BL602_NET_NINTERFACES were greater than 1, you would
 * need a minimum on one packet buffer per instance.  Much better to be
 * allocated dynamically in cases where more than one are needed.
 */

/* Driver state structure */

static struct bl602_net_driver_s g_bl602_net[CONFIG_BL602_NET_NINTERFACES];

static struct tx_buf_ind_s tx_buf_indicator = BITSET_T_INITIALIZER((1 << BL602_NET_TXBUFF_NUM) - 1);

static __attribute__((section(".wifi_ram")))
uint8_t tx_buff[BL602_NET_TXBUFF_NUM][BL602_NET_TXBUFF_SIZE] = {0};

/* wifi scan complete semaphore */

static sem_t g_wifi_scan_sem;

/****************************************************************************
 * Private Function Prototypes
 ****************************************************************************/

extern int wifi_tx(struct wlan_netif *wlan, uint8_t *p, int len);
extern void bl_free_rx_buffer(void *p);

/* Common TX logic */

static int bl602_net_transmit(FAR struct bl602_net_driver_s *priv);
static int bl602_net_txpoll(FAR struct net_driver_s *dev);

/* Interrupt handling */

static void bl602_net_reply(struct bl602_net_driver_s *priv);
static void bl602_net_receive(FAR struct bl602_net_driver_s *priv);
static void bl602_net_txdone(FAR struct bl602_net_driver_s *priv);

static void bl602_net_interrupt_work(FAR void *arg);

/* Watchdog timer expirations */

static void bl602_net_txtimeout_work(FAR void *arg);
static void bl602_net_txtimeout_expiry(wdparm_t arg);

static void bl602_net_poll_work(FAR void *arg);
static void bl602_net_poll_expiry(wdparm_t arg);

/* NuttX callback functions */

static int bl602_net_ifup(FAR struct net_driver_s *dev);
static int bl602_net_ifdown(FAR struct net_driver_s *dev);

static void bl602_net_txavail_work(FAR void *arg);
static int bl602_net_txavail(FAR struct net_driver_s *dev);

#if defined(CONFIG_NET_MCASTGROUP) || defined(CONFIG_NET_ICMPv6)
static int bl602_net_addmac(FAR struct net_driver_s *dev,
                            FAR const uint8_t *mac);
#ifdef CONFIG_NET_MCASTGROUP
static int bl602_net_rmmac(FAR struct net_driver_s *dev,
                           FAR const uint8_t *mac);
#endif
#ifdef CONFIG_NET_ICMPv6
static void bl602_net_ipv6multicast(FAR struct bl602_net_driver_s *priv);
#endif
#endif
#ifdef CONFIG_NETDEV_IOCTL
static int bl602_net_ioctl(FAR struct net_driver_s *dev, int cmd,
                           unsigned long arg);
#endif

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Name: bl602_net_transmit
 *
 * Description:
 *   Start hardware transmission.  Called either from the txdone interrupt
 *   handling or from watchdog based polling.
 *
 * Input Parameters:
 *   priv - Reference to the driver state structure
 *
 * Returned Value:
 *   OK on success; a negated errno on failure
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static int bl602_net_transmit(FAR struct bl602_net_driver_s *priv) {
  /* Verify that the hardware is ready to send another packet.  If we get
   * here, then we are committed to sending a packet; Higher level logic
   * must have assured that there is no transmission in progress.
   */

  /* Increment statistics */

  NETDEV_TXPACKETS(priv->net_dev);

  /* Send the packet: address=priv->net_dev.d_buf, length=priv->net_dev.d_len */
  wifi_tx(priv->wlan, priv->net_dev.d_buf, priv->net_dev.d_len);

  /* Enable Tx interrupts */

  /* Setup the TX timeout watchdog (perhaps restarting the timer) */

  wd_start(&priv->txtimeout, BL602_NET_TXTIMEOUT,
           bl602_net_txtimeout_expiry, (wdparm_t)priv);
  return OK;
}

/****************************************************************************
 * Name: bl602_net_txpoll
 *
 * Description:
 *   The transmitter is available, check if the network has any outgoing
 *   packets ready to send.  This is a callback from devif_poll().
 *   devif_poll() may be called:
 *
 *   1. When the preceding TX packet send is complete,
 *   2. When the preceding TX packet send timesout and the interface is reset
 *   3. During normal TX polling
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   OK on success; a negated errno on failure
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static int bl602_net_txpoll(FAR struct net_driver_s *dev) {
  FAR struct bl602_net_driver_s *priv =
      (FAR struct bl602_net_driver_s *)dev->d_private;

  /* If the polling resulted in data that should be sent out on the network,
   * the field d_len is set to a value > 0.
   */

  if (priv->net_dev.d_len > 0) {
    /* Look up the destination MAC address and add it to the Ethernet
       * header.
       */
    assert(priv->net_dev.d_buf);
#ifdef CONFIG_NET_IPv4
#ifdef CONFIG_NET_IPv6
    if (IFF_IS_IPv4(priv->net_dev.d_flags))
#endif
    {
      arp_out(&priv->net_dev);
    }
#endif /* CONFIG_NET_IPv4 */

#ifdef CONFIG_NET_IPv6
#ifdef CONFIG_NET_IPv4
    else
#endif
    {
      neighbor_out(&priv->net_dev);
    }
#endif /* CONFIG_NET_IPv6 */

    /* Check if the network is sending this packet to the IP address of
       * this device.  If so, just loop the packet back into the network but
       * don't attempt to put it on the wire.
       */

    if (!devif_loopback(&priv->net_dev)) {
      /* Send the packet */

      bl602_net_transmit(priv);

      /* Check if there is room in the device to hold another packet.
           * If not, return a non-zero value to terminate the poll.
           */
      priv->net_dev.d_buf = bl602_netdev_alloc_txbuf();
      if (priv->net_dev.d_buf) {
        priv->net_dev.d_buf += PRESERVE_80211_HEADER_LEN;
        priv->net_dev.d_pktsize = BL602_NET_TXBUFF_SIZE - PRESERVE_80211_HEADER_LEN;
      }

      return priv->net_dev.d_buf == NULL;
    }
  }

  /* If zero is returned, the polling will continue until all connections
   * have been examined.
   */

  return 0;
}

/****************************************************************************
 * Name: bl602_net_reply
 *
 * Description:
 *   After a packet has been received and dispatched to the network, it
 *   may return return with an outgoing packet.  This function checks for
 *   that case and performs the transmission if necessary.
 *
 * Input Parameters:
 *   priv - Reference to the driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static void bl602_net_reply(struct bl602_net_driver_s *priv) {
  /* If the packet dispatch resulted in data that should be sent out on the
   * network, the field d_len will set to a value > 0.
   */

  if (priv->net_dev.d_len > 0) {
    /* Update the Ethernet header with the correct MAC address */

#ifdef CONFIG_NET_IPv4
#ifdef CONFIG_NET_IPv6
    /* Check for an outgoing IPv4 packet */

    if (IFF_IS_IPv4(priv->net_dev.d_flags))
#endif
    {
      arp_out(&priv->net_dev);
    }
#endif

#ifdef CONFIG_NET_IPv6
#ifdef CONFIG_NET_IPv4
    /* Otherwise, it must be an outgoing IPv6 packet */

    else
#endif
    {
      neighbor_out(&bl602_net->net_dev);
    }
#endif

    if (priv->out_buf_bak != NULL) {
      /* we copy it, and release rx buffer */
      memcpy(priv->out_buf_bak, priv->net_dev.d_buf, priv->net_dev.d_len);

      bl_free_rx_buffer(priv->net_dev.d_buf);

      priv->net_dev.d_buf = priv->out_buf_bak;
      priv->out_buf_bak = NULL;

      bl602_net_transmit(priv);

      priv->net_dev.d_buf = bl602_netdev_alloc_txbuf();

      if (priv->net_dev.d_buf) {
        priv->net_dev.d_buf += PRESERVE_80211_HEADER_LEN;
        priv->net_dev.d_pktsize = BL602_NET_TXBUFF_SIZE - PRESERVE_80211_HEADER_LEN;
      }

      return;
    }
  }

  /* we not have tx buffer, so we lost this packet */
  bl_free_rx_buffer(priv->net_dev.d_buf);
}

/****************************************************************************
 * Name: bl602_net_receive
 *
 * Description:
 *   An interrupt was received indicating the availability of a new RX packet
 *
 * Input Parameters:
 *   priv - Reference to the driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static void bl602_net_receive(FAR struct bl602_net_driver_s *priv) {
  do {
    /* Check for errors and update statistics */

    /* Check if the packet is a valid size for the network buffer
       * configuration.
       */

    /* Copy the data data from the hardware to priv->net_dev.d_buf.  Set
       * amount of data in priv->net_dev.d_len
       */

#ifdef CONFIG_NET_PKT
    /* When packet sockets are enabled, feed the frame into the tap */

    pkt_input(&priv->net_dev);
#endif

#ifdef CONFIG_NET_IPv4
    /* Check for an IPv4 packet */

    if (BUF->type == HTONS(ETHTYPE_IP)) {
      ninfo("IPv4 frame\n");
      NETDEV_RXIPV4(&priv->net_dev);

      /* Handle ARP on input, then dispatch IPv4 packet to the network
           * layer.
           */

      arp_ipin(&priv->net_dev);
      ipv4_input(&priv->net_dev);

      /* Check for a reply to the IPv4 packet */

      bl602_net_reply(priv);
    } else
#endif
#ifdef CONFIG_NET_IPv6
        /* Check for an IPv6 packet */

        if (BUF->type == HTONS(ETHTYPE_IP6)) {
      ninfo("IPv6 frame\n");
      NETDEV_RXIPV6(&priv->net_dev);

      /* Dispatch IPv6 packet to the network layer */

      ipv6_input(&priv->net_dev);

      /* Check for a reply to the IPv6 packet */

      bl602_net_reply(priv);
    } else
#endif
#ifdef CONFIG_NET_ARP
        /* Check for an ARP packet */

        if (BUF->type == htons(ETHTYPE_ARP)) {
      /* Dispatch ARP packet to the network layer */

      arp_arpin(&priv->net_dev);
      NETDEV_RXARP(&priv->net_dev);

      /* If the above function invocation resulted in data that should be
           * sent out on the network, the field  d_len will set to a value
           * > 0.
           */

      if (priv->net_dev.d_len > 0) {
        if (priv->out_buf_bak != NULL) {
          /* we copy it, and release rx buffer */
          memcpy(priv->out_buf_bak, priv->net_dev.d_buf, priv->net_dev.d_len);

          bl_free_rx_buffer(priv->net_dev.d_buf);

          priv->net_dev.d_buf = priv->out_buf_bak;
          priv->out_buf_bak = NULL;

          bl602_net_transmit(priv);

          priv->net_dev.d_buf = bl602_netdev_alloc_txbuf();
          if (priv->net_dev.d_buf) {
            priv->net_dev.d_buf += PRESERVE_80211_HEADER_LEN;
            priv->net_dev.d_pktsize = BL602_NET_TXBUFF_SIZE - PRESERVE_80211_HEADER_LEN;
          }

          return;
        }
      }

      /* we not have tx buffer, so we lost this packet */
      bl_free_rx_buffer(priv->net_dev.d_buf);
    } else
#endif
    {
      NETDEV_RXDROPPED(&priv->net_dev);
      bl_free_rx_buffer(priv->net_dev.d_buf);
    }
  } while (0); /* While there are more packets to be processed */
}

/****************************************************************************
 * Name: bl602_net_txdone
 *
 * Description:
 *   An interrupt was received indicating that the last TX packet(s) is done
 *
 * Input Parameters:
 *   priv - Reference to the driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static void bl602_net_txdone(FAR struct bl602_net_driver_s *priv) {
  int delay;

  /* Check for errors and update statistics */

  NETDEV_TXDONE(priv->net_dev);

  /* Check if there are pending transmissions */

  /* If no further transmissions are pending, then cancel the TX timeout and
   * disable further Tx interrupts.
   */

  wd_cancel(&priv->txtimeout);

  /* And disable further TX interrupts. */

  /* In any event, poll the network for new TX data */
  if (priv->net_dev.d_buf == NULL) {
    priv->net_dev.d_buf = bl602_netdev_alloc_txbuf();
    if (priv->net_dev.d_buf) {
      priv->net_dev.d_buf += PRESERVE_80211_HEADER_LEN;
      priv->net_dev.d_pktsize = BL602_NET_TXBUFF_SIZE - PRESERVE_80211_HEADER_LEN;
    }
  }

  // FIXME this context is called form fw thread
  if (priv->net_dev.d_buf) {
    devif_poll(&priv->net_dev, bl602_net_txpoll);
  }
}

/****************************************************************************
 * Name: bl602_net_notify
 *
 * Description:
 *   Notify 602 net driver to handle
 *
 * Input Parameters:
 *   irq     - Number of the IRQ that generated the interrupt
 *   context - Interrupt register state save info (architecture-specific)
 *
 * Returned Value:
 *   OK on success
 *
 * Assumptions:
 *   Runs in the context of a the Ethernet interrupt handler.  Local
 *   interrupts are disabled by the interrupt logic.
 *
 ****************************************************************************/

int bl602_net_notify(uint32_t event, uint8_t *data, int len) {
  // FIXME
  FAR struct bl602_net_driver_s *priv = &g_bl602_net[0];

  /* Disable further Ethernet interrupts.  Because Ethernet interrupts are
   * also disabled if the TX timeout event occurs, there can be no race
   * condition here.
   */

  net_lock();

  if (event & BL602_NET_EVT_TX_DONE) {
    /* If a TX transfer just completed, then cancel the TX timeout so
       * there will be no race condition between any subsequent timeout
       * expiration and the deferred interrupt processing.
       */

    bl602_net_txdone(priv);
  }

  if (event & BL602_NET_EVT_RX) {

    priv->out_buf_bak = priv->net_dev.d_buf;

    priv->net_dev.d_buf = data;
    priv->net_dev.d_len = len;
    bl602_net_receive(priv);

    priv->net_dev.d_buf = priv->out_buf_bak;
  }

  net_unlock();
  return OK;
}

/****************************************************************************
 * Name: bl602_net_txtimeout_work
 *
 * Description:
 *   Perform TX timeout related work from the worker thread
 *
 * Input Parameters:
 *   arg - The argument passed when work_queue() as called.
 *
 * Returned Value:
 *   OK on success
 *
 ****************************************************************************/

static void bl602_net_txtimeout_work(FAR void *arg) {
  FAR struct bl602_net_driver_s *priv = (FAR struct bl602_net_driver_s *)arg;

  /* Lock the network and serialize driver operations if necessary.
   * NOTE: Serialization is only required in the case where the driver work
   * is performed on an LP worker thread and where more than one LP worker
   * thread has been configured.
   */

  net_lock();

  /* Increment statistics and dump debug info */

  NETDEV_TXTIMEOUTS(priv->net_dev);

  /* Then reset the hardware */

  /* Then poll the network for new XMIT data */
  if (priv->net_dev.d_buf) {
    devif_poll(&priv->net_dev, bl602_net_txpoll);
  }

  net_unlock();
}

/****************************************************************************
 * Name: bl602_net_txtimeout_expiry
 *
 * Description:
 *   Our TX watchdog timed out.  Called from the timer interrupt handler.
 *   The last TX never completed.  Reset the hardware and start again.
 *
 * Input Parameters:
 *   arg  - The argument
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   Runs in the context of a the timer interrupt handler.  Local
 *   interrupts are disabled by the interrupt logic.
 *
 ****************************************************************************/

static void bl602_net_txtimeout_expiry(wdparm_t arg) {
  FAR struct bl602_net_driver_s *priv = (FAR struct bl602_net_driver_s *)arg;

  /* Disable further Ethernet interrupts.  This will prevent some race
   * conditions with interrupt work.  There is still a potential race
   * condition with interrupt work that is already queued and in progress.
   */

  /* Schedule to perform the TX timeout processing on the worker thread. */

  work_queue(ETHWORK, &priv->irqwork, bl602_net_txtimeout_work, priv, 0);
}

/****************************************************************************
 * Name: bl602_net_poll_work
 *
 * Description:
 *   Perform periodic polling from the worker thread
 *
 * Input Parameters:
 *   arg - The argument passed when work_queue() as called.
 *
 * Returned Value:
 *   OK on success
 *
 * Assumptions:
 *   Run on a work queue thread.
 *
 ****************************************************************************/

static void bl602_net_poll_work(FAR void *arg) {
  FAR struct bl602_net_driver_s *priv = (FAR struct bl602_net_driver_s *)arg;

  /* Lock the network and serialize driver operations if necessary.
   * NOTE: Serialization is only required in the case where the driver work
   * is performed on an LP worker thread and where more than one LP worker
   * thread has been configured.
   */

  net_lock();

  /* Perform the poll */

  /* Check if there is room in the send another TX packet.  We cannot perform
   * the TX poll if he are unable to accept another packet for transmission.
   */
  if (priv->net_dev.d_buf == NULL) {
    priv->net_dev.d_buf = bl602_netdev_alloc_txbuf();
    if (priv->net_dev.d_buf) {
      priv->net_dev.d_buf += PRESERVE_80211_HEADER_LEN;
      priv->net_dev.d_pktsize = BL602_NET_TXBUFF_SIZE - PRESERVE_80211_HEADER_LEN;
    }
  }

  if (priv->net_dev.d_buf) {
    /* If so, update TCP timing states and poll the network for new XMIT data.
     * Hmmm.. might be bug here.  Does this mean if there is a transmit in
     * progress, we will missing TCP time state updates?
     */

    devif_timer(&priv->net_dev, BL602_NET_WDDELAY, bl602_net_txpoll);
  }

  /* Setup the watchdog poll timer again */

  int ret = wd_start(&priv->txpoll, BL602_NET_WDDELAY,
                     bl602_net_poll_expiry, (wdparm_t)priv);
  assert(ret == 0);
  net_unlock();
}

/****************************************************************************
 * Name: bl602_net_poll_expiry
 *
 * Description:
 *   Periodic timer handler.  Called from the timer interrupt handler.
 *
 * Input Parameters:
 *   arg  - The argument
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   Runs in the context of a the timer interrupt handler.  Local
 *   interrupts are disabled by the interrupt logic.
 *
 ****************************************************************************/

static void bl602_net_poll_expiry(wdparm_t arg) {
  FAR struct bl602_net_driver_s *priv = (FAR struct bl602_net_driver_s *)arg;

  /* Schedule to perform the interrupt processing on the worker thread. */

  int ret = work_queue(ETHWORK, &priv->pollwork, bl602_net_poll_work, priv, 0);
  assert(ret == 0);
}

/****************************************************************************
 * Name: bl602_net_ifup
 *
 * Description:
 *   NuttX Callback: Bring up the Ethernet interface when an IP address is
 *   provided
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static int bl602_net_ifup(FAR struct net_driver_s *dev) {
  FAR struct bl602_net_driver_s *priv =
      (FAR struct bl602_net_driver_s *)dev->d_private;

#ifdef CONFIG_NET_IPv4
  ninfo("Bringing up: %d.%d.%d.%d\n",
        dev->d_ipaddr & 0xff, (dev->d_ipaddr >> 8) & 0xff,
        (dev->d_ipaddr >> 16) & 0xff, dev->d_ipaddr >> 24);
#endif
#ifdef CONFIG_NET_IPv6
  ninfo("Bringing up: %04x:%04x:%04x:%04x:%04x:%04x:%04x:%04x\n",
        dev->d_ipv6addr[0], dev->d_ipv6addr[1], dev->d_ipv6addr[2],
        dev->d_ipv6addr[3], dev->d_ipv6addr[4], dev->d_ipv6addr[5],
        dev->d_ipv6addr[6], dev->d_ipv6addr[7]);
#endif

  /* Initialize PHYs, Ethernet interface, and setup up Ethernet interrupts */

  /* Instantiate MAC address from priv->net_dev.d_mac.ether.ether_addr_octet */

#ifdef CONFIG_NET_ICMPv6
  /* Set up IPv6 multicast address filtering */

  bl602_net_ipv6multicast(priv);
#endif

  /* Set and activate a timer process */

  wd_start(&priv->txpoll, BL602_NET_WDDELAY,
           bl602_net_poll_expiry, (wdparm_t)priv);

  /* Enable the Ethernet interrupt */

  priv->bifup = true;
  mm_sec_keydump();
  //up_enable_irq(CONFIG_BL602_NET_IRQ);
  return OK;
}

/****************************************************************************
 * Name: bl602_net_ifdown
 *
 * Description:
 *   NuttX Callback: Stop the interface.
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static int bl602_net_ifdown(FAR struct net_driver_s *dev) {
  FAR struct bl602_net_driver_s *priv =
      (FAR struct bl602_net_driver_s *)dev->d_private;
  irqstate_t flags;

  /* Disable the Ethernet interrupt */

  flags = enter_critical_section();
  //up_disable_irq(CONFIG_BL602_NET_IRQ);

  /* Cancel the TX poll timer and TX timeout timers */

  wd_cancel(&priv->txpoll);
  wd_cancel(&priv->txtimeout);

  /* Put the EMAC in its reset, non-operational state.  This should be
   * a known configuration that will guarantee the bl602_net_ifup() always
   * successfully brings the interface back up.
   */

  /* Mark the device "down" */

  priv->bifup = false;
  leave_critical_section(flags);
  return OK;
}

/****************************************************************************
 * Name: bl602_net_txavail_work
 *
 * Description:
 *   Perform an out-of-cycle poll on the worker thread.
 *
 * Input Parameters:
 *   arg - Reference to the NuttX driver state structure (cast to void*)
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   Runs on a work queue thread.
 *
 ****************************************************************************/

static void bl602_net_txavail_work(FAR void *arg) {
  FAR struct bl602_net_driver_s *priv = (FAR struct bl602_net_driver_s *)arg;

  /* Lock the network and serialize driver operations if necessary.
   * NOTE: Serialization is only required in the case where the driver work
   * is performed on an LP worker thread and where more than one LP worker
   * thread has been configured.
   */

  net_lock();

  /* Ignore the notification if the interface is not yet up */

  if (priv->bifup) {
    /* Check if there is room in the hardware to hold another packet. */

    if (priv->net_dev.d_buf == NULL) {
      priv->net_dev.d_buf = bl602_netdev_alloc_txbuf();
      if (priv->net_dev.d_buf) {
        priv->net_dev.d_buf += PRESERVE_80211_HEADER_LEN;
        priv->net_dev.d_pktsize = BL602_NET_TXBUFF_SIZE - PRESERVE_80211_HEADER_LEN;
      }
    }

    /* If so, then poll the network for new XMIT data */
    if (priv->net_dev.d_buf) {
      devif_timer(&priv->net_dev, 0, bl602_net_txpoll);
    }
  }

  net_unlock();
}

/****************************************************************************
 * Name: bl602_net_txavail
 *
 * Description:
 *   Driver callback invoked when new TX data is available.  This is a
 *   stimulus perform an out-of-cycle poll and, thereby, reduce the TX
 *   latency.
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *
 * Returned Value:
 *   None
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

static int bl602_net_txavail(FAR struct net_driver_s *dev) {
  FAR struct bl602_net_driver_s *priv =
      (FAR struct bl602_net_driver_s *)dev->d_private;

  /* Is our single work structure available?  It may not be if there are
   * pending interrupt actions and we will have to ignore the Tx
   * availability action.
   */

  if (work_available(&priv->pollwork)) {
    /* Schedule to serialize the poll on the worker thread. */

    work_queue(ETHWORK, &priv->pollwork, bl602_net_txavail_work, priv, 0);
  }

  return OK;
}

/****************************************************************************
 * Name: bl602_net_addmac
 *
 * Description:
 *   NuttX Callback: Add the specified MAC address to the hardware multicast
 *   address filtering
 *
 * Input Parameters:
 *   dev  - Reference to the NuttX driver state structure
 *   mac  - The MAC address to be added
 *
 * Returned Value:
 *   Zero (OK) on success; a negated errno value on failure.
 *
 ****************************************************************************/

#if defined(CONFIG_NET_MCASTGROUP) || defined(CONFIG_NET_ICMPv6)
static int bl602_net_addmac(FAR struct net_driver_s *dev, FAR const uint8_t *mac) {
  FAR struct bl602_net_driver_s *priv =
      (FAR struct bl602_net_driver_s *)dev->d_private;

  /* Add the MAC address to the hardware multicast routing table */

  return OK;
}
#endif

/****************************************************************************
 * Name: bl602_net_rmmac
 *
 * Description:
 *   NuttX Callback: Remove the specified MAC address from the hardware
 *   multicast address filtering
 * Input Parameters:
 *   dev  - Reference to the NuttX driver state structure
 *   mac  - The MAC address to be removed
 *
 * Returned Value:
 *   Zero (OK) on success; a negated errno value on failure.
 *
 ****************************************************************************/

#ifdef CONFIG_NET_MCASTGROUP
static int bl602_net_rmmac(FAR struct net_driver_s *dev, FAR const uint8_t *mac) {
  FAR struct bl602_net_driver_s *priv =
      (FAR struct bl602_net_driver_s *)dev->d_private;

  /* Add the MAC address to the hardware multicast routing table */

  return OK;
}
#endif

/****************************************************************************
 * Name: bl602_net_ipv6multicast
 *
 * Description:
 *   Configure the IPv6 multicast MAC address.
 *
 * Input Parameters:
 *   priv - A reference to the private driver state structure
 *
 * Returned Value:
 *   Zero (OK) on success; a negated errno value on failure.
 *
 ****************************************************************************/

#ifdef CONFIG_NET_ICMPv6
static void bl602_net_ipv6multicast(FAR struct bl602_net_driver_s *priv) {
  FAR struct net_driver_s *dev;
  uint16_t tmp16;
  uint8_t mac[6];

  /* For ICMPv6, we need to add the IPv6 multicast address
   *
   * For IPv6 multicast addresses, the Ethernet MAC is derived by
   * the four low-order octets OR'ed with the MAC 33:33:00:00:00:00,
   * so for example the IPv6 address FF02:DEAD:BEEF::1:3 would map
   * to the Ethernet MAC address 33:33:00:01:00:03.
   *
   * NOTES:  This appears correct for the ICMPv6 Router Solicitation
   * Message, but the ICMPv6 Neighbor Solicitation message seems to
   * use 33:33:ff:01:00:03.
   */

  mac[0] = 0x33;
  mac[1] = 0x33;

  dev = &priv->dev;
  tmp16 = dev->d_ipv6addr[6];
  mac[2] = 0xff;
  mac[3] = tmp16 >> 8;

  tmp16 = dev->d_ipv6addr[7];
  mac[4] = tmp16 & 0xff;
  mac[5] = tmp16 >> 8;

  ninfo("IPv6 Multicast: %02x:%02x:%02x:%02x:%02x:%02x\n",
        mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);

  bl602_net_addmac(dev, mac);

#ifdef CONFIG_NET_ICMPv6_AUTOCONF
  /* Add the IPv6 all link-local nodes Ethernet address.  This is the
   * address that we expect to receive ICMPv6 Router Advertisement
   * packets.
   */

  bl602_net_addmac(dev, g_ipv6_ethallnodes.ether_addr_octet);

#endif /* CONFIG_NET_ICMPv6_AUTOCONF */

#ifdef CONFIG_NET_ICMPv6_ROUTER
  /* Add the IPv6 all link-local routers Ethernet address.  This is the
   * address that we expect to receive ICMPv6 Router Solicitation
   * packets.
   */

  bl602_net_addmac(dev, g_ipv6_ethallrouters.ether_addr_octet);

#endif /* CONFIG_NET_ICMPv6_ROUTER */
}
#endif /* CONFIG_NET_ICMPv6 */

static void scan_complete_indicate(void *data, void *param) {
  int i;
  struct scan_parse_param_s *para;
  wifi_mgmr_scan_item_t *scan;

  para = (struct scan_parse_param_s *)data;
  assert(para != NULL);
  assert(para->priv != NULL);
  para->priv->scan_result_len = 0;

  for (i = 0; i < sizeof(wifiMgmr.scan_items) / sizeof(wifiMgmr.scan_items[0]); i++) {
    scan = &wifiMgmr.scan_items[i];

    if (wifi_mgmr_scan_item_is_timeout(&wifiMgmr, &(wifiMgmr.scan_items[i]))) {
      scan->is_used = 0;
    } else if (scan->is_used) {
      if (para->flags & IW_SCAN_THIS_ESSID) {
        if (strncmp(scan->ssid, para->scan_req.essid, sizeof(scan->ssid)) == 0) {
          scan->is_used = 1;
          para->priv->scan_result_len++;
        } else {
          scan->is_used = 0;
        }
      } else {
        para->priv->scan_result_len++;
      }
    }
  }

  sem_post(&g_wifi_scan_sem);
  kmm_free(data);
  return;
}

static int format_scan_result_to_wapi(struct iwreq *req, int result_cnt) {
  int i = 0;
  int event_buff_len = 0;
  uint8_t *curr_pos = NULL;

  /* More compact arrangement */

  event_buff_len = result_cnt * (offsetof(struct iw_event, u) * 4 +
                                 sizeof(struct sockaddr) + sizeof(struct iw_freq) +
                                 sizeof(struct iw_quality) + sizeof(struct iw_point) +
                                 IW_ESSID_MAX_SIZE);

  if (req->u.data.length == 0 || req->u.data.length < event_buff_len) {
    return -E2BIG;
  }

  req->u.data.length = event_buff_len;

  /* construct iw event buffer */

  curr_pos = req->u.data.pointer;
  assert(curr_pos != NULL);
  assert(((uintptr_t)curr_pos & 0x3) == 0);

  for (i = 0; i < sizeof(wifiMgmr.scan_items) / sizeof(wifiMgmr.scan_items[0]); i++) {
    wifi_mgmr_scan_item_t *scan = &wifiMgmr.scan_items[i];
    struct iw_event *iwe;

    if (scan->is_used == 0) {
      continue;
    }
    result_cnt--;

    iwe = (struct iw_event *)curr_pos;
    assert(((uintptr_t)iwe & 0x3) == 0);
    iwe->len = offsetof(struct iw_event, u) + sizeof(struct sockaddr);
    iwe->cmd = SIOCGIWAP;
    memcpy(iwe->u.ap_addr.sa_data, scan->bssid, sizeof(struct ether_addr));

    iwe = (struct iw_event *)((uintptr_t)iwe + iwe->len);
    assert(((uintptr_t)iwe & 0x3) == 0);
    iwe->len = offsetof(struct iw_event, u) + sizeof(struct iw_freq);
    iwe->cmd = SIOCGIWFREQ;
    iwe->u.freq.e = 0;
    iwe->u.freq.m = scan->channel;

    iwe = (struct iw_event *)((uintptr_t)iwe + iwe->len);
    assert(((uintptr_t)iwe & 0x3) == 0);
    iwe->len = offsetof(struct iw_event, u) + sizeof(struct iw_quality);
    iwe->cmd = IWEVQUAL;
    iwe->u.qual.level = scan->rssi;
    iwe->u.qual.updated = IW_QUAL_DBM;

    iwe = (struct iw_event *)((uintptr_t)iwe + iwe->len);
    assert(((uintptr_t)iwe & 0x3) == 0);
    iwe->len = offsetof(struct iw_event, u) + sizeof(struct iw_point) + IW_ESSID_MAX_SIZE;
    iwe->cmd = SIOCGIWESSID;
    iwe->u.essid.length = strlen(scan->ssid);
    iwe->u.essid.flags = 1;

    /* refer:wapi wireless.c:272 */

    iwe->u.essid.pointer = sizeof(struct iw_point);

    memcpy((uint8_t *)iwe + offsetof(struct iw_event, u) + sizeof(struct iw_point), scan->ssid, IW_ESSID_MAX_SIZE);

    curr_pos = (uintptr_t)iwe + iwe->len;
  }

  assert(result_cnt == 0);

  return OK;
}

/****************************************************************************
 * Name: bl602_net_ioctl
 *
 * Description:
 *   Handle network IOCTL commands directed to this device.
 *
 * Input Parameters:
 *   dev - Reference to the NuttX driver state structure
 *   cmd - The IOCTL command
 *   arg - The argument for the IOCTL command
 *
 * Returned Value:
 *   OK on success; Negated errno on failure.
 *
 * Assumptions:
 *   The network is locked.
 *
 ****************************************************************************/

#ifdef CONFIG_NETDEV_IOCTL
static int bl602_net_ioctl(FAR struct net_driver_s *dev, int cmd,
                           unsigned long arg) {
  FAR struct bl602_net_driver_s *priv =
      (FAR struct bl602_net_driver_s *)dev->d_private;
  int ret = -ENOSYS;

  /* Decode and dispatch the driver-specific IOCTL command */

  switch (cmd) {
    /* Add cases here to support the IOCTL commands */

  case SIOCSIWSCAN:
    do {
      struct iwreq *req = (struct iwreq *)arg;
      struct scan_parse_param_s *para = NULL;

      para = kmm_malloc(sizeof(struct scan_parse_param_s));
      if (para == NULL) {
        return -ENOMEM;
      }

      para->priv = priv;
      if (req->u.data.flags) {
        para->flags = req->u.data.flags;

        assert(req->u.data.pointer != NULL);
        para->scan_req = *(struct iw_scan_req *)req->u.data.pointer;
      } else {
        para->flags = 0;
      }

      if (sem_trywait(&g_wifi_scan_sem) == 0) {
        wifi_mgmr_scan(para, scan_complete_indicate);
        return OK;
      } else {
        return -EBUSY;
      }
    } while (0);
    break;

  case SIOCGIWSCAN:
    do {
      struct iwreq *req = (struct iwreq *)arg;
      int ret;

      sem_wait(&g_wifi_scan_sem);

      if (priv->scan_result_len == 0) {
        req->u.data.length = 0;
        sem_post(&g_wifi_scan_sem);
        return OK;
      }

      ret = format_scan_result_to_wapi(req, priv->scan_result_len);
      sem_post(&g_wifi_scan_sem);
      return ret;
    } while (0);
    break;

  case SIOCSIFHWADDR: /* Set device MAC address */
    return -ENOSYS;
    break;

  case SIOCSIWAUTH:
    //ret = bcmf_wl_set_auth_param(priv, (struct iwreq *)arg);
    return -ENOSYS;
    break;

  case SIOCSIWENCODEEXT:
    /* set psk */

    do {
      struct iwreq *req = (struct iwreq *)arg;
      struct iw_encode_ext *ext = req->u.encoding.pointer;
      char *passphrase = kmm_malloc(ext->key_len + 1);
      if (passphrase == NULL) {
        return -ENOMEM;
      }
      strncpy(passphrase, ext->key, ext->key_len);
      passphrase[ext->key_len] = 0;
      syslog(LOG_INFO, "passphrase: %s\r\n", passphrase);

      wifi_mgmr_sta_psk_set(passphrase);
      kmm_free(passphrase);
      return OK;
    } while (0);
    break;

  case SIOCSIWFREQ: /* Set channel/frequency (Hz) */
    wlwarn("WARNING: SIOCSIWFREQ not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCGIWFREQ: /* Get channel/frequency (Hz) */
    wlwarn("WARNING: SIOCGIWFREQ not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCSIWMODE: /* Set operation mode */
    do {
      struct iwreq *req = (struct iwreq *)arg;
      if (req->u.mode == priv->current_mode) {
        syslog(LOG_INFO, "mode not change\r\n");
        return OK;
      }

      if (req->u.mode == IW_MODE_INFRA) {
        /* station */
        priv->wlan = wifi_mgmr_sta_enable();

        memcpy(priv->wlan->mac, priv->net_dev.d_mac.ether.ether_addr_octet, 6);
        syslog(LOG_INFO, "now in station mode \r\n");
        priv->current_mode = IW_MODE_INFRA;
        return OK;
      } else if (req->u.mode == IW_MODE_MASTER) { // AP Mode
        priv->wlan = wifi_mgmr_ap_enable();
        memcpy(priv->wlan->mac, priv->net_dev.d_mac.ether.ether_addr_octet, 6);
        syslog(LOG_INFO, "now in ap state\r\n");
        priv->current_mode = IW_MODE_MASTER;
        return OK;
      } else {
        wlwarn("WARNING: Unsupport mode:%d\r\n", req->u.mode);
      }
    } while (0);
    break;

  case SIOCGIWMODE: /* Get operation mode */
    wlwarn("WARNING: SIOCGIWMODE not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCSIWAP: /* Set access point MAC addresses */
    do {
      struct iwreq *req = (struct iwreq *)arg;

      bl_wifi_ap_mac_addr_set(req->u.ap_addr.sa_data);

      return OK;
    } while (0);
    break;

  case SIOCGIWAP: /* Get access point MAC addresses */
    wlwarn("WARNING: SIOCGIWAP not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCSIWESSID: /* Set ESSID (network name) */
    do {
      struct iwreq *req = (struct iwreq *)arg;
      syslog(LOG_INFO, "essid: %s\r\n", req->u.essid.pointer);
      wifi_mgmr_sta_ssid_set(req->u.essid.pointer);
      if (req->u.essid.flags == 1) {
        /* preform connect ap */
        wifi_mgmr_t *mgmr;
        if (priv->current_mode == IW_MODE_INFRA) {
          mgmr = container_of(priv->wlan, wifi_mgmr_t, wlan_sta);
          wifi_mgmr_sta_autoconnect_enable();
          if (wifi_mgmr_api_connect(mgmr->wifi_mgmr_stat_info.ssid, mgmr->wifi_mgmr_stat_info.psk, NULL, NULL, 0, 0) == -1) {
            return -ENOBUFS;
          }
        } else if (priv->current_mode == IW_MODE_MASTER) {
          mgmr = container_of(priv->wlan, wifi_mgmr_t, wlan_ap);
          if (wifi_mgmr_api_ap_start(mgmr->wifi_mgmr_stat_info.ssid, mgmr->wifi_mgmr_stat_info.psk, 1, 0) < 0) {
            return -ENOBUFS;
          }
        } else {
          return -ENOSYS;
        }
      } else {
        /* perform disconnect */
        if (priv->current_mode == IW_MODE_INFRA) {
          wifi_mgmr_sta_disconnect();
          sleep(1);
          wifi_mgmr_api_idle();
        } else if (priv->current_mode == IW_MODE_MASTER) {
          wifi_mgmr_api_ap_stop();
          sleep(1);
          wifi_mgmr_api_idle();
        }
        return OK;
      }
      return OK;
    } while (0);
    break;

  case SIOCGIWESSID: /* Get ESSID */
    wlwarn("WARNING: SIOCGIWESSID not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCSIWRATE: /* Set default bit rate (bps) */
    wlwarn("WARNING: SIOCSIWRATE not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCGIWRATE: /* Get default bit rate (bps) */
    wlwarn("WARNING: SIOCGIWRATE not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCSIWTXPOW: /* Set transmit power (dBm) */
    wlwarn("WARNING: SIOCSIWTXPOW not implemented\n");
    ret = -ENOSYS;
    break;

  case SIOCGIWTXPOW: /* Get transmit power (dBm) */
    wlwarn("WARNING: SIOCGIWTXPOW not implemented\n");
    ret = -ENOSYS;
    break;

  default:
    nerr("ERROR: Unrecognized IOCTL command: %d\n", cmd);
    return -ENOTTY; /* Special return value for this case */
  }

  return OK;
}
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/
extern void wifi_main(int argc, char *argv[]);
extern void wifi_mgmr_start_background(wifi_conf_t *conf);

uint8_t *bl602_netdev_alloc_txbuf(void) {
  irqstate_t irq = enter_critical_section();
  int idx = BIT_FFS(TX_BUFF_BIT_SIZE, &tx_buf_indicator);
  if (idx == 0) {
    leave_critical_section(irq);
#if 0
    syslog(LOG_WARNING, "Alloc failed!\r\n", idx);
#endif
    return NULL;
  }
#if 0
  syslog(LOG_INFO, "Alloc %d\r\n", idx - 1 );
#endif
  BIT_CLR(TX_BUFF_BIT_SIZE, idx - 1, &tx_buf_indicator);
  leave_critical_section(irq);

  return tx_buff[idx - 1];
}

int bl602_netdev_get_buf_idx(uint8_t *buf) {
  int idx = (uint8_t(*)[BL602_NET_TXBUFF_SIZE])buf - tx_buff;
  return idx;
}

void bl602_netdev_free_txbuf(uint8_t *buf) {
  irqstate_t irq;
  int idx = (uint8_t(*)[BL602_NET_TXBUFF_SIZE])buf - tx_buff;
  assert(idx < BL602_NET_TXBUFF_NUM && idx >= 0);
  assert(tx_buff[idx] == buf);
#if 0
  syslog(LOG_INFO, "free %d\r\n", idx);
#endif
  irq = enter_critical_section();
  BIT_SET(TX_BUFF_BIT_SIZE, idx, &tx_buf_indicator);
  leave_critical_section(irq);
}

/****************************************************************************
 * Name: bl602_net_initialize
 *
 * Description:
 *   Initialize the Ethernet controller and driver
 *
 * Input Parameters:
 *   intf - In the case where there are multiple EMACs, this value
 *          identifies which EMAC is to be initialized.
 *
 * Returned Value:
 *   OK on success; Negated errno on failure.
 *
 * Assumptions:
 *   Called early in initialization before multi-tasking is initiated.
 *
 ****************************************************************************/

static wifi_conf_t g_conf =
    {
        .country_code = "CN",
};

static int wifi_manager_process(int argc, FAR char *argv[]) {
  pthread_attr_t wifi_main_attr;
  pthread_attr_t wifi_mgmr_attr;
  struct sched_param s = {0};
  pthread_t wifi_main_p;
  pthread_t wifi_mgmr_p;
  int ret;

  pthread_attr_init(&wifi_main_attr);
  pthread_attr_init(&wifi_mgmr_attr);

  pthread_attr_setstacksize(&wifi_main_attr, 1024 * 4);
  pthread_attr_setstacksize(&wifi_mgmr_attr, 1024 * 4);

  pthread_attr_setdetachstate(&wifi_main_attr, PTHREAD_CREATE_JOINABLE);
  pthread_attr_setdetachstate(&wifi_mgmr_attr, PTHREAD_CREATE_JOINABLE);

  s.sched_priority = 101;
  pthread_attr_setschedparam(&wifi_main_attr, &s);
  s.sched_priority = 100;
  pthread_attr_setschedparam(&wifi_mgmr_attr, &s);

  ret = pthread_create(&wifi_main_p, &wifi_main_attr, wifi_main, NULL);
  assert(ret == 0);

  wifi_mgmr_drv_init(&g_conf);
  ret = pthread_create(&wifi_mgmr_p, &wifi_mgmr_attr, wifi_mgmr_start, NULL);
  assert(ret == 0);

  /* sleep forever */
  pthread_join(wifi_main_p, NULL);
  pthread_join(wifi_mgmr_p, NULL);

  assert(0);
  return 0;
}

int bl602_net_initialize(int intf) {
  FAR struct bl602_net_driver_s *priv;
  int tmp;
  uint8_t mac[6];

  /* Get the interface structure associated with this interface number. */

  DEBUGASSERT(intf < CONFIG_BL602_NET_NINTERFACES);
  priv = &g_bl602_net[intf];

  /* Check if a Ethernet chip is recognized at its I/O base */

  /* Attach the IRQ to the driver */

#if 0
  if (irq_attach(CONFIG_BL602_NET_IRQ, bl602_net_interrupt, priv))
    {
      /* We could not attach the ISR to the interrupt */

      return -EAGAIN;
    }
#endif

  /* Initialize the driver structure */

  memset(priv, 0, sizeof(struct bl602_net_driver_s));
  priv->net_dev.d_ifup = bl602_net_ifup;       /* I/F up (new IP address) callback */
  priv->net_dev.d_ifdown = bl602_net_ifdown;   /* I/F down callback */
  priv->net_dev.d_txavail = bl602_net_txavail; /* New TX data callback */
#ifdef CONFIG_NET_MCASTGROUP
  priv->net_dev.d_addmac = bl602_net_addmac; /* Add multicast MAC address */
  priv->net_dev.d_rmmac = bl602_net_rmmac;   /* Remove multicast MAC address */
#endif
#ifdef CONFIG_NETDEV_IOCTL
  priv->net_dev.d_ioctl = bl602_net_ioctl; /* Handle network IOCTL commands */
#endif
  priv->net_dev.d_private = priv; /* Used to recover private state from dev */
  priv->current_mode = IW_MODE_AUTO;
  priv->scan_result_len = 0;

  /* Initialize scan semaphore */

  tmp = sem_init(&g_wifi_scan_sem, 0, 1);
  if (tmp < 0) {
    return tmp;
  }

  /* Start wifi process */

  tmp = task_create("wifi_manager", 2, 3072, wifi_manager_process, NULL);
  if (tmp <= 0) {
    sem_destroy(&g_wifi_scan_sem);
    return tmp;
  }

  /* Read the MAC address from the hardware into
   * priv->net_dev.d_mac.ether.ether_addr_octet
   * Applies only if the Ethernet MAC has its own internal address.
   */

  bl602_ef_ctrl_read_mac_address(mac);
  wlinfo(":::MAC:%x %x %x %x %x %x\r\n", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);

  memcpy(priv->net_dev.d_mac.ether.ether_addr_octet, mac, 6);
  bl_wifi_ap_mac_addr_set(priv->net_dev.d_mac.ether.ether_addr_octet);
  bl_wifi_sta_mac_addr_set(priv->net_dev.d_mac.ether.ether_addr_octet);

  /* Register the device with the OS so that socket IOCTLs can be performed */

  tmp = netdev_register(&priv->net_dev, NET_LL_IEEE80211);
  if (tmp < 0) {
    sem_destroy(&g_wifi_scan_sem);
    return tmp;
  }

  return OK;
}

#endif /* CONFIG_NET_BL602_NETDEV */
