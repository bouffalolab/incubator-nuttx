/****************************************************************************
 * drivers/audio/wm8904.c
 *
 * Audio device driver for Wolfson Microelectronics WM8904 Audio codec.
 *
 *   Copyright (C) 2014 Gregory Nutt. All rights reserved.
 *   Author:  Gregory Nutt <gnutt@nuttx.org>
 *
 * References:
 * - "WM8904 Ultra Low Power CODEC for Portable Audio Applications, Pre-
 *    Production", September 2012, Rev 3.3, Wolfson Microelectronics
 *
 * -  The framework for this driver is based on Ken Pettit's VS1053 driver.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <sys/types.h>
#include <sys/ioctl.h>

#include <stdint.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <fixedmath.h>
#include <queue.h>
#include <debug.h>

#include <nuttx/kmalloc.h>
#include <nuttx/clock.h>
#include <nuttx/i2c.h>
#include <nuttx/fs/fs.h>
#include <nuttx/fs/ioctl.h>
#include <nuttx/audio/i2s.h>
#include <nuttx/audio/audio.h>
#include <nuttx/audio/wm8904.h>
#include <nuttx/math.h>

#include "wm8904.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Dummy register address */

#define WM8904_DUMMY              0xff

/* Default FLL configuration */

#define WM8904_DEFAULT_SAMPRATE   11025
#define WM8904_DEFAULT_NCHANNELS  1
#define WM8904_DEFAULT_BPSAMP     16

#define WM8904_STARTBITS          2

#define WM8904_NFLLRATIO_DIV1     0
#define WM8904_NFLLRATIO_DIV2     1
#define WM8904_NFLLRATIO_DIV4     2
#define WM8904_NFLLRATIO_DIV8     3
#define WM8904_NFLLRATIO_DIV16    4
#define WM8904_NFLLRATIO          5

#define WM8904_MINOUTDIV          4
#define WM8904_MAXOUTDIV          64

#define WM8904_BCLK_MAXDIV        20

#define WM8904_FVCO_MIN           90000000
#define WM8904_FVCO_MAX           100000000

/* Commonly defined and redefined macros */

#ifndef MIN
#  define MIN(a,b) (((a) < (b)) ? (a) : (b))
#endif

#ifndef MAX
#  define MAX(a,b) (((a) > (b)) ? (a) : (b))
#endif

/****************************************************************************
 * Private Types
 ****************************************************************************/

struct wm8904_dev_s
{
  /* We are an audio lower half driver (We are also the upper "half" of
   * the WM8904 driver with respect to the board lower half driver).
   *
   * Terminology: Our "lower" half audio instances will be called dev for the
   * publicly visible version and "priv" for the version that only this driver
   * knows.  From the point of view of this driver, it is the board lower
   * "half" that is referred to as "lower".
   */

  struct audio_lowerhalf_s dev;             /* WM8904 audio lower half (this device) */

  /* Our specific driver data goes here */

  const FAR struct wm8904_lower_s *lower;   /* Pointer to the board lower functions */
  FAR struct i2c_dev_s   *i2c;              /* I2C driver to use */
  FAR struct i2s_dev_s   *i2s;              /* I2S driver to use */
  struct dq_queue_s       pendq;            /* Queue of pending buffers to be sent */
  struct dq_queue_s       doneq;            /* Queue of sent buffers to be returned */
  mqd_t                   mq;               /* Message queue for receiving messages */
  char                    mqname[16];       /* Our message queue name */
  pthread_t               threadid;         /* ID of our thread */
  uint32_t                bitrate;          /* Actual programmed bit rate */
  sem_t                   pendsem;          /* Protect pendq */
  uint16_t                samprate;         /* Configured samprate (samples/sec) */
#ifndef CONFIG_AUDIO_EXCLUDE_VOLUME
#ifndef CONFIG_AUDIO_EXCLUDE_BALANCE
  uint16_t                balance;          /* Current balance level (b16) */
#endif  /* CONFIG_AUDIO_EXCLUDE_BALANCE */
  uint8_t                 volume;           /* Current volume level {0..63} */
#endif  /* CONFIG_AUDIO_EXCLUDE_VOLUME */
  uint8_t                 nchannels;        /* Number of channels (1 or 2) */
  uint8_t                 bpsamp;           /* Bits per sample (8 or 16) */
  volatile uint8_t        inflight;         /* Number of audio buffers in-flight */
  bool                    running;          /* True: Worker thread is running */
  bool                    paused;           /* True: Playing is paused */
  bool                    mute;             /* True: Output is muted */
#ifndef CONFIG_AUDIO_EXCLUDE_STOP
  bool                    terminating;      /* True: Stop requested */
#endif
  bool                    reserved;         /* True: Device is reserved */
  volatile int            result;           /* The result of the last transfer */
};

static const uint8_t g_fllratio[WM8904_NFLLRATIO] = {1, 2, 4, 8, 16};

/****************************************************************************
 * Private Function Prototypes
 ****************************************************************************/

#ifndef CONFIG_WM8904_REGDUMP
static
#endif
       uint16_t wm8904_readreg(FAR struct wm8904_dev_s *priv,
                  uint8_t regaddr);
static void     wm8904_writereg(FAR struct wm8904_dev_s *priv,
                  uint8_t regaddr, uint16_t regval);
static void     wm8904_takesem(sem_t *sem);
#define         wm8904_givesem(s) sem_post(s)

#ifndef CONFIG_AUDIO_EXCLUDE_VOLUME
static inline uint16_t wm8904_scalevolume(uint16_t volume, b16_t scale);
static void     wm8904_setvolume(FAR struct wm8904_dev_s *priv,
                 uint16_t volume, bool mute);
#endif
#ifndef CONFIG_AUDIO_EXCLUDE_TONE
static void     wm8904_setbass(FAR struct wm8904_dev_s *priv, uint8_t bass);
static void     wm8904_settreble(FAR struct wm8904_dev_s *priv, uint8_t treble);
#endif

static void     wm8904_setdatawidth(FAR struct wm8904_dev_s *priv);
static void     wm8904_setbitrate(FAR struct wm8904_dev_s *priv);
static void     wm8904_setlrclock(FAR struct wm8904_dev_s *priv);

/* Audio lower half methods (and close friends) */

static int      wm8904_getcaps(FAR struct audio_lowerhalf_s *dev, int type,
                  FAR struct audio_caps_s *caps);
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int      wm8904_configure(FAR struct audio_lowerhalf_s *dev,
                  FAR void *session, FAR const struct audio_caps_s *caps);
#else
static int      wm8904_configure(FAR struct audio_lowerhalf_s *dev,
                  FAR const struct audio_caps_s *caps);
#endif
static int      wm8904_shutdown(FAR struct audio_lowerhalf_s *dev);
static void     wm8904_senddone(FAR struct i2s_dev_s *i2s,
                  FAR struct ap_buffer_s *apb, FAR void *arg, int result);
static void     wm8904_returnbuffers(FAR struct wm8904_dev_s *priv);
static int      wm8904_sendbuffer(FAR struct wm8904_dev_s *priv);
static int      wm8904_interrupt(FAR const struct wm8904_lower_s *lower,
                  FAR void *arg);
static void    *wm8904_workerthread(pthread_addr_t pvarg);
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int      wm8904_start(FAR struct audio_lowerhalf_s *dev,
                  FAR void *session);
#else
static int      wm8904_start(FAR struct audio_lowerhalf_s *dev);
#endif
#ifndef CONFIG_AUDIO_EXCLUDE_STOP
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int      wm8904_stop(FAR struct audio_lowerhalf_s *dev,
                  FAR void* session);
#else
static int      wm8904_stop(FAR struct audio_lowerhalf_s *dev);
#endif
#endif
#ifndef CONFIG_AUDIO_EXCLUDE_PAUSE_RESUME
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int      wm8904_pause(FAR struct audio_lowerhalf_s *dev,
                  FAR void* session);
static int      wm8904_resume(FAR struct audio_lowerhalf_s *dev,
                  FAR void* session);
#else
static int      wm8904_pause(FAR struct audio_lowerhalf_s *dev);
static int      wm8904_resume(FAR struct audio_lowerhalf_s *dev);
#endif
#endif
static int      wm8904_enqueuebuffer(FAR struct audio_lowerhalf_s *dev,
                  FAR struct ap_buffer_s *apb);
static int      wm8904_cancelbuffer(FAR struct audio_lowerhalf_s *dev,
                  FAR struct ap_buffer_s *apb);
static int      wm8904_ioctl(FAR struct audio_lowerhalf_s *dev, int cmd,
                  unsigned long arg);
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int      wm8904_reserve(FAR struct audio_lowerhalf_s *dev,
                  FAR void **session);
#else
static int      wm8904_reserve(FAR struct audio_lowerhalf_s *dev);
#endif
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int      wm8904_release(FAR struct audio_lowerhalf_s *dev,
                  FAR void *session);
#else
static int      wm8904_release(FAR struct audio_lowerhalf_s *dev);
#endif

/* Initialization */

static void     wm8904_audio_output(FAR struct wm8904_dev_s *priv);
#if 0 /* Not used */
static void     wm8904_audio_input(FAR struct wm8904_dev_s *priv);
#endif

/****************************************************************************
 * Private Data
 ****************************************************************************/

