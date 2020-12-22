/****************************************************************************
 * <Relative path to the file>
 * <Optional one line file description>
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

#ifndef _BL602_NETDEV_H__
#define _BL602_NETDEV_H__

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <stdint.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define PRESERVE_80211_HEADER_LEN 128

#define BL602_NET_EVT_TX_DONE (0x1 << 0x0)
#define BL602_NET_EVT_RX      (0x1 << 0x1)

/****************************************************************************
 * Public Types
 ****************************************************************************/

#ifndef __ASSEMBLY__


/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Inline Functions
 ****************************************************************************/

/****************************************************************************
 * Name: <Inline function name>
 *
 * Description:
 *   Description of the operation of the inline function.
 *
 * Input Parameters:
 *   A list of input parameters, one-per-line, appears here along with a
 *   description of each input parameter.
 *
 * Returned Value:
 *   Description of the value returned by this function (if any),
 *   including an enumeration of all possible error values.
 *
 * Assumptions/Limitations:
 *   Anything else that one might need to know to use this function.
 *
 ****************************************************************************/


/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

uint8_t *bl602_netdev_alloc_txbuf(void);
void bl602_netdev_free_txbuf(uint8_t *buf);

int bl602_net_notify(uint32_t event, uint8_t *data, int len);
/****************************************************************************
 * Name: <Global function name>
 *
 * Description:
 *   Description of the operation of the function.
 *
 * Input Parameters:
 *   A list of input parameters, one-per-line, appears here along with a
 *   description of each input parameter.
 *
 * Returned Value:
 *   Description of the value returned by this function (if any),
 *   including an enumeration of all possible error values.
 *
 * Assumptions/Limitations:
 *   Anything else that one might need to know to use this function.
 *
 ****************************************************************************/


#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif /* __INCLUDE_ASSERT_H */
#endif /* _BL602_NETDEV_H__ */