static const struct audio_ops_s g_audioops =
{
  wm8904_getcaps,       /* getcaps        */
  wm8904_configure,     /* configure      */
  wm8904_shutdown,      /* shutdown       */
  wm8904_start,         /* start          */
#ifndef CONFIG_AUDIO_EXCLUDE_STOP
  wm8904_stop,          /* stop           */
#endif
#ifndef CONFIG_AUDIO_EXCLUDE_PAUSE_RESUME
  wm8904_pause,         /* pause          */
  wm8904_resume,        /* resume         */
#endif
  NULL,                 /* allocbuffer    */
  NULL,                 /* freebuffer     */
  wm8904_enqueuebuffer, /* enqueue_buffer */
  wm8904_cancelbuffer,  /* cancel_buffer  */
  wm8904_ioctl,         /* ioctl          */
  NULL,                 /* read           */
  NULL,                 /* write          */
  wm8904_reserve,       /* reserve        */
  wm8904_release        /* release        */
};

static const uint8_t g_sysclk_scaleb1[WM8904_BCLK_MAXDIV+1] =
{
   2,  3,  4,  6,  8, 10, 11, /*  1,  1.5,  2,  3,  4,  5,  5.5 */
  12, 16, 20, 22, 24, 32, 40, /*  6,  8,   10, 11, 12, 16, 20   */
  44, 48, 50, 60, 64, 88, 96  /* 22, 24,   25, 30, 32, 44, 48   */
};

/****************************************************************************
 * Private Functions
 ****************************************************************************/

/****************************************************************************
 * Name: wm8904_readreg
 *
 * Description
 *    Read the specified 16-bit register from the WM8904 device.
 *
 ****************************************************************************/

#ifndef CONFIG_WM8904_REGDUMP
static
#endif
uint16_t wm8904_readreg(FAR struct wm8904_dev_s *priv, uint8_t regaddr)
{
  int retries;

  /* Try up to three times to read the register */

  for (retries = 1; retries <= 3; retries++)
    {
      struct i2c_msg_s msg[2];
      uint8_t data[2];
      int ret;

      /* Set up to write the address */

      msg[0].addr   = priv->lower->address;
      msg[0].flags  = 0;
      msg[0].buffer = &regaddr;
      msg[0].length = 1;

      /* Followed by the read data */

      msg[1].addr   = priv->lower->address;
      msg[1].flags  = I2C_M_READ;
      msg[1].buffer = data;
      msg[1].length = 2;

      /* Read the register data.  The returned value is the number messages
       * completed.
       */

      ret = I2C_TRANSFER(priv->i2c, msg, 2);
      if (ret < 0)
        {
#ifdef CONFIG_I2C_RESET
          /* Perhaps the I2C bus is locked up?  Try to shake the bus free */

          auddbg("WARNING: I2C_TRANSFER failed: %d ... Resetting\n", ret);

          ret = up_i2creset(priv->i2c);
          if (ret < 0)
            {
              auddbg("ERROR: up_i2creset failed: %d\n", ret);
              break;
            }
#else
          auddbg("ERROR: I2C_TRANSFER failed: %d\n", ret);
#endif
        }
      else
        {
          uint16_t regval;

          /* The I2C transfer was successful... break out of the loop and
           * return the value read.
           */

          regval = ((uint16_t)data[0] << 8) | (uint16_t)data[1];
          audvdbg("Read: %02x -> %04x\n", regaddr, regval);
          return regval;
        }

      audvdbg("retries=%d regaddr=%02x\n", retries, regaddr);
    }

  /* No error indication is returned on a failure... just return zero */

  return 0;
}

/************************************************************************************
 * Name: wm8904_writereg
 *
 * Description:
 *   Write the specified 16-bit register to the WM8904 device.
 *
 ************************************************************************************/

static void wm8904_writereg(FAR struct wm8904_dev_s *priv, uint8_t regaddr,
                            uint16_t regval)
{
  int retries;

  /* Try up to three times to read the register */

  for (retries = 1; retries <= 3; retries++)
    {
      uint8_t data[3];
      int ret;

      /* Set up the data to write */

      data[0] = regaddr;
      data[1] = regval >> 8;
      data[2] = regval & 0xff;

      /* Read the register data.  The returned value is the number messages
       * completed.
       */

      ret = I2C_WRITE(priv->i2c, data, 3);
      if (ret < 0)
        {
#ifdef CONFIG_I2C_RESET
          /* Perhaps the I2C bus is locked up?  Try to shake the bus free */

          auddbg("WARNING: I2C_TRANSFER failed: %d ... Resetting\n", ret);

          ret = up_i2creset(priv->i2c);
          if (ret < 0)
            {
              auddbg("ERROR: up_i2creset failed: %d\n", ret);
              break;
            }
#else
          auddbg("ERROR: I2C_TRANSFER failed: %d\n", ret);
#endif
        }
      else
        {
          /* The I2C transfer was successful... break out of the loop and
           * return the value read.
           */

          audvdbg("Write: %02x <- %04x\n", regaddr, regval);
          return;
        }

      audvdbg("retries=%d regaddr=%02x\n", retries, regaddr);
    }
}

/************************************************************************************
 * Name: wm8904_takesem
 *
 * Description:
 *  Take a semaphore count, handling the nasty EINTR return if we are interrupted
 *  by a signal.
 *
 ************************************************************************************/

static void wm8904_takesem(sem_t *sem)
{
  int ret;

  do
    {
      ret = sem_wait(sem);
      DEBUGASSERT(ret == 0 || errno == EINTR);
    }
  while (ret < 0);
}

/************************************************************************************
 * Name: wm8904_scalevolume
 *
 * Description:
 *   Set the right and left volume values in the WM8904 device based on the current
 *   volume and balance settings.
 *
 ************************************************************************************/

#ifndef CONFIG_AUDIO_EXCLUDE_VOLUME
static inline uint16_t wm8904_scalevolume(uint16_t volume, b16_t scale)
{
  return b16toi((b16_t)volume * scale);
}
#endif

/************************************************************************************
 * Name: wm8904_setvolume
 *
 * Description:
 *   Set the right and left volume values in the WM8904 device based on the current
 *   volume and balance settings.
 *
 ************************************************************************************/

#ifndef CONFIG_AUDIO_EXCLUDE_VOLUME
static void wm8904_setvolume(FAR struct wm8904_dev_s *priv, uint16_t volume,
                             bool mute)
{
  uint32_t leftlevel;
  uint32_t rightlevel;
  uint16_t regval;

  audvdbg("volume=%u mute=%u\n", volume, mute);

#ifndef CONFIG_AUDIO_EXCLUDE_BALANCE
  /* Calculate the left channel volume level {0..1000} */

  if (priv->balance <= 500)
    {
      leftlevel = volume;
    }
  else if (priv->balance == 1000)
    {
      leftlevel = 0;
    }
  else
    {
      leftlevel = wm8904_scalevolume(volume, b16ONE - (b16_t)priv->balance);
    }

  /* Calculate the right channel volume level {0..1000} */

  if (priv->balance >= 500)
    {
      rightlevel = volume;
    }
  else if (priv->balance == 0)
    {
      rightlevel = 0;
    }
  else
    {
      rightlevel = wm8904_scalevolume(volume, (b16_t)priv->balance);
    }
#else
  leftlevel  = priv->volume;
  rightlevel = priv->volume;
#endif

  /* Set the volume */

  regval = WM8904_HPOUTZC | WM8904_HPOUT_VOL(leftlevel);
  if (mute)
    {
      regval |= WM8904_HPOUT_MUTE;
    }

  wm8904_writereg(priv, WM8904_ANA_LEFT_OUT1, regval);

  regval = WM8904_HPOUTZC | WM8904_HPOUT_VOL(rightlevel);
  if (mute)
    {
      regval |= WM8904_HPOUT_MUTE;
    }

  wm8904_writereg(priv, WM8904_ANA_RIGHT_OUT1, regval);

  /* Remember the volume level and mute settings */

  priv->volume = volume;
  priv->mute   = mute;
}
#endif /* CONFIG_AUDIO_EXCLUDE_VOLUME */

/************************************************************************************
 * Name: wm8904_setbass
 *
 * Description:
 *   Set the bass level.
 *
 *   The level and range are in whole percentage levels (0-100).
 *
 ************************************************************************************/

#ifndef CONFIG_AUDIO_EXCLUDE_TONE
static void wm8904_setbass(FAR struct wm8904_dev_s *priv, uint8_t bass)
{
  audvdbg("bass=%u\n", bass);
#warning Missing logic
}
#endif /* CONFIG_AUDIO_EXCLUDE_TONE */

/************************************************************************************
 * Name: wm8904_settreble
 *
 * Description:
 *   Set the treble level .
 *
 *   The level and range are in whole percentage levels (0-100).
 *
 ************************************************************************************/

#ifndef CONFIG_AUDIO_EXCLUDE_TONE
static void wm8904_settreble(FAR struct wm8904_dev_s *priv, uint8_t treble)
{
  audvdbg("treble=%u\n", treble);
#warning Missing logic
}
#endif /* CONFIG_AUDIO_EXCLUDE_TONE */

/****************************************************************************
 * Name: wm8904_setdatawidth
 *
 * Description:
 *   Set the 8- or 16-bit data modes
 *
 ****************************************************************************/

static void wm8904_setdatawidth(FAR struct wm8904_dev_s *priv)
{
  uint16_t regval;

  /* "8-bit mode is selected whenever DAC_COMP=1 or ADC_COMP=1. The use of
   *  8-bit data allows samples to be passed using as few as 8 BCLK cycles
   *  per LRCLK frame. When using DSP mode B, 8-bit data words may be
   *  transferred consecutively every 8 BCLK cycles.
   *
   * "8-bit mode (without Companding) may be enabled by setting
   *  DAC_COMPMODE=1 or ADC_COMPMODE=1, when DAC_COMP=0 and ADC_COMP=0.
   */

  if (priv->bpsamp == 16)
    {
      /* Reset default default setting */

      regval = (WM8904_AIFADCR_SRC | WM8904_AIFDACR_SRC);
      wm8904_writereg(priv, WM8904_AIF0, regval);
    }
  else
    {
      /* This should select 8-bit with no companding */

      regval = (WM8904_AIFADCR_SRC  | WM8904_AIFDACR_SRC |
                WM8904_ADC_COMPMODE | WM8904_DAC_COMPMODE);
      wm8904_writereg(priv, WM8904_AIF0, regval);
    }
}

/****************************************************************************
 * Name: wm8904_setbitrate
 *
 * Description:
 *   Program the FLL to achieve the requested bitrate (fout).  Given:
 *
 *     samprate  - Samples per second
 *     nchannels - Number of channels of data
 *     bpsamp    - Bits per sample
 *
 *   Then
 *     fout = samprate * nchannels * bpsamp
 *
 *   For example:
 *     samplerate = 11,025 samples/sec
 *     nchannels  = 1
 *     bpsamp     = 16     bits
 *
 *   Then
 *     fout    = 11025 samples/sec * 1 * 16 bits/sample = 176.4 bits/sec
 *
 *   The clocking is configured like this:
 *     MCLK   is the FLL source clock
 *     Fref   is the scaled down version of MCLK
 *     Fvco   is the output frequency from the FLL
 *     Fout   is the final output from the FLL that drives the SYSCLK
 *     SYSCLK can be divided down to generate the BCLK
 *
 *   The FLL output frequency is generated at that fout by:
 *
 *     Fout = (Fvco / FLL_OUTDIV)
 *
 *   The FLL operating frequency is set according to:
 *
 *     Fvco = Fref * N.K * FLL_RATIO
 *
 *   Where Fref is the input frequency frequency as determined by
 *   FLL_CLK_REF_DIV. Fvco must be in the range of 90-100MHz.
 *
 *   As an example:
 *     FLL_CLK_REF_DIV = 16
 *     FLL_OUTDIV = 8
 *     N.K = 187.25
 *     FLL_RATIO=16
 *     Fref =32,768
 *
 *     Fvco = 32,768 * 187.25 / 16 = 383,488 Hz
 *     Fout = 383,488 / 8 = 47,936 Hz (approx. 48Khz)
 *
 ****************************************************************************/

static void wm8904_setbitrate(FAR struct wm8904_dev_s *priv)
{
  uint64_t tmp64;
  uint32_t fref;
  uint32_t fvco;
  uint32_t fout;
  uint32_t minfout;
  uint16_t regval;
  b16_t nk;
  unsigned int fllndx;
  unsigned int divndx;
  unsigned int outdiv;

  DEBUGASSERT(priv && priv->lower);

  /* First calculate the desired bitrate (fout) */

  fout = (uint32_t)priv->samprate * priv->nchannels * (priv->bpsamp + WM8904_STARTBITS);

  audvdbg("sample rate=%u nchannels=%u  bpsamp=%u fout=%lu\n",
          priv->samprate, priv->nchannels, priv->bpsamp, (unsigned long)fout);

  /* "The FLL is enabled using the FLL_ENA register bit. Note that, when
   * changing FLL settings, it is recommended that the digital circuit be
   * disabled via FLL_ENA and then re-enabled after the other register
   * settings have been updated."
   */

  wm8904_writereg(priv, WM8904_FLL_CTRL1, 0);

  /* Determine Fref.  The source refrence clock should be the MCLK */

  fref   = priv->lower->mclk;
  regval = (WM8904_FLL_CLK_REF_SRC_MCLK | WM8904_FLL_CLK_REF_DIV1);

  /* MCLK must be divided down so that fref <=13.5MHz */

  if (fref > 4*13500000)
    {
      fref >>= 3;
      regval = (WM8904_FLL_CLK_REF_SRC_MCLK | WM8904_FLL_CLK_REF_DIV8);
    }
  else if (fref > 2*13500000)
    {
      fref >>= 2;
      regval = (WM8904_FLL_CLK_REF_SRC_MCLK | WM8904_FLL_CLK_REF_DIV4);
    }
  else if (fref > 13500000)
    {
      fref >>= 1;
      regval = (WM8904_FLL_CLK_REF_SRC_MCLK | WM8904_FLL_CLK_REF_DIV2);
    }

  wm8904_writereg(priv, WM8904_FLL_CTRL5, regval);

  /* Fvco must be between 90 and 100Mhz.  In order to meet this
   * requirement, the value of FLL_OUTDIV should be selected according
   * to the desired output Fout.  The divider, FLL_OUTDIV, must be set
   * so that Fvco is in the range 90-100MHz.  The available divisions
   * are integers from 4 to 64.
   *
   *   Fout = Fvco /FLL_OUTDIV
   *
   *
   * Is this Fout realizable?  This often happens for very low frequencies.
   * If so, we can select a different final SYSCLK scaling frequency.
   */

  minfout = WM8904_FVCO_MAX / WM8904_MAXOUTDIV;
  divndx = 0;

  for (;;)
    {
      /* Calculate the new value of Fout that we would need to provide
       * with this SYSCLK divider in place.
       */

      uint32_t newfout = (g_sysclk_scaleb1[divndx] * fout) >> 1;

      /* Is this increased Fout realizable?  Or are we just just out of
       * dividers?
       */

      if (newfout >= minfout || divndx == WM8904_BCLK_MAXDIV)
        {
          /* In either case, this is the Fout and divider that we will be
           * using.
           */

          fout = newfout;
          break;
        }

      /* We have more.. Try the next divider */

      divndx++;
    }

  /* When we get here, divndx holds the register value for the new SYSCLK
   * divider.  Set the divider value in the Audio Interface 2 register.
   */

  regval = WM8904_OPCLK_DIV1 | WM8904_BCLK_DIV(divndx);
  wm8904_writereg(priv, WM8904_AIF2, regval);

  /* Now lets make our best guess for FLL_OUTDIV
   *
   *   FLL_OUTDIV = 95000000 / Fout
   */

  outdiv = ((WM8904_FVCO_MAX + WM8904_FVCO_MAX) >> 1) / fout;
  if (outdiv < 4)
    {
      outdiv = 4;
    }
  else if (outdiv > 64)
    {
      outdiv = 64;
    }

  /* The WM8904 suggests the selecting FLL_RATIO via the following
   * range checks:
   */

  if (fref >= 1000000)
    {
      fllndx = WM8904_NFLLRATIO_DIV1;
    }
  else if (fref > 256000)
    {
      fllndx = WM8904_NFLLRATIO_DIV2;
    }
  else if (fref > 128000)
    {
      fllndx = WM8904_NFLLRATIO_DIV4;
    }
  else if (fref > 64000)
    {
      fllndx = WM8904_NFLLRATIO_DIV8;
    }
  else
    {
      fllndx = WM8904_NFLLRATIO_DIV16;
    }

  /* Finally, we need to determine the value of N.K
   *
   *   Fvco = (Fout * FLL_OUTDIV)
   *   N.K  = Fvco / (FLL_FRATIO * FREF)
   */

  fvco  = fout * outdiv;
  tmp64 = ((uint64_t)fvco << 16) / (g_fllratio[fllndx] * fref);
  nk    = (b16_t)tmp64;

  audvdbg("mclk=%lu fref=%lu fvco=%lu fout=%lu divndx=%u\n",
          (unsigned long)priv->lower->mclk, (unsigned long)fref,
          (unsigned long)fvco, (unsigned long)fout, divndx);
  audvdbg("N.K=%08lx outdiv=%u fllratio=%u\n",
          (unsigned long)nk, outdiv, g_fllratio[fllndx]);

  /* Save the actual bit rate that we are using.  This will be used by the
   * LRCLCK calculations.
   */

  priv->bitrate = fout;

  /* Now, Configure the FLL */
  /* FLL Control 1
   *
   * FLL_FRACN_ENA=1        : Enables fractional mode
   * FLL_OSC_EN=0           : FLL internal oscillator disabled
   * FLL_ENA=0              : The FLL is not enabled
   *
   * "FLL_OSC_ENA must be enabled before enabling FLL_ENA."
   */

  wm8904_writereg(priv, WM8904_FLL_CTRL1, 0);
  wm8904_writereg(priv, WM8904_FLL_CTRL1, WM8904_FLL_FRACN_ENA);

  /* FLL Control 2
   *
   * FLL_OUTDIV             : FLL Fout clock divider
   *                        : Fout = Fvco / FLL_OUTDIV
   *                        : Calculated above
   * FLL_CTRL_RATE=1        : Frequency of the FLL control block,
   *                        : = Fvco / FLL_CTRL_RATE
   * FLL_FRATIO             : Fvco clock divider
   *                        : Determined by MCLK tests above
   */

  regval = WM8904_FLL_OUTDIV(outdiv) | WM8904_FLL_CTRL_RATE(1) |
           WM8904_FLL_FRATIO(fllndx);
  wm8904_writereg(priv, WM8904_FLL_CTRL2, regval);

  /* FLL Control 3
   *
   * Fractional multiply for Fref
   */

  wm8904_writereg(priv, WM8904_FLL_CTRL3, b16frac(nk));

  /* FLL Control 4
   *
   * FLL_N                  : Integer multiply for Fref
   * FLL_GAIN               : Gain applied to error
   */

  regval = WM8904_FLL_N(b16toi(nk)) | WM8904_FLL_GAIN_X1;
  wm8904_writereg(priv, WM8904_FLL_CTRL4, regval);

  /* FLL Control 5
   *
   * FLL_CLK_REF_DIV        : FLL Clock Reference Divider
   *
   * Already set above
   */
 
  /* Allow time for FLL lock.  Typical is 2 MSec.  Lock status is available
   * in the WM8904 interrupt status register.
   */

  usleep(5*5000);

  /* Enable the FLL */

  regval = WM8904_FLL_FRACN_ENA | WM8904_FLL_ENA;
  wm8904_writereg(priv, WM8904_FLL_CTRL1, regval);

  /* Dump all FLL registers */

  audvdbg("FLL control 1[%02x]: %04x\n",
          WM8904_FLL_CTRL1, wm8904_readreg(priv, WM8904_FLL_CTRL1));
  audvdbg("FLL control 2[%02x]: %04x\n",
          WM8904_FLL_CTRL2, wm8904_readreg(priv, WM8904_FLL_CTRL2));
  audvdbg("FLL control 3[%02x]: %04x\n",
          WM8904_FLL_CTRL3, wm8904_readreg(priv, WM8904_FLL_CTRL3));
  audvdbg("FLL control 4[%02x]: %04x\n",
          WM8904_FLL_CTRL4, wm8904_readreg(priv, WM8904_FLL_CTRL4));
  audvdbg("FLL control 5[%02x]: %04x\n",
          WM8904_FLL_CTRL5, wm8904_readreg(priv, WM8904_FLL_CTRL5));
}

/****************************************************************************
 * Name: wm8904_setlrclock
 *
 * Description:
 *   Program the LRLCK (left/right clock) to trigger each frame at the
 *   correct rate.
 *
 ****************************************************************************/

static void wm8904_setlrclock(FAR struct wm8904_dev_s *priv)
{
  unsigned int lrperiod;
  uint16_t regval;

  /* The number of bits in one sample depends on the number of bits in one
   * word plus any extra start bits.
   *
   * The number of channels is not important.  However, I2C needs an edge
   * on each frame of the following gives the number of BCLKS to achieve
   * an LRCLK edge at each sample.
   */

  lrperiod = 2 * (unsigned int)(priv->bpsamp + WM8904_STARTBITS);

  /* Set the new LRCLK clock frequency is the, divider */

  regval = WM8904_LRCLK_DIR | WM8904_LRCLK_RATE(lrperiod);
  wm8904_writereg(priv, WM8904_AIF3, regval);
}

/****************************************************************************
 * Name: wm8904_getcaps
 *
 * Description:
 *   Get the audio device capabilities
 *
 ****************************************************************************/

static int wm8904_getcaps(FAR struct audio_lowerhalf_s *dev, int type,
                          FAR struct audio_caps_s *caps)
{
  /* Validate the structure */

  DEBUGASSERT(caps && caps->ac_len >= sizeof(struct audio_caps_s));
  audvdbg("type=%d ac_type=%d\n", type, caps->ac_type);

  /* Fill in the caller's structure based on requested info */

  caps->ac_format.hw  = 0;
  caps->ac_controls.w = 0;

  switch (caps->ac_type)
    {
      /* Caller is querying for the types of units we support */

      case AUDIO_TYPE_QUERY:

        /* Provide our overall capabilities.  The interfacing software
         * must then call us back for specific info for each capability.
         */

        caps->ac_channels = 2;       /* Stereo output */

        switch (caps->ac_subtype)
          {
            case AUDIO_TYPE_QUERY:
              /* We don't decode any formats!  Only something above us in
               * the audio stream can perform decoding on our behalf.
               */

              /* The types of audio units we implement */

              caps->ac_controls.b[0] = AUDIO_TYPE_OUTPUT | AUDIO_TYPE_FEATURE |
                                     AUDIO_TYPE_PROCESSING;

              break;

            case AUDIO_FMT_MIDI:
              /* We only support Format 0 */

              caps->ac_controls.b[0] = AUDIO_SUBFMT_END;
              break;

            default:
              caps->ac_controls.b[0] = AUDIO_SUBFMT_END;
              break;
          }

        break;

      /* Provide capabilities of our OUTPUT unit */

      case AUDIO_TYPE_OUTPUT:

        caps->ac_channels = 2;

        switch (caps->ac_subtype)
          {
            case AUDIO_TYPE_QUERY:

              /* Report the Sample rates we support */

              caps->ac_controls.b[0] = AUDIO_SAMP_RATE_8K | AUDIO_SAMP_RATE_11K |
                                       AUDIO_SAMP_RATE_16K | AUDIO_SAMP_RATE_22K |
                                       AUDIO_SAMP_RATE_32K | AUDIO_SAMP_RATE_44K |
                                       AUDIO_SAMP_RATE_48K;
              break;

            case AUDIO_FMT_MP3:
            case AUDIO_FMT_WMA:
            case AUDIO_FMT_PCM:
              break;

            default:
              break;
          }

        break;

      /* Provide capabilities of our FEATURE units */

      case AUDIO_TYPE_FEATURE:

        /* If the sub-type is UNDEF, then report the Feature Units we support */

        if (caps->ac_subtype == AUDIO_FU_UNDEF)
          {
            /* Fill in the ac_controls section with the Feature Units we have */

            caps->ac_controls.b[0] = AUDIO_FU_VOLUME | AUDIO_FU_BASS | AUDIO_FU_TREBLE;
            caps->ac_controls.b[1] = AUDIO_FU_BALANCE >> 8;
          }
        else
          {
            /* TODO:  Do we need to provide specific info for the Feature Units,
             * such as volume setting ranges, etc.?
             */
          }

        break;

      /* Provide capabilities of our PROCESSING unit */

      case AUDIO_TYPE_PROCESSING:

        switch (caps->ac_subtype)
          {
            case AUDIO_PU_UNDEF:

              /* Provide the type of Processing Units we support */

              caps->ac_controls.b[0] = AUDIO_PU_STEREO_EXTENDER;
              break;

            case AUDIO_PU_STEREO_EXTENDER:

              /* Provide capabilities of our Stereo Extender */

              caps->ac_controls.b[0] = AUDIO_STEXT_ENABLE | AUDIO_STEXT_WIDTH;
              break;

            default:

              /* Other types of processing uint we don't support */

              break;
          }

        break;

      /* All others we don't support */

      default:

        /* Zero out the fields to indicate no support */

        caps->ac_subtype = 0;
        caps->ac_channels = 0;

        break;
    }

  /* Return the length of the audio_caps_s struct for validation of
   * proper Audio device type.
   */

  return caps->ac_len;
}

/****************************************************************************
 * Name: wm8904_configure
 *
 * Description:
 *   Configure the audio device for the specified  mode of operation.
 *
 ****************************************************************************/

#ifdef CONFIG_AUDIO_MULTI_SESSION
static int wm8904_configure(FAR struct audio_lowerhalf_s *dev,
                            FAR void *session,
                            FAR const struct audio_caps_s *caps)
#else
static int wm8904_configure(FAR struct audio_lowerhalf_s *dev,
                            FAR const struct audio_caps_s *caps)
#endif
{
#if !defined(CONFIG_AUDIO_EXCLUDE_VOLUME) || !defined(CONFIG_AUDIO_EXCLUDE_TONE)
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;
#endif
  int ret = OK;

  DEBUGASSERT(priv && caps);
  audvdbg("ac_type: %d\n", caps->ac_type);

  /* Process the configure operation */

  switch (caps->ac_type)
    {
    case AUDIO_TYPE_FEATURE:
      audvdbg("  AUDIO_TYPE_FEATURE\n");

      /* Process based on Feature Unit */

      switch (caps->ac_format.hw)
        {
#ifndef CONFIG_AUDIO_EXCLUDE_VOLUME
        case AUDIO_FU_VOLUME:
          {
            /* Set the volume */

            uint16_t volume = caps->ac_controls.hw[0];
            audvdbg("    Volume: %d\n", volume);

            if (volume >= 0 && volume <= 1000)
              {
                /* Scale the volume setting to the range {0.. 63} */

                wm8904_setvolume(priv, (63 * volume / 1000), priv->mute);
              }
            else
              {
                ret = -EDOM;
              }
           }
          break;
#endif  /* CONFIG_AUDIO_EXCLUDE_VOLUME */

#ifndef CONFIG_AUDIO_EXCLUDE_TONE
        case AUDIO_FU_BASS:
          {
            /* Set the bass.  The percentage level (0-100) is in the
             * ac_controls.b[0] parameter.
             */

            uint8_t bass = caps->ac_controls.b[0];
            audvdbg("    Bass: %d\n", bass);

            if (bass <= 100)
              {
                wm8904_setbass(priv, bass);
              }
            else
              {
                ret = -EDOM;
              }
          }
          break;

        case AUDIO_FU_TREBLE:
          {
            /* Set the treble.  The percentage level (0-100) is in the
             * ac_controls.b[0] parameter.
             */

            uint8_t treble = caps->ac_controls.b[0];
            audvdbg("    Treble: %d\n", treble);

            if (treble <= 100)
              {
                wm8904_settreble(priv, treble);
              }
            else
              {
                ret = -EDOM;
              }
          }
          break;
#endif  /* CONFIG_AUDIO_EXCLUDE_TONE */

        default:
          auddbg("    Unrecognized feature unit\n");
          ret = -ENOTTY;
          break;
        }
        break;

    case AUDIO_TYPE_OUTPUT:
      {
        audvdbg("  AUDIO_TYPE_OUTPUT:\n");
        audvdbg("    Number of channels: %u\n", caps->ac_channels);
        audvdbg("    Sample rate:        %u\n", caps->ac_controls.hw[0]);
        audvdbg("    Sample width:       %u\n", caps->ac_controls.b[2]);

        /* Verify that all of the requested values are supported */

        ret = -ERANGE;
        if (caps->ac_channels != 1 && caps->ac_channels != 2)
          {
            auddbg("ERROR: Unsupported number of channels: %d\n",
                   caps->ac_channels);
            break;
          }

        if (caps->ac_controls.b[2] != 8 && caps->ac_controls.b[2] != 16)
          {
            auddbg("ERROR: Unsupported bits per sample: %d\n",
                   caps->ac_controls.b[2]);
            break;
          }

        /* Save the current stream configuration */

        priv->samprate  = caps->ac_controls.hw[0];
        priv->nchannels = caps->ac_channels;
        priv->bpsamp    = caps->ac_controls.b[2];

        /* Reconfigure the FLL to support the resulting number or channels,
         * bits per sample, and bitrate.
         */

        wm8904_setdatawidth(priv);
        wm8904_setbitrate(priv);
        wm8904_setlrclock(priv);
        wm8904_writereg(priv, WM8904_DUMMY, 0x55aa);
        ret = OK;
      }
      break;

    case AUDIO_TYPE_PROCESSING:
      break;
    }

  return ret;
}

/****************************************************************************
 * Name: wm8904_shutdown
 *
 * Description:
 *   Shutdown the WM8904 chip and put it in the lowest power state possible.
 *
 ****************************************************************************/

static int wm8904_shutdown(FAR struct audio_lowerhalf_s *dev)
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;

  DEBUGASSERT(priv);

  /* First disable interrupts */

  WM8904_DISABLE(priv->lower);

  /* Now issue a software reset.  This puts all WM8904 registers back in
   * their default state.
   */
  /* REVISIT:  But then the register configuration is lost. */
  /* wm8904_writereg(priv, WM8904_SWRST, 0); */

  return OK;
}

/****************************************************************************
 * Name: wm8904_senddone
 *
 * Description:
 *   This is the I2S callback function that is invoked when the transfer
 *   completes.
 *
 ****************************************************************************/

static void  wm8904_senddone(FAR struct i2s_dev_s *i2s,
                             FAR struct ap_buffer_s *apb, FAR void *arg,
                             int result)
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)arg;
  struct audio_msg_s msg;
  irqstate_t flags;
  int ret;

  DEBUGASSERT(i2s && priv && priv->running && apb);
  audvdbg("apb=%p inflight=%d result=%d\n", apb, priv->inflight, result);

  /* We do not place any restriction on the context in which this function
   * is called.  It may be called from an interrupt handler.  Therefore, the
   * doneq and in-flight values might be accessed from the interrupt level.
   * Not the best design.  But we will use interrupt controls to protect
   * against that possibility.
   */

  flags = irqsave();

  /* Add the completed buffer to the end of our doneq.  We do not yet
   * decrement the reference count.
   */

  dq_addlast((FAR dq_entry_t *)apb, &priv->doneq);

  /* And decrement the number of buffers in-flight */

  DEBUGASSERT(priv->inflight > 0);
  priv->inflight--;

  /* Save the result of the transfer */
  /* REVISIT:  This can be overwritten */

  priv->result = result;
  irqrestore(flags);

  /* Now send a message to the worker thread, informing it that there are
   * buffers in the done queue that need to be cleaned up.
   */

  msg.msgId = AUDIO_MSG_COMPLETE;
  ret = mq_send(priv->mq, &msg, sizeof(msg), CONFIG_WM8904_MSG_PRIO);
  if (ret < 0)
    {
      audlldbg("ERROR: mq_send failed: %d\n", errno);
    }
}

/****************************************************************************
 * Name: wm8904_returnbuffers
 *
 * Description:
 *   This function is called after the complete of one or more data
 *   transfers.  This function will empty the done queue and release our
 *   reference to each buffer.
 *
 ****************************************************************************/

static void wm8904_returnbuffers(FAR struct wm8904_dev_s *priv)
{
  FAR struct ap_buffer_s *apb;
  irqstate_t flags;

  /* The doneq and in-flight values might be accessed from the interrupt
   * level in some implementations.  Not the best design.  But we will
   * use interrupt controls to protect against that possibility.
   */

  flags = irqsave();
  while (dq_peek(&priv->doneq) != NULL)
    {
      /* Take the next buffer from the queue of completed transfers */

      apb = (FAR struct ap_buffer_s *)dq_remfirst(&priv->doneq);
      irqrestore(flags);

      audvdbg("Returning apb=%p flags=%04x\n", apb, apb->flags);

      /* Are we returning the final buffer in the stream? */

      if ((apb->flags & AUDIO_APB_FINAL) != 0)
        {
          /* Both the pending and the done queues should be empty and there
           * should be no buffers in-flight.
           */

          DEBUGASSERT(dq_empty(&priv->doneq) && dq_empty(&priv->pendq) &&
                      priv->inflight == 0);

          /* Set the terminating flag.  This will, eventually, cause the
           * worker thread to exit (if it is not already terminating).
           */

          audvdbg("Terminating\n");
          priv->terminating = true;
        }

      /* Release our reference to the audio buffer */

      apb_free(apb);

      /* Send the buffer back up to the previous level. */

#ifdef CONFIG_AUDIO_MULTI_SESSION
      priv->dev.upper(priv->dev.priv, AUDIO_CALLBACK_DEQUEUE, apb, OK, NULL);
#else
      priv->dev.upper(priv->dev.priv, AUDIO_CALLBACK_DEQUEUE, apb, OK);
#endif
      flags = irqsave();
    }

  irqrestore(flags);
}

/****************************************************************************
 * Name: wm8904_sendbuffer
 *
 * Description:
 *   Start the transfer an audio buffer to the WM8904 via I2S.  This
 *   will not wait for the transfer to complete but will return immediately.
 *   the wmd8904_senddone called will be invoked when the transfer
 *   completes, stimulating the worker thread to call this function again.
 *
 ****************************************************************************/

static int wm8904_sendbuffer(FAR struct wm8904_dev_s *priv)
{
  FAR struct ap_buffer_s *apb;
  irqstate_t flags;
  uint32_t timeout;
  int ret = OK;

  /* Loop while there are audio buffers to be sent and we have few than
   * CONFIG_WM8904_INFLIGHT then "in-flight"
   *
   * The 'inflight' value might be modified from the interrupt level in some
   * implementations.  We will use interrupt controls to protect against
   * that possibility.
   *
   * The 'pendq', on the other hand, is protected via a semaphore.  Let's
   * hold the semaphore while we are busy here and disable the interrupts
   * only while accessing 'inflight'.
   */

  wm8904_takesem(&priv->pendsem);
  while (priv->inflight < CONFIG_WM8904_INFLIGHT &&
         dq_peek(&priv->pendq) != NULL && !priv->paused)
    {
      /* Take next buffer from the queue of pending transfers */

      apb = (FAR struct ap_buffer_s *)dq_remfirst(&priv->pendq);
      audvdbg("Sending apb=%p, size=%d inflight=%d\n",
              apb, apb->nbytes, priv->inflight);

      /* Increment the number of buffers in-flight before sending in order
       * to avoid a possible race condition.
       */

      flags = irqsave();
      priv->inflight++;
      irqrestore(flags);

      /* Send the entire audio buffer via I2S.  What is a reasonable timeout
       * to use?  This would depend on the bit rate and size of the buffer.
       *
       * Samples in the buffer:
       *   = buffer_size * 8 / bpsamp                            samples
       * Expected transfer time:
       *   = samples / samprate                                  seconds
       *   = (samples * 1000) / (samprate * msec_per_tick)       ticks
       *   = (buffer_size * 8000) /(samprate * bpsamp * msec_per_tick)
       *
       * We will set the timeout about twice that.  Here is a reasonable
       * approximation that saves a multiply:
       *   = (buffer_size * 16384) /(samprate * bpsamp * msec_per_tick)
       *
       * REVISIT:  Does this take into account the number channels?  Perhaps
       * saving an reusing the bitrate would give a better and simpler
       * calculation.
       */

      timeout = (((uint32_t)(apb->nbytes - apb->curbyte) << 14) /
                 ((uint32_t)priv->samprate * MSEC_PER_TICK * priv->bpsamp));

      ret = I2S_SEND(priv->i2s, apb, wm8904_senddone, priv, timeout);
      if (ret < 0)
        {
          auddbg("ERROR: I2S_SEND failed: %d\n", ret);
          break;
        }
    }

  wm8904_givesem(&priv->pendsem);
  return ret;
}

/****************************************************************************
 * Name: wm8904_interrupt
 *
 *  This is the ISR that services the WM8904 pin from the WM8904, which
 *  indicates the chip is ready to receive additional data.  We use it to
 *  send a message to our worker thread message queue so it knows to wake
 *  up and send more data.
 *
 ****************************************************************************/

static int wm8904_interrupt(FAR const struct wm8904_lower_s *lower,
                            FAR void *arg)
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)arg;
  struct audio_msg_s msg;
  int ret;

  DEBUGASSERT(lower && priv);

  /* Create a message and send it to the worker thread */
  /* REVISIT this */

  if (priv->running)
    {
      msg.msgId = AUDIO_MSG_DATA_REQUEST;
      ret = mq_send(priv->mq, &msg, sizeof(msg), CONFIG_WM8904_MSG_PRIO);
      if (ret < 0)
        {
          audlldbg("ERROR: mq_send failed: %d\n", errno);
        }
    }

  return OK;
}

/****************************************************************************
 * Name: wm8904_workerthread
 *
 *  This is the thread that feeds data to the chip and keeps the audio
 *  stream going.
 *
 ****************************************************************************/

static void *wm8904_workerthread(pthread_addr_t pvarg)
{
  FAR struct wm8904_dev_s *priv = (struct wm8904_dev_s *) pvarg;
  struct audio_msg_s msg;
  FAR struct ap_buffer_s *apb;
  int msglen;
  int prio;

  audvdbg("Entry\n");

#ifndef CONFIG_AUDIO_EXCLUDE_STOP
  priv->terminating = false;
#endif

  /* Mark ourself as running and make sure that WM8904 interrupts are
   * enabled.
   */

  priv->running = true;
  WM8904_ENABLE(priv->lower);
  wm8904_setvolume(priv, priv->volume, false);

  /* Loop as long as we are supposed to be running and as long as we have
   * buffers in-flight.
   */

  while (priv->running || priv->inflight > 0)
    {
      /* Check if we have been asked to terminate.  We have to check if we
       * still have buffers in-flight.  If we do, then we can't stop until
       * birds come back to roost.
       */

      if (priv->terminating && priv->inflight <= 0)
        {
          /* We are IDLE.  Break out of the loop and exit. */

          break;
        }
      else
        {
          /* Check if we can send more audio buffers to the WM8904 */

          wm8904_sendbuffer(priv);
        }

      /* Wait for messages from our message queue */

      msglen = mq_receive(priv->mq, &msg, sizeof(msg), &prio);

      /* Handle the case when we return with no message */

      if (msglen < sizeof(struct audio_msg_s))
        {
          auddbg("ERROR: Message too small: %d\n", msglen);
          continue;
        }

      /* Process the message */

      switch (msg.msgId)
        {
          /* The ISR has requested more data.  We will catch this case at
           * the top of the loop.
           */

          case AUDIO_MSG_DATA_REQUEST:
            audvdbg("AUDIO_MSG_DATA_REQUEST\n");
            break;

          /* Stop the playback */

#ifndef CONFIG_AUDIO_EXCLUDE_STOP
          case AUDIO_MSG_STOP:
            /* Indicate that we are terminating */

            audvdbg("AUDIO_MSG_STOP: Terminating\n");
            priv->terminating = true;
            break;
#endif

          /* We have a new buffer to send.  We will catch this case at
           * the top of the loop.
           */

          case AUDIO_MSG_ENQUEUE:
            audvdbg("AUDIO_MSG_ENQUEUE\n");
            break;

          /* We will wake up from the I2S callback with this message */

          case AUDIO_MSG_COMPLETE:
            audvdbg("AUDIO_MSG_COMPLETE\n");
            wm8904_returnbuffers(priv);
            break;

          default:
            auddbg("ERROR: Ignoring message ID %d\n", msg.msgId);
            break;
        }
    }

  /* Disable the WM8904 interrupt */

  WM8904_DISABLE(priv->lower);

  /* Mute the volume and disable the FLL output */

  wm8904_setvolume(priv, priv->volume, true);
  wm8904_writereg(priv, WM8904_FLL_CTRL1, 0);
  wm8904_writereg(priv, WM8904_DUMMY, 0x55aa);

  /* Return any pending buffers in our pending queue */

  wm8904_takesem(&priv->pendsem);
  while ((apb = (FAR struct ap_buffer_s *)dq_remfirst(&priv->pendq)) != NULL)
    {
      /* Release our reference to the buffer */

      apb_free(apb);

      /* Send the buffer back up to the previous level. */

#ifdef CONFIG_AUDIO_MULTI_SESSION
      priv->dev.upper(priv->dev.priv, AUDIO_CALLBACK_DEQUEUE, apb, OK, NULL);
#else
      priv->dev.upper(priv->dev.priv, AUDIO_CALLBACK_DEQUEUE, apb, OK);
#endif
    }

  wm8904_givesem(&priv->pendsem);

  /* Return any pending buffers in our done queue */

  wm8904_returnbuffers(priv);

  /* Close the message queue */

  mq_close(priv->mq);
  mq_unlink(priv->mqname);
  priv->mq = NULL;

  /* Send an AUDIO_MSG_COMPLETE message to the client */

#ifdef CONFIG_AUDIO_MULTI_SESSION
  priv->dev.upper(priv->dev.priv, AUDIO_CALLBACK_COMPLETE, NULL, OK, NULL);
#else
  priv->dev.upper(priv->dev.priv, AUDIO_CALLBACK_COMPLETE, NULL, OK);
#endif

  audvdbg("Exit\n");
  return NULL;
}

/****************************************************************************
 * Name: wm8904_start
 *
 * Description:
 *   Start the configured operation (audio streaming, volume enabled, etc.).
 *
 ****************************************************************************/

#ifdef CONFIG_AUDIO_MULTI_SESSION
static int wm8904_start(FAR struct audio_lowerhalf_s *dev, FAR void *session)
#else
static int wm8904_start(FAR struct audio_lowerhalf_s *dev)
#endif
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;
  struct sched_param sparam;
  struct mq_attr attr;
  pthread_attr_t tattr;
  FAR void *value;
  int ret;

  audvdbg("Entry\n");

  /* Exit reduced power modes of operation */
  /* REVISIT */

  /* Create a message queue for the worker thread */

  snprintf(priv->mqname, sizeof(priv->mqname), "/tmp/%X", priv);

  attr.mq_maxmsg  = 16;
  attr.mq_msgsize = sizeof(struct audio_msg_s);
  attr.mq_curmsgs = 0;
  attr.mq_flags   = 0;

  priv->mq = mq_open(priv->mqname, O_RDWR | O_CREAT, 0644, &attr);
  if (priv->mq == NULL)
    {
      /* Error creating message queue! */

      auddbg("ERROR: Couldn't allocate message queue\n");
      return -ENOMEM;
    }

  /* Join any old worker thread we had created to prevent a memory leak */

  if (priv->threadid != 0)
    {
      audvdbg("Joining old thread\n");
      pthread_join(priv->threadid, &value);
    }

  /* Start our thread for sending data to the device */

  pthread_attr_init(&tattr);
  sparam.sched_priority = sched_get_priority_max(SCHED_FIFO) - 3;
  (void)pthread_attr_setschedparam(&tattr, &sparam);
  (void)pthread_attr_setstacksize(&tattr, CONFIG_WM8904_WORKER_STACKSIZE);

  audvdbg("Starting worker thread\n");
  ret = pthread_create(&priv->threadid, &tattr, wm8904_workerthread,
                       (pthread_addr_t)priv);
  if (ret != OK)
    {
      auddbg("ERROR: pthread_create failed: %d\n", ret);
    }
  else
    {
      pthread_setname_np(priv->threadid, "wm8904");
      audvdbg("Created worker thread\n");
    }

  return ret;
}

/****************************************************************************
 * Name: wm8904_stop
 *
 * Description: Stop the configured operation (audio streaming, volume
 *              disabled, etc.).
 *
 ****************************************************************************/

#ifndef CONFIG_AUDIO_EXCLUDE_STOP
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int wm8904_stop(FAR struct audio_lowerhalf_s *dev, FAR void* session)
#else
static int wm8904_stop(FAR struct audio_lowerhalf_s *dev)
#endif
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;
  struct audio_msg_s term_msg;
  FAR void *value;

  /* Send a message to stop all audio streaming */

  term_msg.msgId = AUDIO_MSG_STOP;
  term_msg.u.data = 0;
  mq_send(priv->mq, &term_msg, sizeof(term_msg), CONFIG_WM8904_MSG_PRIO);

  /* Join the worker thread */

  pthread_join(priv->threadid, &value);
  priv->threadid = 0;

  /* Enter into a reduced power usage mode */
  /* REVISIT: */

  return OK;
}
#endif

/****************************************************************************
 * Name: wm8904_pause
 *
 * Description: Pauses the playback.
 *
 ****************************************************************************/

#ifndef CONFIG_AUDIO_EXCLUDE_PAUSE_RESUME
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int wm8904_pause(FAR struct audio_lowerhalf_s *dev, FAR void* session)
#else
static int wm8904_pause(FAR struct audio_lowerhalf_s *dev)
#endif
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;

  if (priv->running && !priv->paused)
    {
      /* Disable interrupts to prevent us from suppling any more data */

      priv->paused = true;
      wm8904_setvolume(priv, priv->volume, true);
      WM8904_DISABLE(priv->lower);
    }

  return OK;
}
#endif /* CONFIG_AUDIO_EXCLUDE_PAUSE_RESUME */

/****************************************************************************
 * Name: wm8904_resume
 *
 * Description: Resumes the playback.
 *
 ****************************************************************************/

#ifndef CONFIG_AUDIO_EXCLUDE_PAUSE_RESUME
#ifdef CONFIG_AUDIO_MULTI_SESSION
static int wm8904_resume(FAR struct audio_lowerhalf_s *dev, FAR void* session)
#else
static int wm8904_resume(FAR struct audio_lowerhalf_s *dev)
#endif
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;

  if (priv->running && priv->paused)
    {
      priv->paused = false;
      wm8904_setvolume(priv, priv->volume, false);

      /* Enable interrupts to allow sampling data */

      wm8904_sendbuffer(priv);
      WM8904_ENABLE(priv->lower);
    }

  return OK;
}
#endif /* CONFIG_AUDIO_EXCLUDE_PAUSE_RESUME */

/****************************************************************************
 * Name: wm8904_enqueuebuffer
 *
 * Description: Enqueue an Audio Pipeline Buffer for playback/ processing.
 *
 ****************************************************************************/

static int wm8904_enqueuebuffer(FAR struct audio_lowerhalf_s *dev,
                                FAR struct ap_buffer_s *apb)
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;
  struct audio_msg_s  term_msg;
  int ret = -EAGAIN;

  audvdbg("apb=%p\n", apb);

  /* Take a reference on the new audio buffer */

  apb_reference(apb);

  /* Add the new buffer to the tail of pending audio buffers */

  wm8904_takesem(&priv->pendsem);
  apb->flags |= AUDIO_APB_OUTPUT_ENQUEUED;
  dq_addlast(&apb->dq_entry, &priv->pendq);
  wm8904_givesem(&priv->pendsem);

  /* Send a message to the worker thread indicating that a new buffer has been
   * enqueued.  If mq is NULL, then the playing has not yet started.  In that
   * case we are just "priming the pump" and we don't need to send any message.
   */

  ret = OK;
  if (priv->mq != NULL)
    {
      term_msg.msgId  = AUDIO_MSG_ENQUEUE;
      term_msg.u.data = 0;

      ret = mq_send(priv->mq, &term_msg, sizeof(term_msg), CONFIG_WM8904_MSG_PRIO);
      if (ret < 0)
        {
          int errcode = errno;
          DEBUGASSERT(errcode > 0);

          auddbg("ERROR: mq_send failed: %d\n", errcode);
          UNUSED(errcode);
        }
    }

  return ret;
}

/****************************************************************************
 * Name: wm8904_cancelbuffer
 *
 * Description: Called when an enqueued buffer is being cancelled.
 *
 ****************************************************************************/

static int wm8904_cancelbuffer(FAR struct audio_lowerhalf_s *dev,
                               FAR struct ap_buffer_s *apb)
{
  audvdbg("apb=%p\n", apb);
  return OK;
}

/****************************************************************************
 * Name: wm8904_ioctl
 *
 * Description: Perform a device ioctl
 *
 ****************************************************************************/

static int wm8904_ioctl(FAR struct audio_lowerhalf_s *dev, int cmd,
                        unsigned long arg)
{
#ifdef CONFIG_AUDIO_DRIVER_SPECIFIC_BUFFERS
  FAR struct ap_buffer_info_s *bufinfo;
#endif

  /* Deal with ioctls passed from the upper-half driver */

  switch (cmd)
    {
      /* Check for AUDIOIOC_HWRESET ioctl.  This ioctl is passed straight
       * through from the upper-half audio driver.
       */

      case AUDIOIOC_HWRESET:
        {
          /* REVISIT:  Should we completely re-initialize the chip?   We
           * can't just issue a software reset; that would puts all WM8904
           * registers back in their default state.
           */

          audvdbg("AUDIOIOC_HWRESET:\n");
        }
        break;

       /* Report our preferred buffer size and quantity */

#ifdef CONFIG_AUDIO_DRIVER_SPECIFIC_BUFFERS
      case AUDIOIOC_GETBUFFERINFO:
        {
          audvdbg("AUDIOIOC_GETBUFFERINFO:\n");
          bufinfo              = (FAR struct ap_buffer_info_s *) arg;
          bufinfo->buffer_size = CONFIG_WM8904_BUFFER_SIZE;
          bufinfo->nbuffers    = CONFIG_WM8904_NUM_BUFFERS;
        }
        break;
#endif

      default:
        audvdbg("Ignored\n");
        break;
    }

  return OK;
}

/****************************************************************************
 * Name: wm8904_reserve
 *
 * Description: Reserves a session (the only one we have).
 *
 ****************************************************************************/

#ifdef CONFIG_AUDIO_MULTI_SESSION
static int wm8904_reserve(FAR struct audio_lowerhalf_s *dev,
                          FAR void **session)
#else
static int wm8904_reserve(FAR struct audio_lowerhalf_s *dev)
#endif
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *) dev;
  int   ret = OK;

  /* Borrow the APBQ semaphore for thread sync */

  wm8904_takesem(&priv->pendsem);
  if (priv->reserved)
    {
      ret = -EBUSY;
    }
  else
    {
      /* Initialize the session context */

#ifdef CONFIG_AUDIO_MULTI_SESSION
     *session           = NULL;
#endif
      priv->inflight    = 0;
      priv->running     = false;
      priv->paused      = false;
#ifndef CONFIG_AUDIO_EXCLUDE_STOP
      priv->terminating = false;
#endif
      priv->reserved    = true;
    }

  wm8904_givesem(&priv->pendsem);

  return ret;
}

/****************************************************************************
 * Name: wm8904_release
 *
 * Description: Releases the session (the only one we have).
 *
 ****************************************************************************/

#ifdef CONFIG_AUDIO_MULTI_SESSION
static int wm8904_release(FAR struct audio_lowerhalf_s *dev,
                          FAR void *session)
#else
static int wm8904_release(FAR struct audio_lowerhalf_s *dev)
#endif
{
  FAR struct wm8904_dev_s *priv = (FAR struct wm8904_dev_s *)dev;
  void  *value;

  /* Join any old worker thread we had created to prevent a memory leak */

  if (priv->threadid != 0)
    {
      pthread_join(priv->threadid, &value);
      priv->threadid = 0;
    }

  /* Borrow the APBQ semaphore for thread sync */

  wm8904_takesem(&priv->pendsem);

  /* Really we should free any queued buffers here */

  priv->reserved = false;
  wm8904_givesem(&priv->pendsem);

  return OK;
}

/****************************************************************************
 * Name: wm8904_audio_output
 *
 * Description:
 *   Initialize and configure the WM8904 device as an audio output device.
 *
 * Input Parameters:
 *   priv - A reference to the driver state structure
 *
 * Returned Value:
 *   None.  No failures are detected.
 *
 ****************************************************************************/

static void wm8904_audio_output(FAR struct wm8904_dev_s *priv)
{
  uint16_t regval;

  /* Bias Control.
   * Preserve undocumented default bit.WM8904_DUMMY
   */

  regval = WM8904_ISEL_HIGH | WM8904_BIAS_ENA | 0x0010;
  wm8904_writereg(priv, WM8904_BIAS_CTRL, regval);

  /* VMID Control */

  regval = WM8904_VMID_BUF_ENA | WM8904_VMID_RES_NORMAL | WM8904_VMID_ENA;
  wm8904_writereg(priv, WM8904_VMID_CTRL, regval);

  /* Mic Bias Control 0 */
  /* MICDET_ENA=1, MICBIAS_ENA=1   */

  regval = WM8904_MICDET_ENA | WM8904_MICBIAS_ENA;
  wm8904_writereg(priv, WM8904_MIC_BIAS_CTRL0, regval);

  /* Mic Bias Control 1. */

  wm8904_writereg(priv, WM8904_MIC_BIAS_CTRL1, 0xc000);

  /* Power Management 0 */

  regval = WM8904_INL_ENA | WM8904_INR_ENA;
  wm8904_writereg(priv, WM8904_PM0, regval);

  /* Power Management 2 */

  regval = WM8904_HPL_PGA_ENA | WM8904_HPR_PGA_ENA;
  wm8904_writereg(priv, WM8904_PM2, regval);

  /* Power Management 6 */
  /* DACL_ENA=1, DACR_ENA=1, ADCL_ENA=1, ADCR_ENA=1  */

  regval = WM8904_DACL_ENA | WM8904_DACR_ENA | WM8904_ADCL_ENA | WM8904_ADCR_ENA;
  wm8904_writereg(priv, WM8904_PM6, regval);

  /* Clock Rates 0.
   *
   * This value sets TOCLK_RATE_DIV16=0, TOCLK_RATE_X4=0, and MCLK_DIV=0 while
   * preserving the state of some undocumented bits (see wm8904.h).
   *
   *   MCLK_DIV=0           : MCLK is is not divided by 2.
   */

  wm8904_writereg(priv, WM8904_CLKRATE0, 0x845e);

  /* Clock Rates 1.
   *
   * Contains settings the control the sample rate.
   */

  /* Clock Rates 2
   *
   * Contains various controls.  Some that are controlled here include:
   *
   *   WM8904_MCLK_INV=0    : MCLK is not inverted
   *   WM8904_SYSCLK_SRC=1  : SYSCLK source is FLL
   *   WM8904_TOCLK_RATE=0  :
   *   WM8904_OPCLK_ENA=0   :
   *   WM8904_CLK_SYS_ENA=1 : SYSCLK is enabled
   *   WM8904_CLK_DSP_ENA=1 : DSP clock is enabled
   *   WM8904_TOCLK_ENA=0   :
   */

  regval = WM8904_SYSCLK_SRCFLL | WM8904_CLK_SYS_ENA | WM8904_CLK_DSP_ENA;
  wm8904_writereg(priv, WM8904_CLKRATE2, regval);

  /* Audio Interface 0.
   *
   * Reset value is:
   *   No DAC invert
   *   No volume boost
   *   No loopback
   *   Left/Right ADC/DAC channels output on Left/Right
   *   Companding options set by wm8904_setdatawidth()
   */

  wm8904_setdatawidth(priv);

  /* Audio Interface 1.
   *
   * This value sets AIFADC_TDM=0, AIFADC_TDM_CHAN=0, BCLK_DIR=1 while preserving
   * the state of some undocumented bits (see wm8904.h).
   *
   *   Digital audio interface format      : I2S
   *   Digital audio interface word length : 24
   *   AIF_LRCLK_INV=0                     : LRCLK not inverted
   *   BCLK_DIR=1                          : BCLK is an output (will clock I2S).
   *   AIF_BCLK_INV=0                      : BCLK not inverted
   *   AIF_TRIS=0                          : Outputs not tri-stated
   *   AIFADC_TDM_CHAN=0                   : ADCDAT outputs data on slot 0
   *   AIFADC_TDM=0                        : Normal ADCDAT operation
   *   AIFDAC_TDM_CHAN=0                   : DACDAT data input on slot 0
   *   AIFDAC_TDM=0                        : Normal DACDAT operation
   */

  regval = WM8904_AIF_FMT_I2S | WM8904_AIF_WL_24BITS | WM8904_BCLK_DIR;
  wm8904_writereg(priv, WM8904_AIF1, regval);

  /* Audio Interface 2.
   *
   * Holds GPIO clock divider and the SYSCLK divider needed to generate BCLK.
   * This will get initialized by wm8904_setbitrate().
   */

  /* Audio Interface 3
   *
   * Set LRCLK as an output with rate = BCLK / 64
   */

  regval = WM8904_LRCLK_DIR | WM8904_LRCLK_RATE(64);
  wm8904_writereg(priv, WM8904_AIF3, regval);

  /* DAC Digital 1 */

  wm8904_writereg(priv, WM8904_DAC_DIGI1, 0);

  /* Analogue Left Input 0 */
  /* Analogue Right Input 0 */

  regval =  WM8904_IN_VOL(5);
  wm8904_writereg(priv, WM8904_ANA_LEFT_IN0, regval);
  wm8904_writereg(priv, WM8904_ANA_RIGHT_IN0, regval);

  /* Analogue Left Input 1 */

  wm8904_writereg(priv, WM8904_ANA_LEFT_IN1, 0);
  wm8904_writereg(priv, WM8904_ANA_RIGHT_IN1, 0);

  /* Analogue OUT1 Left */
  /* Analogue OUT1 Right */

  wm8904_setvolume(priv, CONFIG_WM8904_INITVOLUME, true);

  /* DC Servo 0 */

  regval = WM8904_DCS_ENA_CHAN_1 | WM8904_DCS_ENA_CHAN_0;
  wm8904_writereg(priv, WM8904_DC_SERVO0, regval);

  /* Analogue HP 0 */

  regval = WM8904_HPL_RMV_SHORT | WM8904_HPL_ENA_OUTP | WM8904_HPL_ENA_DLY | WM8904_HPL_ENA |
           WM8904_HPR_RMV_SHORT | WM8904_HPR_ENA_OUTP | WM8904_HPR_ENA_DLY | WM8904_HPR_ENA;
  wm8904_writereg(priv, WM8904_ANA_HP0, regval);

  /* Charge Pump 0 */

  wm8904_writereg(priv, WM8904_CHG_PUMP0, WM8904_CP_ENA);

  /* Class W 0 */

  regval = WM8904_CP_DYN_PWR | 0x0004;
  wm8904_writereg(priv, WM8904_CLASS_W0, regval);

  /* Configure the FLL */

  wm8904_setbitrate(priv);
  wm8904_setlrclock(priv);
  wm8904_writereg(priv, WM8904_DUMMY, 0x55aa);
}

/****************************************************************************
 * Name: wm8904_audio_input
 *
 * Description:
 *   Initialize and configure the WM8904 device as an audio output device
 *   (Right input only).
 *
 * Input Parameters:
 *   prive   - A reference to the driver state structure
 *
 * Returned Value:
 *   None.  No failures are detected.
 *
 ****************************************************************************/

#if 0 /* Not used */
static void wm8904_audio_input(FAR struct wm8904_dev_s *priv)
{
  /* Analogue Left Input 0  */

  wm8904_writereg(priv, WM8904_ANA_LEFT_IN0, WM8904_INMUTE);

  /* Analogue Right Input 0 */

  wm8904_writereg(priv, WM8904_ANA_RIGHT_IN0, WM8904_IN_VOL(5));

  /* Analogue Left Input 1 */

  wm8904_writereg(priv, WM8904_ANA_LEFT_IN1, 0);

  /* Analogue Right Input 1 */

  wm8904_writereg(priv, WM8904_ANA_RIGHT_IN1, WM8904_IP_SEL_N_IN2L);
}
#endif

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: wm8904_initialize
 *
 * Description:
 *   Initialize the WM8904 device.
 *
 * Input Parameters:
 *   i2c     - An I2C driver instance
 *   i2s     - An I2S driver instance
 *   lower   - Persistent board configuration data
 *
 * Returned Value:
 *   A new lower half audio interface for the WM8904 device is returned on
 *   success; NULL is returned on failure.
 *
 ****************************************************************************/

FAR struct audio_lowerhalf_s *
  wm8904_initialize(FAR struct i2c_dev_s *i2c, FAR struct i2s_dev_s *i2s,
                    FAR const struct wm8904_lower_s *lower)
{
  FAR struct wm8904_dev_s *priv;
  uint16_t regval;

  /* Sanity check */

  DEBUGASSERT(i2c && i2s && lower);

  /* Allocate a WM8904 device structure */

  priv = (FAR struct wm8904_dev_s *)kzalloc(sizeof(struct wm8904_dev_s));
  if (priv)
    {
      /* Initialize the WM8904 device structure.  Since we used kzalloc,
       * only the non-zero elements of the structure need to be initialized.
       */

      priv->dev.ops    = &g_audioops;
      priv->lower      = lower;
      priv->i2c        = i2c;
      priv->i2s        = i2s;
      priv->samprate   = WM8904_DEFAULT_SAMPRATE;
      priv->nchannels  = WM8904_DEFAULT_NCHANNELS;
      priv->bpsamp     = WM8904_DEFAULT_BPSAMP;
#if !defined(CONFIG_AUDIO_EXCLUDE_VOLUME) && !defined(CONFIG_AUDIO_EXCLUDE_BALANCE)
      priv->balance    = b16HALF;            /* Center balance */
#endif

      sem_init(&priv->pendsem, 0, 1);
      dq_init(&priv->pendq);
      dq_init(&priv->doneq);

      /* Initialize I2C */

      auddbg("address=%02x frequency=%d\n", lower->address, lower->frequency);
      I2C_SETFREQUENCY(i2c, lower->frequency);
      I2C_SETADDRESS(i2c, lower->address, 7);

      /* Software reset.  This puts all WM8904 registers back in their
       * default state.
       */

      wm8904_writereg(priv, WM8904_SWRST, 0);
      wm8904_dump_registers(&priv->dev, "After reset");

      /* Verify that WM8904 is present and available on this I2C */

      regval = wm8904_readreg(priv, WM8904_ID);
      if (regval != WM8904_SW_RST_DEV_ID1)
        {
          auddbg("ERROR: WM8904 not found: ID=%04x\n", regval);
          goto errout_with_dev;
        }

      /* Configure the WM8904 hardware as an audio input device */

      wm8904_audio_output(priv);
      wm8904_dump_registers(&priv->dev, "After configuration");

      /* Attach our ISR to this device */

      WM8904_ATTACH(lower, wm8904_interrupt, priv);
      return &priv->dev;
    }

  return NULL;

errout_with_dev:
  sem_destroy(&priv->pendsem);
  kfree(priv);
  return NULL;
}
