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

#ifndef  __SEC_ENG_REG_H__
#define  __SEC_ENG_REG_H__

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/bl602_common.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* 0x0 : se_sha_0_ctrl */
#define SEC_ENG_SE_SHA_0_CTRL_OFFSET                            (0x0)
#define SEC_ENG_SE_SHA_0_BUSY                                   SEC_ENG_SE_SHA_0_BUSY
#define SEC_ENG_SE_SHA_0_BUSY_POS                               (0U)
#define SEC_ENG_SE_SHA_0_BUSY_LEN                               (1U)
#define SEC_ENG_SE_SHA_0_BUSY_MSK                               (((1U<<SEC_ENG_SE_SHA_0_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_0_BUSY_POS)
#define SEC_ENG_SE_SHA_0_BUSY_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_0_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_0_BUSY_POS))
#define SEC_ENG_SE_SHA_0_TRIG_1T                                SEC_ENG_SE_SHA_0_TRIG_1T
#define SEC_ENG_SE_SHA_0_TRIG_1T_POS                            (1U)
#define SEC_ENG_SE_SHA_0_TRIG_1T_LEN                            (1U)
#define SEC_ENG_SE_SHA_0_TRIG_1T_MSK                            (((1U<<SEC_ENG_SE_SHA_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_TRIG_1T_POS)
#define SEC_ENG_SE_SHA_0_TRIG_1T_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_TRIG_1T_POS))
#define SEC_ENG_SE_SHA_0_MODE                                   SEC_ENG_SE_SHA_0_MODE
#define SEC_ENG_SE_SHA_0_MODE_POS                               (2U)
#define SEC_ENG_SE_SHA_0_MODE_LEN                               (3U)
#define SEC_ENG_SE_SHA_0_MODE_MSK                               (((1U<<SEC_ENG_SE_SHA_0_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_MODE_POS)
#define SEC_ENG_SE_SHA_0_MODE_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_0_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_MODE_POS))
#define SEC_ENG_SE_SHA_0_EN                                     SEC_ENG_SE_SHA_0_EN
#define SEC_ENG_SE_SHA_0_EN_POS                                 (5U)
#define SEC_ENG_SE_SHA_0_EN_LEN                                 (1U)
#define SEC_ENG_SE_SHA_0_EN_MSK                                 (((1U<<SEC_ENG_SE_SHA_0_EN_LEN)-1)<<SEC_ENG_SE_SHA_0_EN_POS)
#define SEC_ENG_SE_SHA_0_EN_UMSK                                (~(((1U<<SEC_ENG_SE_SHA_0_EN_LEN)-1)<<SEC_ENG_SE_SHA_0_EN_POS))
#define SEC_ENG_SE_SHA_0_HASH_SEL                               SEC_ENG_SE_SHA_0_HASH_SEL
#define SEC_ENG_SE_SHA_0_HASH_SEL_POS                           (6U)
#define SEC_ENG_SE_SHA_0_HASH_SEL_LEN                           (1U)
#define SEC_ENG_SE_SHA_0_HASH_SEL_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_SEL_POS)
#define SEC_ENG_SE_SHA_0_HASH_SEL_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_SEL_POS))
#define SEC_ENG_SE_SHA_0_INT                                    SEC_ENG_SE_SHA_0_INT
#define SEC_ENG_SE_SHA_0_INT_POS                                (8U)
#define SEC_ENG_SE_SHA_0_INT_LEN                                (1U)
#define SEC_ENG_SE_SHA_0_INT_MSK                                (((1U<<SEC_ENG_SE_SHA_0_INT_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_POS)
#define SEC_ENG_SE_SHA_0_INT_UMSK                               (~(((1U<<SEC_ENG_SE_SHA_0_INT_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_POS))
#define SEC_ENG_SE_SHA_0_INT_CLR_1T                             SEC_ENG_SE_SHA_0_INT_CLR_1T
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_POS                         (9U)
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_SHA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_SHA_0_INT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_SHA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_SHA_0_INT_SET_1T                             SEC_ENG_SE_SHA_0_INT_SET_1T
#define SEC_ENG_SE_SHA_0_INT_SET_1T_POS                         (10U)
#define SEC_ENG_SE_SHA_0_INT_SET_1T_LEN                         (1U)
#define SEC_ENG_SE_SHA_0_INT_SET_1T_MSK                         (((1U<<SEC_ENG_SE_SHA_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_SET_1T_POS)
#define SEC_ENG_SE_SHA_0_INT_SET_1T_UMSK                        (~(((1U<<SEC_ENG_SE_SHA_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_SET_1T_POS))
#define SEC_ENG_SE_SHA_0_INT_MASK                               SEC_ENG_SE_SHA_0_INT_MASK
#define SEC_ENG_SE_SHA_0_INT_MASK_POS                           (11U)
#define SEC_ENG_SE_SHA_0_INT_MASK_LEN                           (1U)
#define SEC_ENG_SE_SHA_0_INT_MASK_MSK                           (((1U<<SEC_ENG_SE_SHA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_MASK_POS)
#define SEC_ENG_SE_SHA_0_INT_MASK_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_0_INT_MASK_POS))
#define SEC_ENG_SE_SHA_0_LINK_MODE                              SEC_ENG_SE_SHA_0_LINK_MODE
#define SEC_ENG_SE_SHA_0_LINK_MODE_POS                          (15U)
#define SEC_ENG_SE_SHA_0_LINK_MODE_LEN                          (1U)
#define SEC_ENG_SE_SHA_0_LINK_MODE_MSK                          (((1U<<SEC_ENG_SE_SHA_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_LINK_MODE_POS)
#define SEC_ENG_SE_SHA_0_LINK_MODE_UMSK                         (~(((1U<<SEC_ENG_SE_SHA_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_0_LINK_MODE_POS))
#define SEC_ENG_SE_SHA_0_MSG_LEN                                SEC_ENG_SE_SHA_0_MSG_LEN
#define SEC_ENG_SE_SHA_0_MSG_LEN_POS                            (16U)
#define SEC_ENG_SE_SHA_0_MSG_LEN_LEN                            (16U)
#define SEC_ENG_SE_SHA_0_MSG_LEN_MSK                            (((1U<<SEC_ENG_SE_SHA_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_0_MSG_LEN_POS)
#define SEC_ENG_SE_SHA_0_MSG_LEN_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_0_MSG_LEN_POS))

/* 0x4 : se_sha_0_msa */
#define SEC_ENG_SE_SHA_0_MSA_OFFSET                             (0x4)
#define SEC_ENG_SE_SHA_0_MSA                                    SEC_ENG_SE_SHA_0_MSA
#define SEC_ENG_SE_SHA_0_MSA_POS                                (0U)
#define SEC_ENG_SE_SHA_0_MSA_LEN                                (32U)
#define SEC_ENG_SE_SHA_0_MSA_MSK                                (((1U<<SEC_ENG_SE_SHA_0_MSA_LEN)-1)<<SEC_ENG_SE_SHA_0_MSA_POS)
#define SEC_ENG_SE_SHA_0_MSA_UMSK                               (~(((1U<<SEC_ENG_SE_SHA_0_MSA_LEN)-1)<<SEC_ENG_SE_SHA_0_MSA_POS))

/* 0x8 : se_sha_0_status */
#define SEC_ENG_SE_SHA_0_STATUS_OFFSET                          (0x8)
#define SEC_ENG_SE_SHA_0_STATUS                                 SEC_ENG_SE_SHA_0_STATUS
#define SEC_ENG_SE_SHA_0_STATUS_POS                             (0U)
#define SEC_ENG_SE_SHA_0_STATUS_LEN                             (32U)
#define SEC_ENG_SE_SHA_0_STATUS_MSK                             (((1U<<SEC_ENG_SE_SHA_0_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_0_STATUS_POS)
#define SEC_ENG_SE_SHA_0_STATUS_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_0_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_0_STATUS_POS))

/* 0xC : se_sha_0_endian */
#define SEC_ENG_SE_SHA_0_ENDIAN_OFFSET                          (0xC)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN                            SEC_ENG_SE_SHA_0_DOUT_ENDIAN
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_POS                        (0U)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_LEN                        (1U)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_MSK                        (((1U<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_SHA_0_DOUT_ENDIAN_UMSK                       (~(((1U<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_0_DOUT_ENDIAN_POS))

/* 0x10 : se_sha_0_hash_l_0 */
#define SEC_ENG_SE_SHA_0_HASH_L_0_OFFSET                        (0x10)
#define SEC_ENG_SE_SHA_0_HASH_L_0                               SEC_ENG_SE_SHA_0_HASH_L_0
#define SEC_ENG_SE_SHA_0_HASH_L_0_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_0_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_0_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_0_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_0_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_0_POS))

/* 0x14 : se_sha_0_hash_l_1 */
#define SEC_ENG_SE_SHA_0_HASH_L_1_OFFSET                        (0x14)
#define SEC_ENG_SE_SHA_0_HASH_L_1                               SEC_ENG_SE_SHA_0_HASH_L_1
#define SEC_ENG_SE_SHA_0_HASH_L_1_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_1_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_1_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_1_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_1_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_1_POS))

/* 0x18 : se_sha_0_hash_l_2 */
#define SEC_ENG_SE_SHA_0_HASH_L_2_OFFSET                        (0x18)
#define SEC_ENG_SE_SHA_0_HASH_L_2                               SEC_ENG_SE_SHA_0_HASH_L_2
#define SEC_ENG_SE_SHA_0_HASH_L_2_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_2_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_2_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_2_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_2_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_2_POS))

/* 0x1C : se_sha_0_hash_l_3 */
#define SEC_ENG_SE_SHA_0_HASH_L_3_OFFSET                        (0x1C)
#define SEC_ENG_SE_SHA_0_HASH_L_3                               SEC_ENG_SE_SHA_0_HASH_L_3
#define SEC_ENG_SE_SHA_0_HASH_L_3_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_3_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_3_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_3_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_3_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_3_POS))

/* 0x20 : se_sha_0_hash_l_4 */
#define SEC_ENG_SE_SHA_0_HASH_L_4_OFFSET                        (0x20)
#define SEC_ENG_SE_SHA_0_HASH_L_4                               SEC_ENG_SE_SHA_0_HASH_L_4
#define SEC_ENG_SE_SHA_0_HASH_L_4_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_4_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_4_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_4_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_4_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_4_POS))

/* 0x24 : se_sha_0_hash_l_5 */
#define SEC_ENG_SE_SHA_0_HASH_L_5_OFFSET                        (0x24)
#define SEC_ENG_SE_SHA_0_HASH_L_5                               SEC_ENG_SE_SHA_0_HASH_L_5
#define SEC_ENG_SE_SHA_0_HASH_L_5_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_5_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_5_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_5_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_5_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_5_POS))

/* 0x28 : se_sha_0_hash_l_6 */
#define SEC_ENG_SE_SHA_0_HASH_L_6_OFFSET                        (0x28)
#define SEC_ENG_SE_SHA_0_HASH_L_6                               SEC_ENG_SE_SHA_0_HASH_L_6
#define SEC_ENG_SE_SHA_0_HASH_L_6_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_6_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_6_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_6_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_6_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_6_POS))

/* 0x2C : se_sha_0_hash_l_7 */
#define SEC_ENG_SE_SHA_0_HASH_L_7_OFFSET                        (0x2C)
#define SEC_ENG_SE_SHA_0_HASH_L_7                               SEC_ENG_SE_SHA_0_HASH_L_7
#define SEC_ENG_SE_SHA_0_HASH_L_7_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_L_7_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_L_7_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_7_POS)
#define SEC_ENG_SE_SHA_0_HASH_L_7_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_L_7_POS))

/* 0x30 : se_sha_0_hash_h_0 */
#define SEC_ENG_SE_SHA_0_HASH_H_0_OFFSET                        (0x30)
#define SEC_ENG_SE_SHA_0_HASH_H_0                               SEC_ENG_SE_SHA_0_HASH_H_0
#define SEC_ENG_SE_SHA_0_HASH_H_0_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_0_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_0_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_0_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_0_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_0_POS))

/* 0x34 : se_sha_0_hash_h_1 */
#define SEC_ENG_SE_SHA_0_HASH_H_1_OFFSET                        (0x34)
#define SEC_ENG_SE_SHA_0_HASH_H_1                               SEC_ENG_SE_SHA_0_HASH_H_1
#define SEC_ENG_SE_SHA_0_HASH_H_1_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_1_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_1_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_1_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_1_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_1_POS))

/* 0x38 : se_sha_0_hash_h_2 */
#define SEC_ENG_SE_SHA_0_HASH_H_2_OFFSET                        (0x38)
#define SEC_ENG_SE_SHA_0_HASH_H_2                               SEC_ENG_SE_SHA_0_HASH_H_2
#define SEC_ENG_SE_SHA_0_HASH_H_2_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_2_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_2_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_2_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_2_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_2_POS))

/* 0x3C : se_sha_0_hash_h_3 */
#define SEC_ENG_SE_SHA_0_HASH_H_3_OFFSET                        (0x3C)
#define SEC_ENG_SE_SHA_0_HASH_H_3                               SEC_ENG_SE_SHA_0_HASH_H_3
#define SEC_ENG_SE_SHA_0_HASH_H_3_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_3_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_3_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_3_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_3_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_3_POS))

/* 0x40 : se_sha_0_hash_h_4 */
#define SEC_ENG_SE_SHA_0_HASH_H_4_OFFSET                        (0x40)
#define SEC_ENG_SE_SHA_0_HASH_H_4                               SEC_ENG_SE_SHA_0_HASH_H_4
#define SEC_ENG_SE_SHA_0_HASH_H_4_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_4_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_4_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_4_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_4_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_4_POS))

/* 0x44 : se_sha_0_hash_h_5 */
#define SEC_ENG_SE_SHA_0_HASH_H_5_OFFSET                        (0x44)
#define SEC_ENG_SE_SHA_0_HASH_H_5                               SEC_ENG_SE_SHA_0_HASH_H_5
#define SEC_ENG_SE_SHA_0_HASH_H_5_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_5_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_5_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_5_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_5_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_5_POS))

/* 0x48 : se_sha_0_hash_h_6 */
#define SEC_ENG_SE_SHA_0_HASH_H_6_OFFSET                        (0x48)
#define SEC_ENG_SE_SHA_0_HASH_H_6                               SEC_ENG_SE_SHA_0_HASH_H_6
#define SEC_ENG_SE_SHA_0_HASH_H_6_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_6_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_6_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_6_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_6_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_6_POS))

/* 0x4C : se_sha_0_hash_h_7 */
#define SEC_ENG_SE_SHA_0_HASH_H_7_OFFSET                        (0x4C)
#define SEC_ENG_SE_SHA_0_HASH_H_7                               SEC_ENG_SE_SHA_0_HASH_H_7
#define SEC_ENG_SE_SHA_0_HASH_H_7_POS                           (0U)
#define SEC_ENG_SE_SHA_0_HASH_H_7_LEN                           (32U)
#define SEC_ENG_SE_SHA_0_HASH_H_7_MSK                           (((1U<<SEC_ENG_SE_SHA_0_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_7_POS)
#define SEC_ENG_SE_SHA_0_HASH_H_7_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_0_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_0_HASH_H_7_POS))

/* 0x50 : se_sha_0_link */
#define SEC_ENG_SE_SHA_0_LINK_OFFSET                            (0x50)
#define SEC_ENG_SE_SHA_0_LCA                                    SEC_ENG_SE_SHA_0_LCA
#define SEC_ENG_SE_SHA_0_LCA_POS                                (0U)
#define SEC_ENG_SE_SHA_0_LCA_LEN                                (32U)
#define SEC_ENG_SE_SHA_0_LCA_MSK                                (((1U<<SEC_ENG_SE_SHA_0_LCA_LEN)-1)<<SEC_ENG_SE_SHA_0_LCA_POS)
#define SEC_ENG_SE_SHA_0_LCA_UMSK                               (~(((1U<<SEC_ENG_SE_SHA_0_LCA_LEN)-1)<<SEC_ENG_SE_SHA_0_LCA_POS))

/* 0xFC : se_sha_0_ctrl_prot */
#define SEC_ENG_SE_SHA_0_CTRL_PROT_OFFSET                       (0xFC)
#define SEC_ENG_SE_SHA_PROT_EN                                  SEC_ENG_SE_SHA_PROT_EN
#define SEC_ENG_SE_SHA_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_SHA_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_SHA_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS)
#define SEC_ENG_SE_SHA_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS))
#define SEC_ENG_SE_SHA_ID0_EN                                   SEC_ENG_SE_SHA_ID0_EN
#define SEC_ENG_SE_SHA_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS)
#define SEC_ENG_SE_SHA_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS))
#define SEC_ENG_SE_SHA_ID1_EN                                   SEC_ENG_SE_SHA_ID1_EN
#define SEC_ENG_SE_SHA_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_SHA_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS)
#define SEC_ENG_SE_SHA_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS))

/* 0x100 : se_aes_0_ctrl */
#define SEC_ENG_SE_AES_0_CTRL_OFFSET                            (0x100)
#define SEC_ENG_SE_AES_0_BUSY                                   SEC_ENG_SE_AES_0_BUSY
#define SEC_ENG_SE_AES_0_BUSY_POS                               (0U)
#define SEC_ENG_SE_AES_0_BUSY_LEN                               (1U)
#define SEC_ENG_SE_AES_0_BUSY_MSK                               (((1U<<SEC_ENG_SE_AES_0_BUSY_LEN)-1)<<SEC_ENG_SE_AES_0_BUSY_POS)
#define SEC_ENG_SE_AES_0_BUSY_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_BUSY_LEN)-1)<<SEC_ENG_SE_AES_0_BUSY_POS))
#define SEC_ENG_SE_AES_0_TRIG_1T                                SEC_ENG_SE_AES_0_TRIG_1T
#define SEC_ENG_SE_AES_0_TRIG_1T_POS                            (1U)
#define SEC_ENG_SE_AES_0_TRIG_1T_LEN                            (1U)
#define SEC_ENG_SE_AES_0_TRIG_1T_MSK                            (((1U<<SEC_ENG_SE_AES_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_0_TRIG_1T_POS)
#define SEC_ENG_SE_AES_0_TRIG_1T_UMSK                           (~(((1U<<SEC_ENG_SE_AES_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_0_TRIG_1T_POS))
#define SEC_ENG_SE_AES_0_EN                                     SEC_ENG_SE_AES_0_EN
#define SEC_ENG_SE_AES_0_EN_POS                                 (2U)
#define SEC_ENG_SE_AES_0_EN_LEN                                 (1U)
#define SEC_ENG_SE_AES_0_EN_MSK                                 (((1U<<SEC_ENG_SE_AES_0_EN_LEN)-1)<<SEC_ENG_SE_AES_0_EN_POS)
#define SEC_ENG_SE_AES_0_EN_UMSK                                (~(((1U<<SEC_ENG_SE_AES_0_EN_LEN)-1)<<SEC_ENG_SE_AES_0_EN_POS))
#define SEC_ENG_SE_AES_0_MODE                                   SEC_ENG_SE_AES_0_MODE
#define SEC_ENG_SE_AES_0_MODE_POS                               (3U)
#define SEC_ENG_SE_AES_0_MODE_LEN                               (2U)
#define SEC_ENG_SE_AES_0_MODE_MSK                               (((1U<<SEC_ENG_SE_AES_0_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_MODE_POS)
#define SEC_ENG_SE_AES_0_MODE_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_MODE_POS))
#define SEC_ENG_SE_AES_0_DEC_EN                                 SEC_ENG_SE_AES_0_DEC_EN
#define SEC_ENG_SE_AES_0_DEC_EN_POS                             (5U)
#define SEC_ENG_SE_AES_0_DEC_EN_LEN                             (1U)
#define SEC_ENG_SE_AES_0_DEC_EN_MSK                             (((1U<<SEC_ENG_SE_AES_0_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_EN_POS)
#define SEC_ENG_SE_AES_0_DEC_EN_UMSK                            (~(((1U<<SEC_ENG_SE_AES_0_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_EN_POS))
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL                            SEC_ENG_SE_AES_0_DEC_KEY_SEL
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_POS                        (6U)
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_LEN                        (1U)
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_MSK                        (((1U<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_POS)
#define SEC_ENG_SE_AES_0_DEC_KEY_SEL_UMSK                       (~(((1U<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_DEC_KEY_SEL_POS))
#define SEC_ENG_SE_AES_0_HW_KEY_EN                              SEC_ENG_SE_AES_0_HW_KEY_EN
#define SEC_ENG_SE_AES_0_HW_KEY_EN_POS                          (7U)
#define SEC_ENG_SE_AES_0_HW_KEY_EN_LEN                          (1U)
#define SEC_ENG_SE_AES_0_HW_KEY_EN_MSK                          (((1U<<SEC_ENG_SE_AES_0_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_0_HW_KEY_EN_POS)
#define SEC_ENG_SE_AES_0_HW_KEY_EN_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_0_HW_KEY_EN_POS))
#define SEC_ENG_SE_AES_0_INT                                    SEC_ENG_SE_AES_0_INT
#define SEC_ENG_SE_AES_0_INT_POS                                (8U)
#define SEC_ENG_SE_AES_0_INT_LEN                                (1U)
#define SEC_ENG_SE_AES_0_INT_MSK                                (((1U<<SEC_ENG_SE_AES_0_INT_LEN)-1)<<SEC_ENG_SE_AES_0_INT_POS)
#define SEC_ENG_SE_AES_0_INT_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_INT_LEN)-1)<<SEC_ENG_SE_AES_0_INT_POS))
#define SEC_ENG_SE_AES_0_INT_CLR_1T                             SEC_ENG_SE_AES_0_INT_CLR_1T
#define SEC_ENG_SE_AES_0_INT_CLR_1T_POS                         (9U)
#define SEC_ENG_SE_AES_0_INT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_AES_0_INT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_AES_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_AES_0_INT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_AES_0_INT_SET_1T                             SEC_ENG_SE_AES_0_INT_SET_1T
#define SEC_ENG_SE_AES_0_INT_SET_1T_POS                         (10U)
#define SEC_ENG_SE_AES_0_INT_SET_1T_LEN                         (1U)
#define SEC_ENG_SE_AES_0_INT_SET_1T_MSK                         (((1U<<SEC_ENG_SE_AES_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_SET_1T_POS)
#define SEC_ENG_SE_AES_0_INT_SET_1T_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_0_INT_SET_1T_POS))
#define SEC_ENG_SE_AES_0_INT_MASK                               SEC_ENG_SE_AES_0_INT_MASK
#define SEC_ENG_SE_AES_0_INT_MASK_POS                           (11U)
#define SEC_ENG_SE_AES_0_INT_MASK_LEN                           (1U)
#define SEC_ENG_SE_AES_0_INT_MASK_MSK                           (((1U<<SEC_ENG_SE_AES_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_0_INT_MASK_POS)
#define SEC_ENG_SE_AES_0_INT_MASK_UMSK                          (~(((1U<<SEC_ENG_SE_AES_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_0_INT_MASK_POS))
#define SEC_ENG_SE_AES_0_BLOCK_MODE                             SEC_ENG_SE_AES_0_BLOCK_MODE
#define SEC_ENG_SE_AES_0_BLOCK_MODE_POS                         (12U)
#define SEC_ENG_SE_AES_0_BLOCK_MODE_LEN                         (2U)
#define SEC_ENG_SE_AES_0_BLOCK_MODE_MSK                         (((1U<<SEC_ENG_SE_AES_0_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_BLOCK_MODE_POS)
#define SEC_ENG_SE_AES_0_BLOCK_MODE_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_BLOCK_MODE_POS))
#define SEC_ENG_SE_AES_0_IV_SEL                                 SEC_ENG_SE_AES_0_IV_SEL
#define SEC_ENG_SE_AES_0_IV_SEL_POS                             (14U)
#define SEC_ENG_SE_AES_0_IV_SEL_LEN                             (1U)
#define SEC_ENG_SE_AES_0_IV_SEL_MSK                             (((1U<<SEC_ENG_SE_AES_0_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_IV_SEL_POS)
#define SEC_ENG_SE_AES_0_IV_SEL_UMSK                            (~(((1U<<SEC_ENG_SE_AES_0_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_IV_SEL_POS))
#define SEC_ENG_SE_AES_0_LINK_MODE                              SEC_ENG_SE_AES_0_LINK_MODE
#define SEC_ENG_SE_AES_0_LINK_MODE_POS                          (15U)
#define SEC_ENG_SE_AES_0_LINK_MODE_LEN                          (1U)
#define SEC_ENG_SE_AES_0_LINK_MODE_MSK                          (((1U<<SEC_ENG_SE_AES_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_LINK_MODE_POS)
#define SEC_ENG_SE_AES_0_LINK_MODE_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_0_LINK_MODE_POS))
#define SEC_ENG_SE_AES_0_MSG_LEN                                SEC_ENG_SE_AES_0_MSG_LEN
#define SEC_ENG_SE_AES_0_MSG_LEN_POS                            (16U)
#define SEC_ENG_SE_AES_0_MSG_LEN_LEN                            (16U)
#define SEC_ENG_SE_AES_0_MSG_LEN_MSK                            (((1U<<SEC_ENG_SE_AES_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_MSG_LEN_POS)
#define SEC_ENG_SE_AES_0_MSG_LEN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_0_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_MSG_LEN_POS))

/* 0x104 : se_aes_0_msa */
#define SEC_ENG_SE_AES_0_MSA_OFFSET                             (0x104)
#define SEC_ENG_SE_AES_0_MSA                                    SEC_ENG_SE_AES_0_MSA
#define SEC_ENG_SE_AES_0_MSA_POS                                (0U)
#define SEC_ENG_SE_AES_0_MSA_LEN                                (32U)
#define SEC_ENG_SE_AES_0_MSA_MSK                                (((1U<<SEC_ENG_SE_AES_0_MSA_LEN)-1)<<SEC_ENG_SE_AES_0_MSA_POS)
#define SEC_ENG_SE_AES_0_MSA_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_MSA_LEN)-1)<<SEC_ENG_SE_AES_0_MSA_POS))

/* 0x108 : se_aes_0_mda */
#define SEC_ENG_SE_AES_0_MDA_OFFSET                             (0x108)
#define SEC_ENG_SE_AES_0_MDA                                    SEC_ENG_SE_AES_0_MDA
#define SEC_ENG_SE_AES_0_MDA_POS                                (0U)
#define SEC_ENG_SE_AES_0_MDA_LEN                                (32U)
#define SEC_ENG_SE_AES_0_MDA_MSK                                (((1U<<SEC_ENG_SE_AES_0_MDA_LEN)-1)<<SEC_ENG_SE_AES_0_MDA_POS)
#define SEC_ENG_SE_AES_0_MDA_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_MDA_LEN)-1)<<SEC_ENG_SE_AES_0_MDA_POS))

/* 0x10C : se_aes_0_status */
#define SEC_ENG_SE_AES_0_STATUS_OFFSET                          (0x10C)
#define SEC_ENG_SE_AES_0_STATUS                                 SEC_ENG_SE_AES_0_STATUS
#define SEC_ENG_SE_AES_0_STATUS_POS                             (0U)
#define SEC_ENG_SE_AES_0_STATUS_LEN                             (32U)
#define SEC_ENG_SE_AES_0_STATUS_MSK                             (((1U<<SEC_ENG_SE_AES_0_STATUS_LEN)-1)<<SEC_ENG_SE_AES_0_STATUS_POS)
#define SEC_ENG_SE_AES_0_STATUS_UMSK                            (~(((1U<<SEC_ENG_SE_AES_0_STATUS_LEN)-1)<<SEC_ENG_SE_AES_0_STATUS_POS))

/* 0x110 : se_aes_0_iv_0 */
#define SEC_ENG_SE_AES_0_IV_0_OFFSET                            (0x110)
#define SEC_ENG_SE_AES_0_IV_0                                   SEC_ENG_SE_AES_0_IV_0
#define SEC_ENG_SE_AES_0_IV_0_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_0_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_0_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_0_LEN)-1)<<SEC_ENG_SE_AES_0_IV_0_POS)
#define SEC_ENG_SE_AES_0_IV_0_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_0_LEN)-1)<<SEC_ENG_SE_AES_0_IV_0_POS))

/* 0x114 : se_aes_0_iv_1 */
#define SEC_ENG_SE_AES_0_IV_1_OFFSET                            (0x114)
#define SEC_ENG_SE_AES_0_IV_1                                   SEC_ENG_SE_AES_0_IV_1
#define SEC_ENG_SE_AES_0_IV_1_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_1_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_1_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_1_LEN)-1)<<SEC_ENG_SE_AES_0_IV_1_POS)
#define SEC_ENG_SE_AES_0_IV_1_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_1_LEN)-1)<<SEC_ENG_SE_AES_0_IV_1_POS))

/* 0x118 : se_aes_0_iv_2 */
#define SEC_ENG_SE_AES_0_IV_2_OFFSET                            (0x118)
#define SEC_ENG_SE_AES_0_IV_2                                   SEC_ENG_SE_AES_0_IV_2
#define SEC_ENG_SE_AES_0_IV_2_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_2_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_2_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_2_LEN)-1)<<SEC_ENG_SE_AES_0_IV_2_POS)
#define SEC_ENG_SE_AES_0_IV_2_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_2_LEN)-1)<<SEC_ENG_SE_AES_0_IV_2_POS))

/* 0x11C : se_aes_0_iv_3 */
#define SEC_ENG_SE_AES_0_IV_3_OFFSET                            (0x11C)
#define SEC_ENG_SE_AES_0_IV_3                                   SEC_ENG_SE_AES_0_IV_3
#define SEC_ENG_SE_AES_0_IV_3_POS                               (0U)
#define SEC_ENG_SE_AES_0_IV_3_LEN                               (32U)
#define SEC_ENG_SE_AES_0_IV_3_MSK                               (((1U<<SEC_ENG_SE_AES_0_IV_3_LEN)-1)<<SEC_ENG_SE_AES_0_IV_3_POS)
#define SEC_ENG_SE_AES_0_IV_3_UMSK                              (~(((1U<<SEC_ENG_SE_AES_0_IV_3_LEN)-1)<<SEC_ENG_SE_AES_0_IV_3_POS))

/* 0x120 : se_aes_0_key_0 */
#define SEC_ENG_SE_AES_0_KEY_0_OFFSET                           (0x120)
#define SEC_ENG_SE_AES_0_KEY_0                                  SEC_ENG_SE_AES_0_KEY_0
#define SEC_ENG_SE_AES_0_KEY_0_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_0_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_0_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_0_POS)
#define SEC_ENG_SE_AES_0_KEY_0_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_0_POS))

/* 0x124 : se_aes_0_key_1 */
#define SEC_ENG_SE_AES_0_KEY_1_OFFSET                           (0x124)
#define SEC_ENG_SE_AES_0_KEY_1                                  SEC_ENG_SE_AES_0_KEY_1
#define SEC_ENG_SE_AES_0_KEY_1_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_1_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_1_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_1_POS)
#define SEC_ENG_SE_AES_0_KEY_1_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_1_POS))

/* 0x128 : se_aes_0_key_2 */
#define SEC_ENG_SE_AES_0_KEY_2_OFFSET                           (0x128)
#define SEC_ENG_SE_AES_0_KEY_2                                  SEC_ENG_SE_AES_0_KEY_2
#define SEC_ENG_SE_AES_0_KEY_2_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_2_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_2_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_2_POS)
#define SEC_ENG_SE_AES_0_KEY_2_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_2_POS))

/* 0x12C : se_aes_0_key_3 */
#define SEC_ENG_SE_AES_0_KEY_3_OFFSET                           (0x12C)
#define SEC_ENG_SE_AES_0_KEY_3                                  SEC_ENG_SE_AES_0_KEY_3
#define SEC_ENG_SE_AES_0_KEY_3_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_3_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_3_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_3_POS)
#define SEC_ENG_SE_AES_0_KEY_3_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_3_POS))

/* 0x130 : se_aes_0_key_4 */
#define SEC_ENG_SE_AES_0_KEY_4_OFFSET                           (0x130)
#define SEC_ENG_SE_AES_0_KEY_4                                  SEC_ENG_SE_AES_0_KEY_4
#define SEC_ENG_SE_AES_0_KEY_4_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_4_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_4_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_4_POS)
#define SEC_ENG_SE_AES_0_KEY_4_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_4_POS))

/* 0x134 : se_aes_0_key_5 */
#define SEC_ENG_SE_AES_0_KEY_5_OFFSET                           (0x134)
#define SEC_ENG_SE_AES_0_KEY_5                                  SEC_ENG_SE_AES_0_KEY_5
#define SEC_ENG_SE_AES_0_KEY_5_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_5_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_5_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_5_POS)
#define SEC_ENG_SE_AES_0_KEY_5_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_5_POS))

/* 0x138 : se_aes_0_key_6 */
#define SEC_ENG_SE_AES_0_KEY_6_OFFSET                           (0x138)
#define SEC_ENG_SE_AES_0_KEY_6                                  SEC_ENG_SE_AES_0_KEY_6
#define SEC_ENG_SE_AES_0_KEY_6_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_6_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_6_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_6_POS)
#define SEC_ENG_SE_AES_0_KEY_6_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_6_POS))

/* 0x13C : se_aes_0_key_7 */
#define SEC_ENG_SE_AES_0_KEY_7_OFFSET                           (0x13C)
#define SEC_ENG_SE_AES_0_KEY_7                                  SEC_ENG_SE_AES_0_KEY_7
#define SEC_ENG_SE_AES_0_KEY_7_POS                              (0U)
#define SEC_ENG_SE_AES_0_KEY_7_LEN                              (32U)
#define SEC_ENG_SE_AES_0_KEY_7_MSK                              (((1U<<SEC_ENG_SE_AES_0_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_7_POS)
#define SEC_ENG_SE_AES_0_KEY_7_UMSK                             (~(((1U<<SEC_ENG_SE_AES_0_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_7_POS))

/* 0x140 : se_aes_0_key_sel_0 */
#define SEC_ENG_SE_AES_0_KEY_SEL_0_OFFSET                       (0x140)
#define SEC_ENG_SE_AES_0_KEY_SEL_0                              SEC_ENG_SE_AES_0_KEY_SEL_0
#define SEC_ENG_SE_AES_0_KEY_SEL_0_POS                          (0U)
#define SEC_ENG_SE_AES_0_KEY_SEL_0_LEN                          (2U)
#define SEC_ENG_SE_AES_0_KEY_SEL_0_MSK                          (((1U<<SEC_ENG_SE_AES_0_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_0_POS)
#define SEC_ENG_SE_AES_0_KEY_SEL_0_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_0_POS))

/* 0x144 : se_aes_0_key_sel_1 */
#define SEC_ENG_SE_AES_0_KEY_SEL_1_OFFSET                       (0x144)
#define SEC_ENG_SE_AES_0_KEY_SEL_1                              SEC_ENG_SE_AES_0_KEY_SEL_1
#define SEC_ENG_SE_AES_0_KEY_SEL_1_POS                          (0U)
#define SEC_ENG_SE_AES_0_KEY_SEL_1_LEN                          (2U)
#define SEC_ENG_SE_AES_0_KEY_SEL_1_MSK                          (((1U<<SEC_ENG_SE_AES_0_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_1_POS)
#define SEC_ENG_SE_AES_0_KEY_SEL_1_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_SEL_1_POS))

/* 0x148 : se_aes_0_endian */
#define SEC_ENG_SE_AES_0_ENDIAN_OFFSET                          (0x148)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN                            SEC_ENG_SE_AES_0_DOUT_ENDIAN
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_POS                        (0U)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_LEN                        (1U)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_MSK                        (((1U<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_DOUT_ENDIAN_UMSK                       (~(((1U<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DOUT_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_DIN_ENDIAN                             SEC_ENG_SE_AES_0_DIN_ENDIAN
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_POS                         (1U)
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_LEN                         (1U)
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_MSK                         (((1U<<SEC_ENG_SE_AES_0_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DIN_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_DIN_ENDIAN_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_DIN_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_KEY_ENDIAN                             SEC_ENG_SE_AES_0_KEY_ENDIAN
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_POS                         (2U)
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_LEN                         (1U)
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_MSK                         (((1U<<SEC_ENG_SE_AES_0_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_KEY_ENDIAN_UMSK                        (~(((1U<<SEC_ENG_SE_AES_0_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_KEY_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_IV_ENDIAN                              SEC_ENG_SE_AES_0_IV_ENDIAN
#define SEC_ENG_SE_AES_0_IV_ENDIAN_POS                          (3U)
#define SEC_ENG_SE_AES_0_IV_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_AES_0_IV_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_AES_0_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_IV_ENDIAN_POS)
#define SEC_ENG_SE_AES_0_IV_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_AES_0_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_0_IV_ENDIAN_POS))
#define SEC_ENG_SE_AES_0_CTR_LEN                                SEC_ENG_SE_AES_0_CTR_LEN
#define SEC_ENG_SE_AES_0_CTR_LEN_POS                            (30U)
#define SEC_ENG_SE_AES_0_CTR_LEN_LEN                            (2U)
#define SEC_ENG_SE_AES_0_CTR_LEN_MSK                            (((1U<<SEC_ENG_SE_AES_0_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_CTR_LEN_POS)
#define SEC_ENG_SE_AES_0_CTR_LEN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_0_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_0_CTR_LEN_POS))

/* 0x14C : se_aes_0_sboot */
#define SEC_ENG_SE_AES_0_SBOOT_OFFSET                           (0x14C)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL                          SEC_ENG_SE_AES_0_SBOOT_KEY_SEL
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_POS                      (0U)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_LEN                      (1U)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_MSK                      (((1U<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_POS)
#define SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_UMSK                     (~(((1U<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_0_SBOOT_KEY_SEL_POS))

/* 0x150 : se_aes_0_link */
#define SEC_ENG_SE_AES_0_LINK_OFFSET                            (0x150)
#define SEC_ENG_SE_AES_0_LCA                                    SEC_ENG_SE_AES_0_LCA
#define SEC_ENG_SE_AES_0_LCA_POS                                (0U)
#define SEC_ENG_SE_AES_0_LCA_LEN                                (32U)
#define SEC_ENG_SE_AES_0_LCA_MSK                                (((1U<<SEC_ENG_SE_AES_0_LCA_LEN)-1)<<SEC_ENG_SE_AES_0_LCA_POS)
#define SEC_ENG_SE_AES_0_LCA_UMSK                               (~(((1U<<SEC_ENG_SE_AES_0_LCA_LEN)-1)<<SEC_ENG_SE_AES_0_LCA_POS))

/* 0x1FC : se_aes_0_ctrl_prot */
#define SEC_ENG_SE_AES_0_CTRL_PROT_OFFSET                       (0x1FC)
#define SEC_ENG_SE_AES_PROT_EN                                  SEC_ENG_SE_AES_PROT_EN
#define SEC_ENG_SE_AES_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_AES_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_AES_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS)
#define SEC_ENG_SE_AES_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS))
#define SEC_ENG_SE_AES_ID0_EN                                   SEC_ENG_SE_AES_ID0_EN
#define SEC_ENG_SE_AES_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS)
#define SEC_ENG_SE_AES_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS))
#define SEC_ENG_SE_AES_ID1_EN                                   SEC_ENG_SE_AES_ID1_EN
#define SEC_ENG_SE_AES_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_AES_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS)
#define SEC_ENG_SE_AES_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS))

/* 0x200 : se_trng_0_ctrl_0 */
#define SEC_ENG_SE_TRNG_0_CTRL_0_OFFSET                         (0x200)
#define SEC_ENG_SE_TRNG_0_BUSY                                  SEC_ENG_SE_TRNG_0_BUSY
#define SEC_ENG_SE_TRNG_0_BUSY_POS                              (0U)
#define SEC_ENG_SE_TRNG_0_BUSY_LEN                              (1U)
#define SEC_ENG_SE_TRNG_0_BUSY_MSK                              (((1U<<SEC_ENG_SE_TRNG_0_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_0_BUSY_POS)
#define SEC_ENG_SE_TRNG_0_BUSY_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_0_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_0_BUSY_POS))
#define SEC_ENG_SE_TRNG_0_TRIG_1T                               SEC_ENG_SE_TRNG_0_TRIG_1T
#define SEC_ENG_SE_TRNG_0_TRIG_1T_POS                           (1U)
#define SEC_ENG_SE_TRNG_0_TRIG_1T_LEN                           (1U)
#define SEC_ENG_SE_TRNG_0_TRIG_1T_MSK                           (((1U<<SEC_ENG_SE_TRNG_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_TRIG_1T_POS)
#define SEC_ENG_SE_TRNG_0_TRIG_1T_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_TRIG_1T_POS))
#define SEC_ENG_SE_TRNG_0_EN                                    SEC_ENG_SE_TRNG_0_EN
#define SEC_ENG_SE_TRNG_0_EN_POS                                (2U)
#define SEC_ENG_SE_TRNG_0_EN_LEN                                (1U)
#define SEC_ENG_SE_TRNG_0_EN_MSK                                (((1U<<SEC_ENG_SE_TRNG_0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_EN_POS)
#define SEC_ENG_SE_TRNG_0_EN_UMSK                               (~(((1U<<SEC_ENG_SE_TRNG_0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_EN_POS))
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T                           SEC_ENG_SE_TRNG_0_DOUT_CLR_1T
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_POS                       (3U)
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_LEN                       (1U)
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_MSK                       (((1U<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_UMSK                      (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_0_HT_ERROR                              SEC_ENG_SE_TRNG_0_HT_ERROR
#define SEC_ENG_SE_TRNG_0_HT_ERROR_POS                          (4U)
#define SEC_ENG_SE_TRNG_0_HT_ERROR_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_HT_ERROR_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ERROR_POS)
#define SEC_ENG_SE_TRNG_0_HT_ERROR_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ERROR_POS))
#define SEC_ENG_SE_TRNG_0_INT                                   SEC_ENG_SE_TRNG_0_INT
#define SEC_ENG_SE_TRNG_0_INT_POS                               (8U)
#define SEC_ENG_SE_TRNG_0_INT_LEN                               (1U)
#define SEC_ENG_SE_TRNG_0_INT_MSK                               (((1U<<SEC_ENG_SE_TRNG_0_INT_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_POS)
#define SEC_ENG_SE_TRNG_0_INT_UMSK                              (~(((1U<<SEC_ENG_SE_TRNG_0_INT_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_POS))
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T                            SEC_ENG_SE_TRNG_0_INT_CLR_1T
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_POS                        (9U)
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_LEN                        (1U)
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_0_INT_CLR_1T_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_0_INT_SET_1T                            SEC_ENG_SE_TRNG_0_INT_SET_1T
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_POS                        (10U)
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_LEN                        (1U)
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_SET_1T_POS)
#define SEC_ENG_SE_TRNG_0_INT_SET_1T_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_SET_1T_POS))
#define SEC_ENG_SE_TRNG_0_INT_MASK                              SEC_ENG_SE_TRNG_0_INT_MASK
#define SEC_ENG_SE_TRNG_0_INT_MASK_POS                          (11U)
#define SEC_ENG_SE_TRNG_0_INT_MASK_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_INT_MASK_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_MASK_POS)
#define SEC_ENG_SE_TRNG_0_INT_MASK_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_0_INT_MASK_POS))
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL                        SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_POS                    (13U)
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_LEN                    (1U)
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_MSK                    (((1U<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_POS)
#define SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_UMSK                   (~(((1U<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_FUN_SEL_POS))
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED                         SEC_ENG_SE_TRNG_0_MANUAL_RESEED
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_POS                     (14U)
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_LEN                     (1U)
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_MSK                     (((1U<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_POS)
#define SEC_ENG_SE_TRNG_0_MANUAL_RESEED_UMSK                    (~(((1U<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_RESEED_POS))
#define SEC_ENG_SE_TRNG_0_MANUAL_EN                             SEC_ENG_SE_TRNG_0_MANUAL_EN
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_POS                         (15U)
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_LEN                         (1U)
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_MSK                         (((1U<<SEC_ENG_SE_TRNG_0_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_EN_POS)
#define SEC_ENG_SE_TRNG_0_MANUAL_EN_UMSK                        (~(((1U<<SEC_ENG_SE_TRNG_0_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_MANUAL_EN_POS))

/* 0x204 : se_trng_0_status */
#define SEC_ENG_SE_TRNG_0_STATUS_OFFSET                         (0x204)
#define SEC_ENG_SE_TRNG_0_STATUS                                SEC_ENG_SE_TRNG_0_STATUS
#define SEC_ENG_SE_TRNG_0_STATUS_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_STATUS_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_STATUS_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_0_STATUS_POS)
#define SEC_ENG_SE_TRNG_0_STATUS_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_0_STATUS_POS))

/* 0x208 : se_trng_0_dout_0 */
#define SEC_ENG_SE_TRNG_0_DOUT_0_OFFSET                         (0x208)
#define SEC_ENG_SE_TRNG_0_DOUT_0                                SEC_ENG_SE_TRNG_0_DOUT_0
#define SEC_ENG_SE_TRNG_0_DOUT_0_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_0_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_0_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_0_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_0_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_0_POS))

/* 0x20C : se_trng_0_dout_1 */
#define SEC_ENG_SE_TRNG_0_DOUT_1_OFFSET                         (0x20C)
#define SEC_ENG_SE_TRNG_0_DOUT_1                                SEC_ENG_SE_TRNG_0_DOUT_1
#define SEC_ENG_SE_TRNG_0_DOUT_1_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_1_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_1_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_1_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_1_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_1_POS))

/* 0x210 : se_trng_0_dout_2 */
#define SEC_ENG_SE_TRNG_0_DOUT_2_OFFSET                         (0x210)
#define SEC_ENG_SE_TRNG_0_DOUT_2                                SEC_ENG_SE_TRNG_0_DOUT_2
#define SEC_ENG_SE_TRNG_0_DOUT_2_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_2_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_2_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_2_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_2_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_2_POS))

/* 0x214 : se_trng_0_dout_3 */
#define SEC_ENG_SE_TRNG_0_DOUT_3_OFFSET                         (0x214)
#define SEC_ENG_SE_TRNG_0_DOUT_3                                SEC_ENG_SE_TRNG_0_DOUT_3
#define SEC_ENG_SE_TRNG_0_DOUT_3_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_3_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_3_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_3_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_3_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_3_POS))

/* 0x218 : se_trng_0_dout_4 */
#define SEC_ENG_SE_TRNG_0_DOUT_4_OFFSET                         (0x218)
#define SEC_ENG_SE_TRNG_0_DOUT_4                                SEC_ENG_SE_TRNG_0_DOUT_4
#define SEC_ENG_SE_TRNG_0_DOUT_4_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_4_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_4_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_4_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_4_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_4_POS))

/* 0x21C : se_trng_0_dout_5 */
#define SEC_ENG_SE_TRNG_0_DOUT_5_OFFSET                         (0x21C)
#define SEC_ENG_SE_TRNG_0_DOUT_5                                SEC_ENG_SE_TRNG_0_DOUT_5
#define SEC_ENG_SE_TRNG_0_DOUT_5_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_5_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_5_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_5_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_5_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_5_POS))

/* 0x220 : se_trng_0_dout_6 */
#define SEC_ENG_SE_TRNG_0_DOUT_6_OFFSET                         (0x220)
#define SEC_ENG_SE_TRNG_0_DOUT_6                                SEC_ENG_SE_TRNG_0_DOUT_6
#define SEC_ENG_SE_TRNG_0_DOUT_6_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_6_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_6_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_6_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_6_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_6_POS))

/* 0x224 : se_trng_0_dout_7 */
#define SEC_ENG_SE_TRNG_0_DOUT_7_OFFSET                         (0x224)
#define SEC_ENG_SE_TRNG_0_DOUT_7                                SEC_ENG_SE_TRNG_0_DOUT_7
#define SEC_ENG_SE_TRNG_0_DOUT_7_POS                            (0U)
#define SEC_ENG_SE_TRNG_0_DOUT_7_LEN                            (32U)
#define SEC_ENG_SE_TRNG_0_DOUT_7_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_7_POS)
#define SEC_ENG_SE_TRNG_0_DOUT_7_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_0_DOUT_7_POS))

/* 0x228 : se_trng_0_test */
#define SEC_ENG_SE_TRNG_0_TEST_OFFSET                           (0x228)
#define SEC_ENG_SE_TRNG_0_TEST_EN                               SEC_ENG_SE_TRNG_0_TEST_EN
#define SEC_ENG_SE_TRNG_0_TEST_EN_POS                           (0U)
#define SEC_ENG_SE_TRNG_0_TEST_EN_LEN                           (1U)
#define SEC_ENG_SE_TRNG_0_TEST_EN_MSK                           (((1U<<SEC_ENG_SE_TRNG_0_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_0_TEST_EN_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN                            SEC_ENG_SE_TRNG_0_CP_TEST_EN
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_POS                        (1U)
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_LEN                        (1U)
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_0_CP_TEST_EN_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_0_CP_BYPASS                             SEC_ENG_SE_TRNG_0_CP_BYPASS
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_POS                         (2U)
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_LEN                         (1U)
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_MSK                         (((1U<<SEC_ENG_SE_TRNG_0_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_BYPASS_POS)
#define SEC_ENG_SE_TRNG_0_CP_BYPASS_UMSK                        (~(((1U<<SEC_ENG_SE_TRNG_0_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_BYPASS_POS))
#define SEC_ENG_SE_TRNG_0_HT_DIS                                SEC_ENG_SE_TRNG_0_HT_DIS
#define SEC_ENG_SE_TRNG_0_HT_DIS_POS                            (3U)
#define SEC_ENG_SE_TRNG_0_HT_DIS_LEN                            (1U)
#define SEC_ENG_SE_TRNG_0_HT_DIS_MSK                            (((1U<<SEC_ENG_SE_TRNG_0_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_DIS_POS)
#define SEC_ENG_SE_TRNG_0_HT_DIS_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_0_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_DIS_POS))
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N                            SEC_ENG_SE_TRNG_0_HT_ALARM_N
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_POS                        (4U)
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_LEN                        (8U)
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_POS)
#define SEC_ENG_SE_TRNG_0_HT_ALARM_N_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_ALARM_N_POS))

/* 0x22C : se_trng_0_ctrl_1 */
#define SEC_ENG_SE_TRNG_0_CTRL_1_OFFSET                         (0x22C)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB                          SEC_ENG_SE_TRNG_0_RESEED_N_LSB
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_POS                      (0U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_LEN                      (32U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_MSK                      (((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_POS)
#define SEC_ENG_SE_TRNG_0_RESEED_N_LSB_UMSK                     (~(((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_LSB_POS))

/* 0x230 : se_trng_0_ctrl_2 */
#define SEC_ENG_SE_TRNG_0_CTRL_2_OFFSET                         (0x230)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB                          SEC_ENG_SE_TRNG_0_RESEED_N_MSB
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_POS                      (0U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_LEN                      (16U)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_MSK                      (((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_POS)
#define SEC_ENG_SE_TRNG_0_RESEED_N_MSB_UMSK                     (~(((1U<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_0_RESEED_N_MSB_POS))

/* 0x234 : se_trng_0_ctrl_3 */
#define SEC_ENG_SE_TRNG_0_CTRL_3_OFFSET                         (0x234)
#define SEC_ENG_SE_TRNG_0_CP_RATIO                              SEC_ENG_SE_TRNG_0_CP_RATIO
#define SEC_ENG_SE_TRNG_0_CP_RATIO_POS                          (0U)
#define SEC_ENG_SE_TRNG_0_CP_RATIO_LEN                          (8U)
#define SEC_ENG_SE_TRNG_0_CP_RATIO_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_RATIO_POS)
#define SEC_ENG_SE_TRNG_0_CP_RATIO_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_0_CP_RATIO_POS))
#define SEC_ENG_SE_TRNG_0_HT_RCT_C                              SEC_ENG_SE_TRNG_0_HT_RCT_C
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_POS                          (8U)
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_LEN                          (8U)
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_RCT_C_POS)
#define SEC_ENG_SE_TRNG_0_HT_RCT_C_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_RCT_C_POS))
#define SEC_ENG_SE_TRNG_0_HT_APT_C                              SEC_ENG_SE_TRNG_0_HT_APT_C
#define SEC_ENG_SE_TRNG_0_HT_APT_C_POS                          (16U)
#define SEC_ENG_SE_TRNG_0_HT_APT_C_LEN                          (10U)
#define SEC_ENG_SE_TRNG_0_HT_APT_C_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_APT_C_POS)
#define SEC_ENG_SE_TRNG_0_HT_APT_C_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_APT_C_POS))
#define SEC_ENG_SE_TRNG_0_HT_OD_EN                              SEC_ENG_SE_TRNG_0_HT_OD_EN
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_POS                          (26U)
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_OD_EN_POS)
#define SEC_ENG_SE_TRNG_0_HT_OD_EN_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_0_HT_OD_EN_POS))
#define SEC_ENG_SE_TRNG_0_ROSC_DIS                              SEC_ENG_SE_TRNG_0_ROSC_DIS
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_POS                          (31U)
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_LEN                          (1U)
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_MSK                          (((1U<<SEC_ENG_SE_TRNG_0_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_ROSC_DIS_POS)
#define SEC_ENG_SE_TRNG_0_ROSC_DIS_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_0_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_0_ROSC_DIS_POS))

/* 0x240 : se_trng_0_test_out_0 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_OFFSET                     (0x240)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0                            SEC_ENG_SE_TRNG_0_TEST_OUT_0
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_0_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_0_POS))

/* 0x244 : se_trng_0_test_out_1 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_OFFSET                     (0x244)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1                            SEC_ENG_SE_TRNG_0_TEST_OUT_1
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_1_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_1_POS))

/* 0x248 : se_trng_0_test_out_2 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_OFFSET                     (0x248)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2                            SEC_ENG_SE_TRNG_0_TEST_OUT_2
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_2_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_2_POS))

/* 0x24C : se_trng_0_test_out_3 */
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_OFFSET                     (0x24C)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3                            SEC_ENG_SE_TRNG_0_TEST_OUT_3
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_POS                        (0U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_LEN                        (32U)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_MSK                        (((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_POS)
#define SEC_ENG_SE_TRNG_0_TEST_OUT_3_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_0_TEST_OUT_3_POS))

/* 0x2FC : se_trng_0_ctrl_prot */
#define SEC_ENG_SE_TRNG_0_CTRL_PROT_OFFSET                      (0x2FC)
#define SEC_ENG_SE_TRNG_PROT_EN                                 SEC_ENG_SE_TRNG_PROT_EN
#define SEC_ENG_SE_TRNG_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_TRNG_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_TRNG_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS)
#define SEC_ENG_SE_TRNG_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS))
#define SEC_ENG_SE_TRNG_ID0_EN                                  SEC_ENG_SE_TRNG_ID0_EN
#define SEC_ENG_SE_TRNG_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS)
#define SEC_ENG_SE_TRNG_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS))
#define SEC_ENG_SE_TRNG_ID1_EN                                  SEC_ENG_SE_TRNG_ID1_EN
#define SEC_ENG_SE_TRNG_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_TRNG_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS)
#define SEC_ENG_SE_TRNG_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS))

/* 0x300 : se_pka_0_ctrl_0 */
#define SEC_ENG_SE_PKA_0_CTRL_0_OFFSET                          (0x300)
#define SEC_ENG_SE_PKA_0_DONE                                   SEC_ENG_SE_PKA_0_DONE
#define SEC_ENG_SE_PKA_0_DONE_POS                               (0U)
#define SEC_ENG_SE_PKA_0_DONE_LEN                               (1U)
#define SEC_ENG_SE_PKA_0_DONE_MSK                               (((1U<<SEC_ENG_SE_PKA_0_DONE_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_POS)
#define SEC_ENG_SE_PKA_0_DONE_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_0_DONE_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_POS))
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T                            SEC_ENG_SE_PKA_0_DONE_CLR_1T
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_POS                        (1U)
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_LEN                        (1U)
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_MSK                        (((1U<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_POS)
#define SEC_ENG_SE_PKA_0_DONE_CLR_1T_UMSK                       (~(((1U<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_DONE_CLR_1T_POS))
#define SEC_ENG_SE_PKA_0_BUSY                                   SEC_ENG_SE_PKA_0_BUSY
#define SEC_ENG_SE_PKA_0_BUSY_POS                               (2U)
#define SEC_ENG_SE_PKA_0_BUSY_LEN                               (1U)
#define SEC_ENG_SE_PKA_0_BUSY_MSK                               (((1U<<SEC_ENG_SE_PKA_0_BUSY_LEN)-1)<<SEC_ENG_SE_PKA_0_BUSY_POS)
#define SEC_ENG_SE_PKA_0_BUSY_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_0_BUSY_LEN)-1)<<SEC_ENG_SE_PKA_0_BUSY_POS))
#define SEC_ENG_SE_PKA_0_EN                                     SEC_ENG_SE_PKA_0_EN
#define SEC_ENG_SE_PKA_0_EN_POS                                 (3U)
#define SEC_ENG_SE_PKA_0_EN_LEN                                 (1U)
#define SEC_ENG_SE_PKA_0_EN_MSK                                 (((1U<<SEC_ENG_SE_PKA_0_EN_LEN)-1)<<SEC_ENG_SE_PKA_0_EN_POS)
#define SEC_ENG_SE_PKA_0_EN_UMSK                                (~(((1U<<SEC_ENG_SE_PKA_0_EN_LEN)-1)<<SEC_ENG_SE_PKA_0_EN_POS))
#define SEC_ENG_SE_PKA_0_PROT_MD                                SEC_ENG_SE_PKA_0_PROT_MD
#define SEC_ENG_SE_PKA_0_PROT_MD_POS                            (4U)
#define SEC_ENG_SE_PKA_0_PROT_MD_LEN                            (4U)
#define SEC_ENG_SE_PKA_0_PROT_MD_MSK                            (((1U<<SEC_ENG_SE_PKA_0_PROT_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_PROT_MD_POS)
#define SEC_ENG_SE_PKA_0_PROT_MD_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_0_PROT_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_PROT_MD_POS))
#define SEC_ENG_SE_PKA_0_INT                                    SEC_ENG_SE_PKA_0_INT
#define SEC_ENG_SE_PKA_0_INT_POS                                (8U)
#define SEC_ENG_SE_PKA_0_INT_LEN                                (1U)
#define SEC_ENG_SE_PKA_0_INT_MSK                                (((1U<<SEC_ENG_SE_PKA_0_INT_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_POS)
#define SEC_ENG_SE_PKA_0_INT_UMSK                               (~(((1U<<SEC_ENG_SE_PKA_0_INT_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_POS))
#define SEC_ENG_SE_PKA_0_INT_CLR_1T                             SEC_ENG_SE_PKA_0_INT_CLR_1T
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_POS                         (9U)
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_PKA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_PKA_0_INT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_PKA_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_PKA_0_INT_SET                                SEC_ENG_SE_PKA_0_INT_SET
#define SEC_ENG_SE_PKA_0_INT_SET_POS                            (10U)
#define SEC_ENG_SE_PKA_0_INT_SET_LEN                            (1U)
#define SEC_ENG_SE_PKA_0_INT_SET_MSK                            (((1U<<SEC_ENG_SE_PKA_0_INT_SET_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_SET_POS)
#define SEC_ENG_SE_PKA_0_INT_SET_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_0_INT_SET_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_SET_POS))
#define SEC_ENG_SE_PKA_0_INT_MASK                               SEC_ENG_SE_PKA_0_INT_MASK
#define SEC_ENG_SE_PKA_0_INT_MASK_POS                           (11U)
#define SEC_ENG_SE_PKA_0_INT_MASK_LEN                           (1U)
#define SEC_ENG_SE_PKA_0_INT_MASK_MSK                           (((1U<<SEC_ENG_SE_PKA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_MASK_POS)
#define SEC_ENG_SE_PKA_0_INT_MASK_UMSK                          (~(((1U<<SEC_ENG_SE_PKA_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_PKA_0_INT_MASK_POS))
#define SEC_ENG_SE_PKA_0_ENDIAN                                 SEC_ENG_SE_PKA_0_ENDIAN
#define SEC_ENG_SE_PKA_0_ENDIAN_POS                             (12U)
#define SEC_ENG_SE_PKA_0_ENDIAN_LEN                             (1U)
#define SEC_ENG_SE_PKA_0_ENDIAN_MSK                             (((1U<<SEC_ENG_SE_PKA_0_ENDIAN_LEN)-1)<<SEC_ENG_SE_PKA_0_ENDIAN_POS)
#define SEC_ENG_SE_PKA_0_ENDIAN_UMSK                            (~(((1U<<SEC_ENG_SE_PKA_0_ENDIAN_LEN)-1)<<SEC_ENG_SE_PKA_0_ENDIAN_POS))
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD                             SEC_ENG_SE_PKA_0_RAM_CLR_MD
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_POS                         (13U)
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_LEN                         (1U)
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_MSK                         (((1U<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_POS)
#define SEC_ENG_SE_PKA_0_RAM_CLR_MD_UMSK                        (~(((1U<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_LEN)-1)<<SEC_ENG_SE_PKA_0_RAM_CLR_MD_POS))
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T                          SEC_ENG_SE_PKA_0_STATUS_CLR_1T
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_POS                      (16U)
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_LEN                      (1U)
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_MSK                      (((1U<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_POS)
#define SEC_ENG_SE_PKA_0_STATUS_CLR_1T_UMSK                     (~(((1U<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_CLR_1T_POS))
#define SEC_ENG_SE_PKA_0_STATUS                                 SEC_ENG_SE_PKA_0_STATUS
#define SEC_ENG_SE_PKA_0_STATUS_POS                             (17U)
#define SEC_ENG_SE_PKA_0_STATUS_LEN                             (15U)
#define SEC_ENG_SE_PKA_0_STATUS_MSK                             (((1U<<SEC_ENG_SE_PKA_0_STATUS_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_POS)
#define SEC_ENG_SE_PKA_0_STATUS_UMSK                            (~(((1U<<SEC_ENG_SE_PKA_0_STATUS_LEN)-1)<<SEC_ENG_SE_PKA_0_STATUS_POS))

/* 0x30C : se_pka_0_seed */
#define SEC_ENG_SE_PKA_0_SEED_OFFSET                            (0x30C)
#define SEC_ENG_SE_PKA_0_SEED                                   SEC_ENG_SE_PKA_0_SEED
#define SEC_ENG_SE_PKA_0_SEED_POS                               (0U)
#define SEC_ENG_SE_PKA_0_SEED_LEN                               (32U)
#define SEC_ENG_SE_PKA_0_SEED_MSK                               (((1U<<SEC_ENG_SE_PKA_0_SEED_LEN)-1)<<SEC_ENG_SE_PKA_0_SEED_POS)
#define SEC_ENG_SE_PKA_0_SEED_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_0_SEED_LEN)-1)<<SEC_ENG_SE_PKA_0_SEED_POS))

/* 0x310 : se_pka_0_ctrl_1 */
#define SEC_ENG_SE_PKA_0_CTRL_1_OFFSET                          (0x310)
#define SEC_ENG_SE_PKA_0_HBURST                                 SEC_ENG_SE_PKA_0_HBURST
#define SEC_ENG_SE_PKA_0_HBURST_POS                             (0U)
#define SEC_ENG_SE_PKA_0_HBURST_LEN                             (3U)
#define SEC_ENG_SE_PKA_0_HBURST_MSK                             (((1U<<SEC_ENG_SE_PKA_0_HBURST_LEN)-1)<<SEC_ENG_SE_PKA_0_HBURST_POS)
#define SEC_ENG_SE_PKA_0_HBURST_UMSK                            (~(((1U<<SEC_ENG_SE_PKA_0_HBURST_LEN)-1)<<SEC_ENG_SE_PKA_0_HBURST_POS))
#define SEC_ENG_SE_PKA_0_HBYPASS                                SEC_ENG_SE_PKA_0_HBYPASS
#define SEC_ENG_SE_PKA_0_HBYPASS_POS                            (3U)
#define SEC_ENG_SE_PKA_0_HBYPASS_LEN                            (1U)
#define SEC_ENG_SE_PKA_0_HBYPASS_MSK                            (((1U<<SEC_ENG_SE_PKA_0_HBYPASS_LEN)-1)<<SEC_ENG_SE_PKA_0_HBYPASS_POS)
#define SEC_ENG_SE_PKA_0_HBYPASS_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_0_HBYPASS_LEN)-1)<<SEC_ENG_SE_PKA_0_HBYPASS_POS))

/* 0x340 : se_pka_0_rw */
#define SEC_ENG_SE_PKA_0_RW_OFFSET                              (0x340)

/* 0x360 : se_pka_0_rw_burst */
#define SEC_ENG_SE_PKA_0_RW_BURST_OFFSET                        (0x360)

/* 0x3FC : se_pka_0_ctrl_prot */
#define SEC_ENG_SE_PKA_0_CTRL_PROT_OFFSET                       (0x3FC)
#define SEC_ENG_SE_PKA_PROT_EN                                  SEC_ENG_SE_PKA_PROT_EN
#define SEC_ENG_SE_PKA_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_PKA_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_PKA_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_PKA_PROT_EN_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_POS)
#define SEC_ENG_SE_PKA_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_PKA_PROT_EN_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_POS))
#define SEC_ENG_SE_PKA_ID0_EN                                   SEC_ENG_SE_PKA_ID0_EN
#define SEC_ENG_SE_PKA_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_PKA_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_PKA_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_PKA_ID0_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_POS)
#define SEC_ENG_SE_PKA_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_ID0_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_POS))
#define SEC_ENG_SE_PKA_ID1_EN                                   SEC_ENG_SE_PKA_ID1_EN
#define SEC_ENG_SE_PKA_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_PKA_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_PKA_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_PKA_ID1_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_POS)
#define SEC_ENG_SE_PKA_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_PKA_ID1_EN_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_POS))

/* 0x400 : se_cdet_0_ctrl_0 */
#define SEC_ENG_SE_CDET_0_CTRL_0_OFFSET                         (0x400)
#define SEC_ENG_SE_CDET_0_EN                                    SEC_ENG_SE_CDET_0_EN
#define SEC_ENG_SE_CDET_0_EN_POS                                (0U)
#define SEC_ENG_SE_CDET_0_EN_LEN                                (1U)
#define SEC_ENG_SE_CDET_0_EN_MSK                                (((1U<<SEC_ENG_SE_CDET_0_EN_LEN)-1)<<SEC_ENG_SE_CDET_0_EN_POS)
#define SEC_ENG_SE_CDET_0_EN_UMSK                               (~(((1U<<SEC_ENG_SE_CDET_0_EN_LEN)-1)<<SEC_ENG_SE_CDET_0_EN_POS))
#define SEC_ENG_SE_CDET_0_ERROR                                 SEC_ENG_SE_CDET_0_ERROR
#define SEC_ENG_SE_CDET_0_ERROR_POS                             (1U)
#define SEC_ENG_SE_CDET_0_ERROR_LEN                             (1U)
#define SEC_ENG_SE_CDET_0_ERROR_MSK                             (((1U<<SEC_ENG_SE_CDET_0_ERROR_LEN)-1)<<SEC_ENG_SE_CDET_0_ERROR_POS)
#define SEC_ENG_SE_CDET_0_ERROR_UMSK                            (~(((1U<<SEC_ENG_SE_CDET_0_ERROR_LEN)-1)<<SEC_ENG_SE_CDET_0_ERROR_POS))
#define SEC_ENG_SE_CDET_0_STATUS                                SEC_ENG_SE_CDET_0_STATUS
#define SEC_ENG_SE_CDET_0_STATUS_POS                            (2U)
#define SEC_ENG_SE_CDET_0_STATUS_LEN                            (14U)
#define SEC_ENG_SE_CDET_0_STATUS_MSK                            (((1U<<SEC_ENG_SE_CDET_0_STATUS_LEN)-1)<<SEC_ENG_SE_CDET_0_STATUS_POS)
#define SEC_ENG_SE_CDET_0_STATUS_UMSK                           (~(((1U<<SEC_ENG_SE_CDET_0_STATUS_LEN)-1)<<SEC_ENG_SE_CDET_0_STATUS_POS))
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX                            SEC_ENG_SE_CDET_0_G_LOOP_MAX
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_POS                        (16U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_LEN                        (8U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_MSK                        (((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_POS)
#define SEC_ENG_SE_CDET_0_G_LOOP_MAX_UMSK                       (~(((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MAX_POS))
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN                            SEC_ENG_SE_CDET_0_G_LOOP_MIN
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_POS                        (24U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_LEN                        (8U)
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_MSK                        (((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_POS)
#define SEC_ENG_SE_CDET_0_G_LOOP_MIN_UMSK                       (~(((1U<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_LEN)-1)<<SEC_ENG_SE_CDET_0_G_LOOP_MIN_POS))

/* 0x404 : se_cdet_0_ctrl_1 */
#define SEC_ENG_SE_CDET_0_CTRL_1_OFFSET                         (0x404)
#define SEC_ENG_SE_CDET_0_T_LOOP_N                              SEC_ENG_SE_CDET_0_T_LOOP_N
#define SEC_ENG_SE_CDET_0_T_LOOP_N_POS                          (0U)
#define SEC_ENG_SE_CDET_0_T_LOOP_N_LEN                          (8U)
#define SEC_ENG_SE_CDET_0_T_LOOP_N_MSK                          (((1U<<SEC_ENG_SE_CDET_0_T_LOOP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_LOOP_N_POS)
#define SEC_ENG_SE_CDET_0_T_LOOP_N_UMSK                         (~(((1U<<SEC_ENG_SE_CDET_0_T_LOOP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_LOOP_N_POS))
#define SEC_ENG_SE_CDET_0_T_DLY_N                               SEC_ENG_SE_CDET_0_T_DLY_N
#define SEC_ENG_SE_CDET_0_T_DLY_N_POS                           (8U)
#define SEC_ENG_SE_CDET_0_T_DLY_N_LEN                           (8U)
#define SEC_ENG_SE_CDET_0_T_DLY_N_MSK                           (((1U<<SEC_ENG_SE_CDET_0_T_DLY_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_DLY_N_POS)
#define SEC_ENG_SE_CDET_0_T_DLY_N_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_0_T_DLY_N_LEN)-1)<<SEC_ENG_SE_CDET_0_T_DLY_N_POS))
#define SEC_ENG_SE_CDET_0_G_SLP_N                               SEC_ENG_SE_CDET_0_G_SLP_N
#define SEC_ENG_SE_CDET_0_G_SLP_N_POS                           (16U)
#define SEC_ENG_SE_CDET_0_G_SLP_N_LEN                           (8U)
#define SEC_ENG_SE_CDET_0_G_SLP_N_MSK                           (((1U<<SEC_ENG_SE_CDET_0_G_SLP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_G_SLP_N_POS)
#define SEC_ENG_SE_CDET_0_G_SLP_N_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_0_G_SLP_N_LEN)-1)<<SEC_ENG_SE_CDET_0_G_SLP_N_POS))

/* 0x4FC : se_cdet_0_ctrl_prot */
#define SEC_ENG_SE_CDET_0_CTRL_PROT_OFFSET                      (0x4FC)
#define SEC_ENG_SE_CDET_PROT_EN                                 SEC_ENG_SE_CDET_PROT_EN
#define SEC_ENG_SE_CDET_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_CDET_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_CDET_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_CDET_PROT_EN_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_POS)
#define SEC_ENG_SE_CDET_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_CDET_PROT_EN_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_POS))
#define SEC_ENG_SE_CDET_ID0_EN                                  SEC_ENG_SE_CDET_ID0_EN
#define SEC_ENG_SE_CDET_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_CDET_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_CDET_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_CDET_ID0_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_POS)
#define SEC_ENG_SE_CDET_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_CDET_ID0_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_POS))
#define SEC_ENG_SE_CDET_ID1_EN                                  SEC_ENG_SE_CDET_ID1_EN
#define SEC_ENG_SE_CDET_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_CDET_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_CDET_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_CDET_ID1_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_POS)
#define SEC_ENG_SE_CDET_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_CDET_ID1_EN_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_POS))

/* 0x500 : se_gmac_0_ctrl_0 */
#define SEC_ENG_SE_GMAC_0_CTRL_0_OFFSET                         (0x500)
#define SEC_ENG_SE_GMAC_0_BUSY                                  SEC_ENG_SE_GMAC_0_BUSY
#define SEC_ENG_SE_GMAC_0_BUSY_POS                              (0U)
#define SEC_ENG_SE_GMAC_0_BUSY_LEN                              (1U)
#define SEC_ENG_SE_GMAC_0_BUSY_MSK                              (((1U<<SEC_ENG_SE_GMAC_0_BUSY_LEN)-1)<<SEC_ENG_SE_GMAC_0_BUSY_POS)
#define SEC_ENG_SE_GMAC_0_BUSY_UMSK                             (~(((1U<<SEC_ENG_SE_GMAC_0_BUSY_LEN)-1)<<SEC_ENG_SE_GMAC_0_BUSY_POS))
#define SEC_ENG_SE_GMAC_0_TRIG_1T                               SEC_ENG_SE_GMAC_0_TRIG_1T
#define SEC_ENG_SE_GMAC_0_TRIG_1T_POS                           (1U)
#define SEC_ENG_SE_GMAC_0_TRIG_1T_LEN                           (1U)
#define SEC_ENG_SE_GMAC_0_TRIG_1T_MSK                           (((1U<<SEC_ENG_SE_GMAC_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_TRIG_1T_POS)
#define SEC_ENG_SE_GMAC_0_TRIG_1T_UMSK                          (~(((1U<<SEC_ENG_SE_GMAC_0_TRIG_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_TRIG_1T_POS))
#define SEC_ENG_SE_GMAC_0_EN                                    SEC_ENG_SE_GMAC_0_EN
#define SEC_ENG_SE_GMAC_0_EN_POS                                (2U)
#define SEC_ENG_SE_GMAC_0_EN_LEN                                (1U)
#define SEC_ENG_SE_GMAC_0_EN_MSK                                (((1U<<SEC_ENG_SE_GMAC_0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_0_EN_POS)
#define SEC_ENG_SE_GMAC_0_EN_UMSK                               (~(((1U<<SEC_ENG_SE_GMAC_0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_0_EN_POS))
#define SEC_ENG_SE_GMAC_0_INT                                   SEC_ENG_SE_GMAC_0_INT
#define SEC_ENG_SE_GMAC_0_INT_POS                               (8U)
#define SEC_ENG_SE_GMAC_0_INT_LEN                               (1U)
#define SEC_ENG_SE_GMAC_0_INT_MSK                               (((1U<<SEC_ENG_SE_GMAC_0_INT_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_POS)
#define SEC_ENG_SE_GMAC_0_INT_UMSK                              (~(((1U<<SEC_ENG_SE_GMAC_0_INT_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_POS))
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T                            SEC_ENG_SE_GMAC_0_INT_CLR_1T
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_POS                        (9U)
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_LEN                        (1U)
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_MSK                        (((1U<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_POS)
#define SEC_ENG_SE_GMAC_0_INT_CLR_1T_UMSK                       (~(((1U<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_CLR_1T_POS))
#define SEC_ENG_SE_GMAC_0_INT_SET_1T                            SEC_ENG_SE_GMAC_0_INT_SET_1T
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_POS                        (10U)
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_LEN                        (1U)
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_MSK                        (((1U<<SEC_ENG_SE_GMAC_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_SET_1T_POS)
#define SEC_ENG_SE_GMAC_0_INT_SET_1T_UMSK                       (~(((1U<<SEC_ENG_SE_GMAC_0_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_SET_1T_POS))
#define SEC_ENG_SE_GMAC_0_INT_MASK                              SEC_ENG_SE_GMAC_0_INT_MASK
#define SEC_ENG_SE_GMAC_0_INT_MASK_POS                          (11U)
#define SEC_ENG_SE_GMAC_0_INT_MASK_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_INT_MASK_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_MASK_POS)
#define SEC_ENG_SE_GMAC_0_INT_MASK_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_INT_MASK_LEN)-1)<<SEC_ENG_SE_GMAC_0_INT_MASK_POS))
#define SEC_ENG_SE_GMAC_0_T_ENDIAN                              SEC_ENG_SE_GMAC_0_T_ENDIAN
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_POS                          (12U)
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_T_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_T_ENDIAN_POS)
#define SEC_ENG_SE_GMAC_0_T_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_T_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_T_ENDIAN_POS))
#define SEC_ENG_SE_GMAC_0_H_ENDIAN                              SEC_ENG_SE_GMAC_0_H_ENDIAN
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_POS                          (13U)
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_H_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_H_ENDIAN_POS)
#define SEC_ENG_SE_GMAC_0_H_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_H_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_H_ENDIAN_POS))
#define SEC_ENG_SE_GMAC_0_X_ENDIAN                              SEC_ENG_SE_GMAC_0_X_ENDIAN
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_POS                          (14U)
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_GMAC_0_X_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_X_ENDIAN_POS)
#define SEC_ENG_SE_GMAC_0_X_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_0_X_ENDIAN_LEN)-1)<<SEC_ENG_SE_GMAC_0_X_ENDIAN_POS))

/* 0x504 : se_gmac_0_lca */
#define SEC_ENG_SE_GMAC_0_LCA_OFFSET                            (0x504)
#define SEC_ENG_SE_GMAC_0_LCA                                   SEC_ENG_SE_GMAC_0_LCA
#define SEC_ENG_SE_GMAC_0_LCA_POS                               (0U)
#define SEC_ENG_SE_GMAC_0_LCA_LEN                               (32U)
#define SEC_ENG_SE_GMAC_0_LCA_MSK                               (((1U<<SEC_ENG_SE_GMAC_0_LCA_LEN)-1)<<SEC_ENG_SE_GMAC_0_LCA_POS)
#define SEC_ENG_SE_GMAC_0_LCA_UMSK                              (~(((1U<<SEC_ENG_SE_GMAC_0_LCA_LEN)-1)<<SEC_ENG_SE_GMAC_0_LCA_POS))

/* 0x508 : se_gmac_0_status */
#define SEC_ENG_SE_GMAC_0_STATUS_OFFSET                         (0x508)
#define SEC_ENG_SE_GMAC_0_STATUS                                SEC_ENG_SE_GMAC_0_STATUS
#define SEC_ENG_SE_GMAC_0_STATUS_POS                            (0U)
#define SEC_ENG_SE_GMAC_0_STATUS_LEN                            (32U)
#define SEC_ENG_SE_GMAC_0_STATUS_MSK                            (((1U<<SEC_ENG_SE_GMAC_0_STATUS_LEN)-1)<<SEC_ENG_SE_GMAC_0_STATUS_POS)
#define SEC_ENG_SE_GMAC_0_STATUS_UMSK                           (~(((1U<<SEC_ENG_SE_GMAC_0_STATUS_LEN)-1)<<SEC_ENG_SE_GMAC_0_STATUS_POS))

/* 0x5FC : se_gmac_0_ctrl_prot */
#define SEC_ENG_SE_GMAC_0_CTRL_PROT_OFFSET                      (0x5FC)
#define SEC_ENG_SE_GMAC_PROT_EN                                 SEC_ENG_SE_GMAC_PROT_EN
#define SEC_ENG_SE_GMAC_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_GMAC_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_GMAC_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_GMAC_PROT_EN_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_POS)
#define SEC_ENG_SE_GMAC_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_GMAC_PROT_EN_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_POS))
#define SEC_ENG_SE_GMAC_ID0_EN                                  SEC_ENG_SE_GMAC_ID0_EN
#define SEC_ENG_SE_GMAC_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_GMAC_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_GMAC_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_GMAC_ID0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_POS)
#define SEC_ENG_SE_GMAC_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_GMAC_ID0_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_POS))
#define SEC_ENG_SE_GMAC_ID1_EN                                  SEC_ENG_SE_GMAC_ID1_EN
#define SEC_ENG_SE_GMAC_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_GMAC_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_GMAC_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_GMAC_ID1_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_POS)
#define SEC_ENG_SE_GMAC_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_GMAC_ID1_EN_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_POS))

/* 0xF00 : se_ctrl_prot_rd */
#define SEC_ENG_SE_CTRL_PROT_RD_OFFSET                          (0xF00)
#define SEC_ENG_SE_SHA_PROT_EN_RD                               SEC_ENG_SE_SHA_PROT_EN_RD
#define SEC_ENG_SE_SHA_PROT_EN_RD_POS                           (0U)
#define SEC_ENG_SE_SHA_PROT_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_SHA_PROT_EN_RD_MSK                           (((1U<<SEC_ENG_SE_SHA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_RD_POS)
#define SEC_ENG_SE_SHA_PROT_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_RD_POS))
#define SEC_ENG_SE_SHA_ID0_EN_RD                                SEC_ENG_SE_SHA_ID0_EN_RD
#define SEC_ENG_SE_SHA_ID0_EN_RD_POS                            (1U)
#define SEC_ENG_SE_SHA_ID0_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_SHA_ID0_EN_RD_MSK                            (((1U<<SEC_ENG_SE_SHA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_RD_POS)
#define SEC_ENG_SE_SHA_ID0_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_RD_POS))
#define SEC_ENG_SE_SHA_ID1_EN_RD                                SEC_ENG_SE_SHA_ID1_EN_RD
#define SEC_ENG_SE_SHA_ID1_EN_RD_POS                            (2U)
#define SEC_ENG_SE_SHA_ID1_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_SHA_ID1_EN_RD_MSK                            (((1U<<SEC_ENG_SE_SHA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_RD_POS)
#define SEC_ENG_SE_SHA_ID1_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_RD_POS))
#define SEC_ENG_SE_AES_PROT_EN_RD                               SEC_ENG_SE_AES_PROT_EN_RD
#define SEC_ENG_SE_AES_PROT_EN_RD_POS                           (4U)
#define SEC_ENG_SE_AES_PROT_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_AES_PROT_EN_RD_MSK                           (((1U<<SEC_ENG_SE_AES_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_RD_POS)
#define SEC_ENG_SE_AES_PROT_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_AES_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_RD_POS))
#define SEC_ENG_SE_AES_ID0_EN_RD                                SEC_ENG_SE_AES_ID0_EN_RD
#define SEC_ENG_SE_AES_ID0_EN_RD_POS                            (5U)
#define SEC_ENG_SE_AES_ID0_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_AES_ID0_EN_RD_MSK                            (((1U<<SEC_ENG_SE_AES_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_RD_POS)
#define SEC_ENG_SE_AES_ID0_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_AES_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_RD_POS))
#define SEC_ENG_SE_AES_ID1_EN_RD                                SEC_ENG_SE_AES_ID1_EN_RD
#define SEC_ENG_SE_AES_ID1_EN_RD_POS                            (6U)
#define SEC_ENG_SE_AES_ID1_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_AES_ID1_EN_RD_MSK                            (((1U<<SEC_ENG_SE_AES_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_RD_POS)
#define SEC_ENG_SE_AES_ID1_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_AES_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_RD_POS))
#define SEC_ENG_SE_TRNG_PROT_EN_RD                              SEC_ENG_SE_TRNG_PROT_EN_RD
#define SEC_ENG_SE_TRNG_PROT_EN_RD_POS                          (8U)
#define SEC_ENG_SE_TRNG_PROT_EN_RD_LEN                          (1U)
#define SEC_ENG_SE_TRNG_PROT_EN_RD_MSK                          (((1U<<SEC_ENG_SE_TRNG_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_RD_POS)
#define SEC_ENG_SE_TRNG_PROT_EN_RD_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_RD_POS))
#define SEC_ENG_SE_TRNG_ID0_EN_RD                               SEC_ENG_SE_TRNG_ID0_EN_RD
#define SEC_ENG_SE_TRNG_ID0_EN_RD_POS                           (9U)
#define SEC_ENG_SE_TRNG_ID0_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_RD_MSK                           (((1U<<SEC_ENG_SE_TRNG_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_RD_POS)
#define SEC_ENG_SE_TRNG_ID0_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_RD_POS))
#define SEC_ENG_SE_TRNG_ID1_EN_RD                               SEC_ENG_SE_TRNG_ID1_EN_RD
#define SEC_ENG_SE_TRNG_ID1_EN_RD_POS                           (10U)
#define SEC_ENG_SE_TRNG_ID1_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_TRNG_ID1_EN_RD_MSK                           (((1U<<SEC_ENG_SE_TRNG_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_RD_POS)
#define SEC_ENG_SE_TRNG_ID1_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_RD_POS))
#define SEC_ENG_SE_PKA_PROT_EN_RD                               SEC_ENG_SE_PKA_PROT_EN_RD
#define SEC_ENG_SE_PKA_PROT_EN_RD_POS                           (12U)
#define SEC_ENG_SE_PKA_PROT_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_PKA_PROT_EN_RD_MSK                           (((1U<<SEC_ENG_SE_PKA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_RD_POS)
#define SEC_ENG_SE_PKA_PROT_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_PKA_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_PROT_EN_RD_POS))
#define SEC_ENG_SE_PKA_ID0_EN_RD                                SEC_ENG_SE_PKA_ID0_EN_RD
#define SEC_ENG_SE_PKA_ID0_EN_RD_POS                            (13U)
#define SEC_ENG_SE_PKA_ID0_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_PKA_ID0_EN_RD_MSK                            (((1U<<SEC_ENG_SE_PKA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_RD_POS)
#define SEC_ENG_SE_PKA_ID0_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID0_EN_RD_POS))
#define SEC_ENG_SE_PKA_ID1_EN_RD                                SEC_ENG_SE_PKA_ID1_EN_RD
#define SEC_ENG_SE_PKA_ID1_EN_RD_POS                            (14U)
#define SEC_ENG_SE_PKA_ID1_EN_RD_LEN                            (1U)
#define SEC_ENG_SE_PKA_ID1_EN_RD_MSK                            (((1U<<SEC_ENG_SE_PKA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_RD_POS)
#define SEC_ENG_SE_PKA_ID1_EN_RD_UMSK                           (~(((1U<<SEC_ENG_SE_PKA_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_PKA_ID1_EN_RD_POS))
#define SEC_ENG_SE_CDET_PROT_EN_RD                              SEC_ENG_SE_CDET_PROT_EN_RD
#define SEC_ENG_SE_CDET_PROT_EN_RD_POS                          (16U)
#define SEC_ENG_SE_CDET_PROT_EN_RD_LEN                          (1U)
#define SEC_ENG_SE_CDET_PROT_EN_RD_MSK                          (((1U<<SEC_ENG_SE_CDET_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_RD_POS)
#define SEC_ENG_SE_CDET_PROT_EN_RD_UMSK                         (~(((1U<<SEC_ENG_SE_CDET_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_PROT_EN_RD_POS))
#define SEC_ENG_SE_CDET_ID0_EN_RD                               SEC_ENG_SE_CDET_ID0_EN_RD
#define SEC_ENG_SE_CDET_ID0_EN_RD_POS                           (17U)
#define SEC_ENG_SE_CDET_ID0_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_CDET_ID0_EN_RD_MSK                           (((1U<<SEC_ENG_SE_CDET_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_RD_POS)
#define SEC_ENG_SE_CDET_ID0_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID0_EN_RD_POS))
#define SEC_ENG_SE_CDET_ID1_EN_RD                               SEC_ENG_SE_CDET_ID1_EN_RD
#define SEC_ENG_SE_CDET_ID1_EN_RD_POS                           (18U)
#define SEC_ENG_SE_CDET_ID1_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_CDET_ID1_EN_RD_MSK                           (((1U<<SEC_ENG_SE_CDET_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_RD_POS)
#define SEC_ENG_SE_CDET_ID1_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_CDET_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_CDET_ID1_EN_RD_POS))
#define SEC_ENG_SE_GMAC_PROT_EN_RD                              SEC_ENG_SE_GMAC_PROT_EN_RD
#define SEC_ENG_SE_GMAC_PROT_EN_RD_POS                          (20U)
#define SEC_ENG_SE_GMAC_PROT_EN_RD_LEN                          (1U)
#define SEC_ENG_SE_GMAC_PROT_EN_RD_MSK                          (((1U<<SEC_ENG_SE_GMAC_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_RD_POS)
#define SEC_ENG_SE_GMAC_PROT_EN_RD_UMSK                         (~(((1U<<SEC_ENG_SE_GMAC_PROT_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_PROT_EN_RD_POS))
#define SEC_ENG_SE_GMAC_ID0_EN_RD                               SEC_ENG_SE_GMAC_ID0_EN_RD
#define SEC_ENG_SE_GMAC_ID0_EN_RD_POS                           (21U)
#define SEC_ENG_SE_GMAC_ID0_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_GMAC_ID0_EN_RD_MSK                           (((1U<<SEC_ENG_SE_GMAC_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_RD_POS)
#define SEC_ENG_SE_GMAC_ID0_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_GMAC_ID0_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID0_EN_RD_POS))
#define SEC_ENG_SE_GMAC_ID1_EN_RD                               SEC_ENG_SE_GMAC_ID1_EN_RD
#define SEC_ENG_SE_GMAC_ID1_EN_RD_POS                           (22U)
#define SEC_ENG_SE_GMAC_ID1_EN_RD_LEN                           (1U)
#define SEC_ENG_SE_GMAC_ID1_EN_RD_MSK                           (((1U<<SEC_ENG_SE_GMAC_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_RD_POS)
#define SEC_ENG_SE_GMAC_ID1_EN_RD_UMSK                          (~(((1U<<SEC_ENG_SE_GMAC_ID1_EN_RD_LEN)-1)<<SEC_ENG_SE_GMAC_ID1_EN_RD_POS))
#define SEC_ENG_SE_DBG_DIS                                      SEC_ENG_SE_DBG_DIS
#define SEC_ENG_SE_DBG_DIS_POS                                  (31U)
#define SEC_ENG_SE_DBG_DIS_LEN                                  (1U)
#define SEC_ENG_SE_DBG_DIS_MSK                                  (((1U<<SEC_ENG_SE_DBG_DIS_LEN)-1)<<SEC_ENG_SE_DBG_DIS_POS)
#define SEC_ENG_SE_DBG_DIS_UMSK                                 (~(((1U<<SEC_ENG_SE_DBG_DIS_LEN)-1)<<SEC_ENG_SE_DBG_DIS_POS))

/* 0xF04 : se_ctrl_reserved_0 */
#define SEC_ENG_SE_CTRL_RESERVED_0_OFFSET                       (0xF04)
#define SEC_ENG_SE_CTRL_RESERVED_0                              SEC_ENG_SE_CTRL_RESERVED_0
#define SEC_ENG_SE_CTRL_RESERVED_0_POS                          (0U)
#define SEC_ENG_SE_CTRL_RESERVED_0_LEN                          (32U)
#define SEC_ENG_SE_CTRL_RESERVED_0_MSK                          (((1U<<SEC_ENG_SE_CTRL_RESERVED_0_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_0_POS)
#define SEC_ENG_SE_CTRL_RESERVED_0_UMSK                         (~(((1U<<SEC_ENG_SE_CTRL_RESERVED_0_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_0_POS))

/* 0xF08 : se_ctrl_reserved_1 */
#define SEC_ENG_SE_CTRL_RESERVED_1_OFFSET                       (0xF08)
#define SEC_ENG_SE_CTRL_RESERVED_1                              SEC_ENG_SE_CTRL_RESERVED_1
#define SEC_ENG_SE_CTRL_RESERVED_1_POS                          (0U)
#define SEC_ENG_SE_CTRL_RESERVED_1_LEN                          (32U)
#define SEC_ENG_SE_CTRL_RESERVED_1_MSK                          (((1U<<SEC_ENG_SE_CTRL_RESERVED_1_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_1_POS)
#define SEC_ENG_SE_CTRL_RESERVED_1_UMSK                         (~(((1U<<SEC_ENG_SE_CTRL_RESERVED_1_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_1_POS))

/* 0xF0C : se_ctrl_reserved_2 */
#define SEC_ENG_SE_CTRL_RESERVED_2_OFFSET                       (0xF0C)
#define SEC_ENG_SE_CTRL_RESERVED_2                              SEC_ENG_SE_CTRL_RESERVED_2
#define SEC_ENG_SE_CTRL_RESERVED_2_POS                          (0U)
#define SEC_ENG_SE_CTRL_RESERVED_2_LEN                          (32U)
#define SEC_ENG_SE_CTRL_RESERVED_2_MSK                          (((1U<<SEC_ENG_SE_CTRL_RESERVED_2_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_2_POS)
#define SEC_ENG_SE_CTRL_RESERVED_2_UMSK                         (~(((1U<<SEC_ENG_SE_CTRL_RESERVED_2_LEN)-1)<<SEC_ENG_SE_CTRL_RESERVED_2_POS))


/*Following is reg patch*/

/* 0x0 : se_sha_ctrl */
#define SEC_ENG_SE_SHA_CTRL_OFFSET                              (0x0)
#define SEC_ENG_SE_SHA_BUSY                                     SEC_ENG_SE_SHA_BUSY
#define SEC_ENG_SE_SHA_BUSY_POS                                 (0U)
#define SEC_ENG_SE_SHA_BUSY_LEN                                 (1U)
#define SEC_ENG_SE_SHA_BUSY_MSK                                 (((1U<<SEC_ENG_SE_SHA_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_BUSY_POS)
#define SEC_ENG_SE_SHA_BUSY_UMSK                                (~(((1U<<SEC_ENG_SE_SHA_BUSY_LEN)-1)<<SEC_ENG_SE_SHA_BUSY_POS))
#define SEC_ENG_SE_SHA_TRIG_1T                                  SEC_ENG_SE_SHA_TRIG_1T
#define SEC_ENG_SE_SHA_TRIG_1T_POS                              (1U)
#define SEC_ENG_SE_SHA_TRIG_1T_LEN                              (1U)
#define SEC_ENG_SE_SHA_TRIG_1T_MSK                              (((1U<<SEC_ENG_SE_SHA_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_TRIG_1T_POS)
#define SEC_ENG_SE_SHA_TRIG_1T_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_TRIG_1T_LEN)-1)<<SEC_ENG_SE_SHA_TRIG_1T_POS))
#define SEC_ENG_SE_SHA_MODE                                     SEC_ENG_SE_SHA_MODE
#define SEC_ENG_SE_SHA_MODE_POS                                 (2U)
#define SEC_ENG_SE_SHA_MODE_LEN                                 (3U)
#define SEC_ENG_SE_SHA_MODE_MSK                                 (((1U<<SEC_ENG_SE_SHA_MODE_LEN)-1)<<SEC_ENG_SE_SHA_MODE_POS)
#define SEC_ENG_SE_SHA_MODE_UMSK                                (~(((1U<<SEC_ENG_SE_SHA_MODE_LEN)-1)<<SEC_ENG_SE_SHA_MODE_POS))
#define SEC_ENG_SE_SHA_EN                                       SEC_ENG_SE_SHA_EN
#define SEC_ENG_SE_SHA_EN_POS                                   (5U)
#define SEC_ENG_SE_SHA_EN_LEN                                   (1U)
#define SEC_ENG_SE_SHA_EN_MSK                                   (((1U<<SEC_ENG_SE_SHA_EN_LEN)-1)<<SEC_ENG_SE_SHA_EN_POS)
#define SEC_ENG_SE_SHA_EN_UMSK                                  (~(((1U<<SEC_ENG_SE_SHA_EN_LEN)-1)<<SEC_ENG_SE_SHA_EN_POS))
#define SEC_ENG_SE_SHA_HASH_SEL                                 SEC_ENG_SE_SHA_HASH_SEL
#define SEC_ENG_SE_SHA_HASH_SEL_POS                             (6U)
#define SEC_ENG_SE_SHA_HASH_SEL_LEN                             (1U)
#define SEC_ENG_SE_SHA_HASH_SEL_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_HASH_SEL_POS)
#define SEC_ENG_SE_SHA_HASH_SEL_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_SEL_LEN)-1)<<SEC_ENG_SE_SHA_HASH_SEL_POS))
#define SEC_ENG_SE_SHA_INT                                      SEC_ENG_SE_SHA_INT
#define SEC_ENG_SE_SHA_INT_POS                                  (8U)
#define SEC_ENG_SE_SHA_INT_LEN                                  (1U)
#define SEC_ENG_SE_SHA_INT_MSK                                  (((1U<<SEC_ENG_SE_SHA_INT_LEN)-1)<<SEC_ENG_SE_SHA_INT_POS)
#define SEC_ENG_SE_SHA_INT_UMSK                                 (~(((1U<<SEC_ENG_SE_SHA_INT_LEN)-1)<<SEC_ENG_SE_SHA_INT_POS))
#define SEC_ENG_SE_SHA_INT_CLR_1T                               SEC_ENG_SE_SHA_INT_CLR_1T
#define SEC_ENG_SE_SHA_INT_CLR_1T_POS                           (9U)
#define SEC_ENG_SE_SHA_INT_CLR_1T_LEN                           (1U)
#define SEC_ENG_SE_SHA_INT_CLR_1T_MSK                           (((1U<<SEC_ENG_SE_SHA_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_CLR_1T_POS)
#define SEC_ENG_SE_SHA_INT_CLR_1T_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_CLR_1T_POS))
#define SEC_ENG_SE_SHA_INT_SET_1T                               SEC_ENG_SE_SHA_INT_SET_1T
#define SEC_ENG_SE_SHA_INT_SET_1T_POS                           (10U)
#define SEC_ENG_SE_SHA_INT_SET_1T_LEN                           (1U)
#define SEC_ENG_SE_SHA_INT_SET_1T_MSK                           (((1U<<SEC_ENG_SE_SHA_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_SET_1T_POS)
#define SEC_ENG_SE_SHA_INT_SET_1T_UMSK                          (~(((1U<<SEC_ENG_SE_SHA_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_SHA_INT_SET_1T_POS))
#define SEC_ENG_SE_SHA_INT_MASK                                 SEC_ENG_SE_SHA_INT_MASK
#define SEC_ENG_SE_SHA_INT_MASK_POS                             (11U)
#define SEC_ENG_SE_SHA_INT_MASK_LEN                             (1U)
#define SEC_ENG_SE_SHA_INT_MASK_MSK                             (((1U<<SEC_ENG_SE_SHA_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_INT_MASK_POS)
#define SEC_ENG_SE_SHA_INT_MASK_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_INT_MASK_LEN)-1)<<SEC_ENG_SE_SHA_INT_MASK_POS))
#define SEC_ENG_SE_SHA_LINK_MODE                                SEC_ENG_SE_SHA_LINK_MODE
#define SEC_ENG_SE_SHA_LINK_MODE_POS                            (15U)
#define SEC_ENG_SE_SHA_LINK_MODE_LEN                            (1U)
#define SEC_ENG_SE_SHA_LINK_MODE_MSK                            (((1U<<SEC_ENG_SE_SHA_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_LINK_MODE_POS)
#define SEC_ENG_SE_SHA_LINK_MODE_UMSK                           (~(((1U<<SEC_ENG_SE_SHA_LINK_MODE_LEN)-1)<<SEC_ENG_SE_SHA_LINK_MODE_POS))
#define SEC_ENG_SE_SHA_MSG_LEN                                  SEC_ENG_SE_SHA_MSG_LEN
#define SEC_ENG_SE_SHA_MSG_LEN_POS                              (16U)
#define SEC_ENG_SE_SHA_MSG_LEN_LEN                              (16U)
#define SEC_ENG_SE_SHA_MSG_LEN_MSK                              (((1U<<SEC_ENG_SE_SHA_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_MSG_LEN_POS)
#define SEC_ENG_SE_SHA_MSG_LEN_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_MSG_LEN_LEN)-1)<<SEC_ENG_SE_SHA_MSG_LEN_POS))

/* 0x4 : se_sha_msa */
#define SEC_ENG_SE_SHA_MSA_OFFSET                               (0x4)
#define SEC_ENG_SE_SHA_MSA                                      SEC_ENG_SE_SHA_MSA
#define SEC_ENG_SE_SHA_MSA_POS                                  (0U)
#define SEC_ENG_SE_SHA_MSA_LEN                                  (32U)
#define SEC_ENG_SE_SHA_MSA_MSK                                  (((1U<<SEC_ENG_SE_SHA_MSA_LEN)-1)<<SEC_ENG_SE_SHA_MSA_POS)
#define SEC_ENG_SE_SHA_MSA_UMSK                                 (~(((1U<<SEC_ENG_SE_SHA_MSA_LEN)-1)<<SEC_ENG_SE_SHA_MSA_POS))

/* 0x8 : se_sha_status */
#define SEC_ENG_SE_SHA_STATUS_OFFSET                            (0x8)
#define SEC_ENG_SE_SHA_STATUS                                   SEC_ENG_SE_SHA_STATUS
#define SEC_ENG_SE_SHA_STATUS_POS                               (0U)
#define SEC_ENG_SE_SHA_STATUS_LEN                               (32U)
#define SEC_ENG_SE_SHA_STATUS_MSK                               (((1U<<SEC_ENG_SE_SHA_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_STATUS_POS)
#define SEC_ENG_SE_SHA_STATUS_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_STATUS_LEN)-1)<<SEC_ENG_SE_SHA_STATUS_POS))

/* 0xc : se_sha_endian */
#define SEC_ENG_SE_SHA_ENDIAN_OFFSET                            (0xc)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN                              SEC_ENG_SE_SHA_DOUT_ENDIAN
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_POS                          (0U)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_SHA_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_SHA_DOUT_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_SHA_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_SHA_DOUT_ENDIAN_POS))

/* 0x10 : se_sha_hash_l_0 */
#define SEC_ENG_SE_SHA_HASH_L_0_OFFSET                          (0x10)
#define SEC_ENG_SE_SHA_HASH_L_0                                 SEC_ENG_SE_SHA_HASH_L_0
#define SEC_ENG_SE_SHA_HASH_L_0_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_0_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_0_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_0_POS)
#define SEC_ENG_SE_SHA_HASH_L_0_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_0_POS))

/* 0x14 : se_sha_hash_l_1 */
#define SEC_ENG_SE_SHA_HASH_L_1_OFFSET                          (0x14)
#define SEC_ENG_SE_SHA_HASH_L_1                                 SEC_ENG_SE_SHA_HASH_L_1
#define SEC_ENG_SE_SHA_HASH_L_1_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_1_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_1_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_1_POS)
#define SEC_ENG_SE_SHA_HASH_L_1_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_1_POS))

/* 0x18 : se_sha_hash_l_2 */
#define SEC_ENG_SE_SHA_HASH_L_2_OFFSET                          (0x18)
#define SEC_ENG_SE_SHA_HASH_L_2                                 SEC_ENG_SE_SHA_HASH_L_2
#define SEC_ENG_SE_SHA_HASH_L_2_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_2_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_2_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_2_POS)
#define SEC_ENG_SE_SHA_HASH_L_2_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_2_POS))

/* 0x1c : se_sha_hash_l_3 */
#define SEC_ENG_SE_SHA_HASH_L_3_OFFSET                          (0x1c)
#define SEC_ENG_SE_SHA_HASH_L_3                                 SEC_ENG_SE_SHA_HASH_L_3
#define SEC_ENG_SE_SHA_HASH_L_3_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_3_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_3_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_3_POS)
#define SEC_ENG_SE_SHA_HASH_L_3_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_3_POS))

/* 0x20 : se_sha_hash_l_4 */
#define SEC_ENG_SE_SHA_HASH_L_4_OFFSET                          (0x20)
#define SEC_ENG_SE_SHA_HASH_L_4                                 SEC_ENG_SE_SHA_HASH_L_4
#define SEC_ENG_SE_SHA_HASH_L_4_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_4_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_4_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_4_POS)
#define SEC_ENG_SE_SHA_HASH_L_4_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_4_POS))

/* 0x24 : se_sha_hash_l_5 */
#define SEC_ENG_SE_SHA_HASH_L_5_OFFSET                          (0x24)
#define SEC_ENG_SE_SHA_HASH_L_5                                 SEC_ENG_SE_SHA_HASH_L_5
#define SEC_ENG_SE_SHA_HASH_L_5_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_5_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_5_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_5_POS)
#define SEC_ENG_SE_SHA_HASH_L_5_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_5_POS))

/* 0x28 : se_sha_hash_l_6 */
#define SEC_ENG_SE_SHA_HASH_L_6_OFFSET                          (0x28)
#define SEC_ENG_SE_SHA_HASH_L_6                                 SEC_ENG_SE_SHA_HASH_L_6
#define SEC_ENG_SE_SHA_HASH_L_6_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_6_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_6_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_6_POS)
#define SEC_ENG_SE_SHA_HASH_L_6_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_6_POS))

/* 0x2c : se_sha_hash_l_7 */
#define SEC_ENG_SE_SHA_HASH_L_7_OFFSET                          (0x2c)
#define SEC_ENG_SE_SHA_HASH_L_7                                 SEC_ENG_SE_SHA_HASH_L_7
#define SEC_ENG_SE_SHA_HASH_L_7_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_L_7_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_L_7_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_7_POS)
#define SEC_ENG_SE_SHA_HASH_L_7_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_L_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_L_7_POS))

/* 0x30 : se_sha_hash_h_0 */
#define SEC_ENG_SE_SHA_HASH_H_0_OFFSET                          (0x30)
#define SEC_ENG_SE_SHA_HASH_H_0                                 SEC_ENG_SE_SHA_HASH_H_0
#define SEC_ENG_SE_SHA_HASH_H_0_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_0_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_0_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_0_POS)
#define SEC_ENG_SE_SHA_HASH_H_0_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_0_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_0_POS))

/* 0x34 : se_sha_hash_h_1 */
#define SEC_ENG_SE_SHA_HASH_H_1_OFFSET                          (0x34)
#define SEC_ENG_SE_SHA_HASH_H_1                                 SEC_ENG_SE_SHA_HASH_H_1
#define SEC_ENG_SE_SHA_HASH_H_1_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_1_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_1_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_1_POS)
#define SEC_ENG_SE_SHA_HASH_H_1_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_1_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_1_POS))

/* 0x38 : se_sha_hash_h_2 */
#define SEC_ENG_SE_SHA_HASH_H_2_OFFSET                          (0x38)
#define SEC_ENG_SE_SHA_HASH_H_2                                 SEC_ENG_SE_SHA_HASH_H_2
#define SEC_ENG_SE_SHA_HASH_H_2_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_2_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_2_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_2_POS)
#define SEC_ENG_SE_SHA_HASH_H_2_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_2_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_2_POS))

/* 0x3c : se_sha_hash_h_3 */
#define SEC_ENG_SE_SHA_HASH_H_3_OFFSET                          (0x3c)
#define SEC_ENG_SE_SHA_HASH_H_3                                 SEC_ENG_SE_SHA_HASH_H_3
#define SEC_ENG_SE_SHA_HASH_H_3_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_3_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_3_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_3_POS)
#define SEC_ENG_SE_SHA_HASH_H_3_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_3_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_3_POS))

/* 0x40 : se_sha_hash_h_4 */
#define SEC_ENG_SE_SHA_HASH_H_4_OFFSET                          (0x40)
#define SEC_ENG_SE_SHA_HASH_H_4                                 SEC_ENG_SE_SHA_HASH_H_4
#define SEC_ENG_SE_SHA_HASH_H_4_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_4_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_4_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_4_POS)
#define SEC_ENG_SE_SHA_HASH_H_4_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_4_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_4_POS))

/* 0x44 : se_sha_hash_h_5 */
#define SEC_ENG_SE_SHA_HASH_H_5_OFFSET                          (0x44)
#define SEC_ENG_SE_SHA_HASH_H_5                                 SEC_ENG_SE_SHA_HASH_H_5
#define SEC_ENG_SE_SHA_HASH_H_5_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_5_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_5_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_5_POS)
#define SEC_ENG_SE_SHA_HASH_H_5_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_5_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_5_POS))

/* 0x48 : se_sha_hash_h_6 */
#define SEC_ENG_SE_SHA_HASH_H_6_OFFSET                          (0x48)
#define SEC_ENG_SE_SHA_HASH_H_6                                 SEC_ENG_SE_SHA_HASH_H_6
#define SEC_ENG_SE_SHA_HASH_H_6_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_6_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_6_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_6_POS)
#define SEC_ENG_SE_SHA_HASH_H_6_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_6_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_6_POS))

/* 0x4c : se_sha_hash_h_7 */
#define SEC_ENG_SE_SHA_HASH_H_7_OFFSET                          (0x4c)
#define SEC_ENG_SE_SHA_HASH_H_7                                 SEC_ENG_SE_SHA_HASH_H_7
#define SEC_ENG_SE_SHA_HASH_H_7_POS                             (0U)
#define SEC_ENG_SE_SHA_HASH_H_7_LEN                             (32U)
#define SEC_ENG_SE_SHA_HASH_H_7_MSK                             (((1U<<SEC_ENG_SE_SHA_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_7_POS)
#define SEC_ENG_SE_SHA_HASH_H_7_UMSK                            (~(((1U<<SEC_ENG_SE_SHA_HASH_H_7_LEN)-1)<<SEC_ENG_SE_SHA_HASH_H_7_POS))

/* 0x50 : se_sha_link */
#define SEC_ENG_SE_SHA_LINK_OFFSET                              (0x50)
#define SEC_ENG_SE_SHA_LCA                                      SEC_ENG_SE_SHA_LCA
#define SEC_ENG_SE_SHA_LCA_POS                                  (0U)
#define SEC_ENG_SE_SHA_LCA_LEN                                  (32U)
#define SEC_ENG_SE_SHA_LCA_MSK                                  (((1U<<SEC_ENG_SE_SHA_LCA_LEN)-1)<<SEC_ENG_SE_SHA_LCA_POS)
#define SEC_ENG_SE_SHA_LCA_UMSK                                 (~(((1U<<SEC_ENG_SE_SHA_LCA_LEN)-1)<<SEC_ENG_SE_SHA_LCA_POS))

/* 0xfc : se_sha_ctrl_prot */
#define SEC_ENG_SE_SHA_CTRL_PROT_OFFSET                         (0xfc)
#define SEC_ENG_SE_SHA_PROT_EN                                  SEC_ENG_SE_SHA_PROT_EN
#define SEC_ENG_SE_SHA_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_SHA_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_SHA_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS)
#define SEC_ENG_SE_SHA_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_SHA_PROT_EN_LEN)-1)<<SEC_ENG_SE_SHA_PROT_EN_POS))
#define SEC_ENG_SE_SHA_ID0_EN                                   SEC_ENG_SE_SHA_ID0_EN
#define SEC_ENG_SE_SHA_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS)
#define SEC_ENG_SE_SHA_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID0_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID0_EN_POS))
#define SEC_ENG_SE_SHA_ID1_EN                                   SEC_ENG_SE_SHA_ID1_EN
#define SEC_ENG_SE_SHA_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_SHA_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_SHA_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS)
#define SEC_ENG_SE_SHA_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_SHA_ID1_EN_LEN)-1)<<SEC_ENG_SE_SHA_ID1_EN_POS))


#define SEC_ENG_SHA_OFFSET     0x000


/*Following is reg patch*/

/* 0x0 : se_aes_ctrl */
#define SEC_ENG_SE_AES_CTRL_OFFSET                              (0x0)
#define SEC_ENG_SE_AES_BUSY                                     SEC_ENG_SE_AES_BUSY
#define SEC_ENG_SE_AES_BUSY_POS                                 (0U)
#define SEC_ENG_SE_AES_BUSY_LEN                                 (1U)
#define SEC_ENG_SE_AES_BUSY_MSK                                 (((1U<<SEC_ENG_SE_AES_BUSY_LEN)-1)<<SEC_ENG_SE_AES_BUSY_POS)
#define SEC_ENG_SE_AES_BUSY_UMSK                                (~(((1U<<SEC_ENG_SE_AES_BUSY_LEN)-1)<<SEC_ENG_SE_AES_BUSY_POS))
#define SEC_ENG_SE_AES_TRIG_1T                                  SEC_ENG_SE_AES_TRIG_1T
#define SEC_ENG_SE_AES_TRIG_1T_POS                              (1U)
#define SEC_ENG_SE_AES_TRIG_1T_LEN                              (1U)
#define SEC_ENG_SE_AES_TRIG_1T_MSK                              (((1U<<SEC_ENG_SE_AES_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_TRIG_1T_POS)
#define SEC_ENG_SE_AES_TRIG_1T_UMSK                             (~(((1U<<SEC_ENG_SE_AES_TRIG_1T_LEN)-1)<<SEC_ENG_SE_AES_TRIG_1T_POS))
#define SEC_ENG_SE_AES_EN                                       SEC_ENG_SE_AES_EN
#define SEC_ENG_SE_AES_EN_POS                                   (2U)
#define SEC_ENG_SE_AES_EN_LEN                                   (1U)
#define SEC_ENG_SE_AES_EN_MSK                                   (((1U<<SEC_ENG_SE_AES_EN_LEN)-1)<<SEC_ENG_SE_AES_EN_POS)
#define SEC_ENG_SE_AES_EN_UMSK                                  (~(((1U<<SEC_ENG_SE_AES_EN_LEN)-1)<<SEC_ENG_SE_AES_EN_POS))
#define SEC_ENG_SE_AES_MODE                                     SEC_ENG_SE_AES_MODE
#define SEC_ENG_SE_AES_MODE_POS                                 (3U)
#define SEC_ENG_SE_AES_MODE_LEN                                 (2U)
#define SEC_ENG_SE_AES_MODE_MSK                                 (((1U<<SEC_ENG_SE_AES_MODE_LEN)-1)<<SEC_ENG_SE_AES_MODE_POS)
#define SEC_ENG_SE_AES_MODE_UMSK                                (~(((1U<<SEC_ENG_SE_AES_MODE_LEN)-1)<<SEC_ENG_SE_AES_MODE_POS))
#define SEC_ENG_SE_AES_DEC_EN                                   SEC_ENG_SE_AES_DEC_EN
#define SEC_ENG_SE_AES_DEC_EN_POS                               (5U)
#define SEC_ENG_SE_AES_DEC_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_DEC_EN_MSK                               (((1U<<SEC_ENG_SE_AES_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_DEC_EN_POS)
#define SEC_ENG_SE_AES_DEC_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_DEC_EN_LEN)-1)<<SEC_ENG_SE_AES_DEC_EN_POS))
#define SEC_ENG_SE_AES_DEC_KEY_SEL                              SEC_ENG_SE_AES_DEC_KEY_SEL
#define SEC_ENG_SE_AES_DEC_KEY_SEL_POS                          (6U)
#define SEC_ENG_SE_AES_DEC_KEY_SEL_LEN                          (1U)
#define SEC_ENG_SE_AES_DEC_KEY_SEL_MSK                          (((1U<<SEC_ENG_SE_AES_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_DEC_KEY_SEL_POS)
#define SEC_ENG_SE_AES_DEC_KEY_SEL_UMSK                         (~(((1U<<SEC_ENG_SE_AES_DEC_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_DEC_KEY_SEL_POS))
#define SEC_ENG_SE_AES_HW_KEY_EN                                SEC_ENG_SE_AES_HW_KEY_EN
#define SEC_ENG_SE_AES_HW_KEY_EN_POS                            (7U)
#define SEC_ENG_SE_AES_HW_KEY_EN_LEN                            (1U)
#define SEC_ENG_SE_AES_HW_KEY_EN_MSK                            (((1U<<SEC_ENG_SE_AES_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_HW_KEY_EN_POS)
#define SEC_ENG_SE_AES_HW_KEY_EN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_HW_KEY_EN_LEN)-1)<<SEC_ENG_SE_AES_HW_KEY_EN_POS))
#define SEC_ENG_SE_AES_INT                                      SEC_ENG_SE_AES_INT
#define SEC_ENG_SE_AES_INT_POS                                  (8U)
#define SEC_ENG_SE_AES_INT_LEN                                  (1U)
#define SEC_ENG_SE_AES_INT_MSK                                  (((1U<<SEC_ENG_SE_AES_INT_LEN)-1)<<SEC_ENG_SE_AES_INT_POS)
#define SEC_ENG_SE_AES_INT_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_INT_LEN)-1)<<SEC_ENG_SE_AES_INT_POS))
#define SEC_ENG_SE_AES_INT_CLR_1T                               SEC_ENG_SE_AES_INT_CLR_1T
#define SEC_ENG_SE_AES_INT_CLR_1T_POS                           (9U)
#define SEC_ENG_SE_AES_INT_CLR_1T_LEN                           (1U)
#define SEC_ENG_SE_AES_INT_CLR_1T_MSK                           (((1U<<SEC_ENG_SE_AES_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_CLR_1T_POS)
#define SEC_ENG_SE_AES_INT_CLR_1T_UMSK                          (~(((1U<<SEC_ENG_SE_AES_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_CLR_1T_POS))
#define SEC_ENG_SE_AES_INT_SET_1T                               SEC_ENG_SE_AES_INT_SET_1T
#define SEC_ENG_SE_AES_INT_SET_1T_POS                           (10U)
#define SEC_ENG_SE_AES_INT_SET_1T_LEN                           (1U)
#define SEC_ENG_SE_AES_INT_SET_1T_MSK                           (((1U<<SEC_ENG_SE_AES_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_SET_1T_POS)
#define SEC_ENG_SE_AES_INT_SET_1T_UMSK                          (~(((1U<<SEC_ENG_SE_AES_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_AES_INT_SET_1T_POS))
#define SEC_ENG_SE_AES_INT_MASK                                 SEC_ENG_SE_AES_INT_MASK
#define SEC_ENG_SE_AES_INT_MASK_POS                             (11U)
#define SEC_ENG_SE_AES_INT_MASK_LEN                             (1U)
#define SEC_ENG_SE_AES_INT_MASK_MSK                             (((1U<<SEC_ENG_SE_AES_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_INT_MASK_POS)
#define SEC_ENG_SE_AES_INT_MASK_UMSK                            (~(((1U<<SEC_ENG_SE_AES_INT_MASK_LEN)-1)<<SEC_ENG_SE_AES_INT_MASK_POS))
#define SEC_ENG_SE_AES_BLOCK_MODE                               SEC_ENG_SE_AES_BLOCK_MODE
#define SEC_ENG_SE_AES_BLOCK_MODE_POS                           (12U)
#define SEC_ENG_SE_AES_BLOCK_MODE_LEN                           (2U)
#define SEC_ENG_SE_AES_BLOCK_MODE_MSK                           (((1U<<SEC_ENG_SE_AES_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_BLOCK_MODE_POS)
#define SEC_ENG_SE_AES_BLOCK_MODE_UMSK                          (~(((1U<<SEC_ENG_SE_AES_BLOCK_MODE_LEN)-1)<<SEC_ENG_SE_AES_BLOCK_MODE_POS))
#define SEC_ENG_SE_AES_IV_SEL                                   SEC_ENG_SE_AES_IV_SEL
#define SEC_ENG_SE_AES_IV_SEL_POS                               (14U)
#define SEC_ENG_SE_AES_IV_SEL_LEN                               (1U)
#define SEC_ENG_SE_AES_IV_SEL_MSK                               (((1U<<SEC_ENG_SE_AES_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_IV_SEL_POS)
#define SEC_ENG_SE_AES_IV_SEL_UMSK                              (~(((1U<<SEC_ENG_SE_AES_IV_SEL_LEN)-1)<<SEC_ENG_SE_AES_IV_SEL_POS))
#define SEC_ENG_SE_AES_LINK_MODE                                SEC_ENG_SE_AES_LINK_MODE
#define SEC_ENG_SE_AES_LINK_MODE_POS                            (15U)
#define SEC_ENG_SE_AES_LINK_MODE_LEN                            (1U)
#define SEC_ENG_SE_AES_LINK_MODE_MSK                            (((1U<<SEC_ENG_SE_AES_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_LINK_MODE_POS)
#define SEC_ENG_SE_AES_LINK_MODE_UMSK                           (~(((1U<<SEC_ENG_SE_AES_LINK_MODE_LEN)-1)<<SEC_ENG_SE_AES_LINK_MODE_POS))
#define SEC_ENG_SE_AES_MSG_LEN                                  SEC_ENG_SE_AES_MSG_LEN
#define SEC_ENG_SE_AES_MSG_LEN_POS                              (16U)
#define SEC_ENG_SE_AES_MSG_LEN_LEN                              (16U)
#define SEC_ENG_SE_AES_MSG_LEN_MSK                              (((1U<<SEC_ENG_SE_AES_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_MSG_LEN_POS)
#define SEC_ENG_SE_AES_MSG_LEN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_MSG_LEN_LEN)-1)<<SEC_ENG_SE_AES_MSG_LEN_POS))

/* 0x4 : se_aes_msa */
#define SEC_ENG_SE_AES_MSA_OFFSET                               (0x4)
#define SEC_ENG_SE_AES_MSA                                      SEC_ENG_SE_AES_MSA
#define SEC_ENG_SE_AES_MSA_POS                                  (0U)
#define SEC_ENG_SE_AES_MSA_LEN                                  (32U)
#define SEC_ENG_SE_AES_MSA_MSK                                  (((1U<<SEC_ENG_SE_AES_MSA_LEN)-1)<<SEC_ENG_SE_AES_MSA_POS)
#define SEC_ENG_SE_AES_MSA_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_MSA_LEN)-1)<<SEC_ENG_SE_AES_MSA_POS))

/* 0x8 : se_aes_mda */
#define SEC_ENG_SE_AES_MDA_OFFSET                               (0x8)
#define SEC_ENG_SE_AES_MDA                                      SEC_ENG_SE_AES_MDA
#define SEC_ENG_SE_AES_MDA_POS                                  (0U)
#define SEC_ENG_SE_AES_MDA_LEN                                  (32U)
#define SEC_ENG_SE_AES_MDA_MSK                                  (((1U<<SEC_ENG_SE_AES_MDA_LEN)-1)<<SEC_ENG_SE_AES_MDA_POS)
#define SEC_ENG_SE_AES_MDA_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_MDA_LEN)-1)<<SEC_ENG_SE_AES_MDA_POS))

/* 0xc : se_aes_status */
#define SEC_ENG_SE_AES_STATUS_OFFSET                            (0xc)
#define SEC_ENG_SE_AES_STATUS                                   SEC_ENG_SE_AES_STATUS
#define SEC_ENG_SE_AES_STATUS_POS                               (0U)
#define SEC_ENG_SE_AES_STATUS_LEN                               (32U)
#define SEC_ENG_SE_AES_STATUS_MSK                               (((1U<<SEC_ENG_SE_AES_STATUS_LEN)-1)<<SEC_ENG_SE_AES_STATUS_POS)
#define SEC_ENG_SE_AES_STATUS_UMSK                              (~(((1U<<SEC_ENG_SE_AES_STATUS_LEN)-1)<<SEC_ENG_SE_AES_STATUS_POS))

/* 0x10 : se_aes_iv_0 */
#define SEC_ENG_SE_AES_IV_0_OFFSET                              (0x10)
#define SEC_ENG_SE_AES_IV_0                                     SEC_ENG_SE_AES_IV_0
#define SEC_ENG_SE_AES_IV_0_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_0_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_0_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_0_LEN)-1)<<SEC_ENG_SE_AES_IV_0_POS)
#define SEC_ENG_SE_AES_IV_0_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_0_LEN)-1)<<SEC_ENG_SE_AES_IV_0_POS))

/* 0x14 : se_aes_iv_1 */
#define SEC_ENG_SE_AES_IV_1_OFFSET                              (0x14)
#define SEC_ENG_SE_AES_IV_1                                     SEC_ENG_SE_AES_IV_1
#define SEC_ENG_SE_AES_IV_1_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_1_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_1_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_1_LEN)-1)<<SEC_ENG_SE_AES_IV_1_POS)
#define SEC_ENG_SE_AES_IV_1_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_1_LEN)-1)<<SEC_ENG_SE_AES_IV_1_POS))

/* 0x18 : se_aes_iv_2 */
#define SEC_ENG_SE_AES_IV_2_OFFSET                              (0x18)
#define SEC_ENG_SE_AES_IV_2                                     SEC_ENG_SE_AES_IV_2
#define SEC_ENG_SE_AES_IV_2_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_2_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_2_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_2_LEN)-1)<<SEC_ENG_SE_AES_IV_2_POS)
#define SEC_ENG_SE_AES_IV_2_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_2_LEN)-1)<<SEC_ENG_SE_AES_IV_2_POS))

/* 0x1c : se_aes_iv_3 */
#define SEC_ENG_SE_AES_IV_3_OFFSET                              (0x1c)
#define SEC_ENG_SE_AES_IV_3                                     SEC_ENG_SE_AES_IV_3
#define SEC_ENG_SE_AES_IV_3_POS                                 (0U)
#define SEC_ENG_SE_AES_IV_3_LEN                                 (32U)
#define SEC_ENG_SE_AES_IV_3_MSK                                 (((1U<<SEC_ENG_SE_AES_IV_3_LEN)-1)<<SEC_ENG_SE_AES_IV_3_POS)
#define SEC_ENG_SE_AES_IV_3_UMSK                                (~(((1U<<SEC_ENG_SE_AES_IV_3_LEN)-1)<<SEC_ENG_SE_AES_IV_3_POS))

/* 0x20 : se_aes_key_0 */
#define SEC_ENG_SE_AES_KEY_0_OFFSET                             (0x20)
#define SEC_ENG_SE_AES_KEY_0                                    SEC_ENG_SE_AES_KEY_0
#define SEC_ENG_SE_AES_KEY_0_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_0_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_0_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_0_POS)
#define SEC_ENG_SE_AES_KEY_0_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_0_POS))

/* 0x24 : se_aes_key_1 */
#define SEC_ENG_SE_AES_KEY_1_OFFSET                             (0x24)
#define SEC_ENG_SE_AES_KEY_1                                    SEC_ENG_SE_AES_KEY_1
#define SEC_ENG_SE_AES_KEY_1_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_1_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_1_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_1_POS)
#define SEC_ENG_SE_AES_KEY_1_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_1_POS))

/* 0x28 : se_aes_key_2 */
#define SEC_ENG_SE_AES_KEY_2_OFFSET                             (0x28)
#define SEC_ENG_SE_AES_KEY_2                                    SEC_ENG_SE_AES_KEY_2
#define SEC_ENG_SE_AES_KEY_2_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_2_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_2_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_KEY_2_POS)
#define SEC_ENG_SE_AES_KEY_2_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_2_LEN)-1)<<SEC_ENG_SE_AES_KEY_2_POS))

/* 0x2c : se_aes_key_3 */
#define SEC_ENG_SE_AES_KEY_3_OFFSET                             (0x2c)
#define SEC_ENG_SE_AES_KEY_3                                    SEC_ENG_SE_AES_KEY_3
#define SEC_ENG_SE_AES_KEY_3_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_3_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_3_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_KEY_3_POS)
#define SEC_ENG_SE_AES_KEY_3_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_3_LEN)-1)<<SEC_ENG_SE_AES_KEY_3_POS))

/* 0x30 : se_aes_key_4 */
#define SEC_ENG_SE_AES_KEY_4_OFFSET                             (0x30)
#define SEC_ENG_SE_AES_KEY_4                                    SEC_ENG_SE_AES_KEY_4
#define SEC_ENG_SE_AES_KEY_4_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_4_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_4_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_KEY_4_POS)
#define SEC_ENG_SE_AES_KEY_4_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_4_LEN)-1)<<SEC_ENG_SE_AES_KEY_4_POS))

/* 0x34 : se_aes_key_5 */
#define SEC_ENG_SE_AES_KEY_5_OFFSET                             (0x34)
#define SEC_ENG_SE_AES_KEY_5                                    SEC_ENG_SE_AES_KEY_5
#define SEC_ENG_SE_AES_KEY_5_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_5_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_5_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_KEY_5_POS)
#define SEC_ENG_SE_AES_KEY_5_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_5_LEN)-1)<<SEC_ENG_SE_AES_KEY_5_POS))

/* 0x38 : se_aes_key_6 */
#define SEC_ENG_SE_AES_KEY_6_OFFSET                             (0x38)
#define SEC_ENG_SE_AES_KEY_6                                    SEC_ENG_SE_AES_KEY_6
#define SEC_ENG_SE_AES_KEY_6_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_6_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_6_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_KEY_6_POS)
#define SEC_ENG_SE_AES_KEY_6_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_6_LEN)-1)<<SEC_ENG_SE_AES_KEY_6_POS))

/* 0x3c : se_aes_key_7 */
#define SEC_ENG_SE_AES_KEY_7_OFFSET                             (0x3c)
#define SEC_ENG_SE_AES_KEY_7                                    SEC_ENG_SE_AES_KEY_7
#define SEC_ENG_SE_AES_KEY_7_POS                                (0U)
#define SEC_ENG_SE_AES_KEY_7_LEN                                (32U)
#define SEC_ENG_SE_AES_KEY_7_MSK                                (((1U<<SEC_ENG_SE_AES_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_KEY_7_POS)
#define SEC_ENG_SE_AES_KEY_7_UMSK                               (~(((1U<<SEC_ENG_SE_AES_KEY_7_LEN)-1)<<SEC_ENG_SE_AES_KEY_7_POS))

/* 0x40 : se_aes_key_sel_0 */
#define SEC_ENG_SE_AES_KEY_SEL_0_OFFSET                         (0x40)
#define SEC_ENG_SE_AES_KEY_SEL_0                                SEC_ENG_SE_AES_KEY_SEL_0
#define SEC_ENG_SE_AES_KEY_SEL_0_POS                            (0U)
#define SEC_ENG_SE_AES_KEY_SEL_0_LEN                            (2U)
#define SEC_ENG_SE_AES_KEY_SEL_0_MSK                            (((1U<<SEC_ENG_SE_AES_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_0_POS)
#define SEC_ENG_SE_AES_KEY_SEL_0_UMSK                           (~(((1U<<SEC_ENG_SE_AES_KEY_SEL_0_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_0_POS))

/* 0x44 : se_aes_key_sel_1 */
#define SEC_ENG_SE_AES_KEY_SEL_1_OFFSET                         (0x44)
#define SEC_ENG_SE_AES_KEY_SEL_1                                SEC_ENG_SE_AES_KEY_SEL_1
#define SEC_ENG_SE_AES_KEY_SEL_1_POS                            (0U)
#define SEC_ENG_SE_AES_KEY_SEL_1_LEN                            (2U)
#define SEC_ENG_SE_AES_KEY_SEL_1_MSK                            (((1U<<SEC_ENG_SE_AES_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_1_POS)
#define SEC_ENG_SE_AES_KEY_SEL_1_UMSK                           (~(((1U<<SEC_ENG_SE_AES_KEY_SEL_1_LEN)-1)<<SEC_ENG_SE_AES_KEY_SEL_1_POS))

/* 0x48 : se_aes_endian */
#define SEC_ENG_SE_AES_ENDIAN_OFFSET                            (0x48)
#define SEC_ENG_SE_AES_DOUT_ENDIAN                              SEC_ENG_SE_AES_DOUT_ENDIAN
#define SEC_ENG_SE_AES_DOUT_ENDIAN_POS                          (0U)
#define SEC_ENG_SE_AES_DOUT_ENDIAN_LEN                          (1U)
#define SEC_ENG_SE_AES_DOUT_ENDIAN_MSK                          (((1U<<SEC_ENG_SE_AES_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DOUT_ENDIAN_POS)
#define SEC_ENG_SE_AES_DOUT_ENDIAN_UMSK                         (~(((1U<<SEC_ENG_SE_AES_DOUT_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DOUT_ENDIAN_POS))
#define SEC_ENG_SE_AES_DIN_ENDIAN                               SEC_ENG_SE_AES_DIN_ENDIAN
#define SEC_ENG_SE_AES_DIN_ENDIAN_POS                           (1U)
#define SEC_ENG_SE_AES_DIN_ENDIAN_LEN                           (1U)
#define SEC_ENG_SE_AES_DIN_ENDIAN_MSK                           (((1U<<SEC_ENG_SE_AES_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DIN_ENDIAN_POS)
#define SEC_ENG_SE_AES_DIN_ENDIAN_UMSK                          (~(((1U<<SEC_ENG_SE_AES_DIN_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_DIN_ENDIAN_POS))
#define SEC_ENG_SE_AES_KEY_ENDIAN                               SEC_ENG_SE_AES_KEY_ENDIAN
#define SEC_ENG_SE_AES_KEY_ENDIAN_POS                           (2U)
#define SEC_ENG_SE_AES_KEY_ENDIAN_LEN                           (1U)
#define SEC_ENG_SE_AES_KEY_ENDIAN_MSK                           (((1U<<SEC_ENG_SE_AES_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_KEY_ENDIAN_POS)
#define SEC_ENG_SE_AES_KEY_ENDIAN_UMSK                          (~(((1U<<SEC_ENG_SE_AES_KEY_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_KEY_ENDIAN_POS))
#define SEC_ENG_SE_AES_IV_ENDIAN                                SEC_ENG_SE_AES_IV_ENDIAN
#define SEC_ENG_SE_AES_IV_ENDIAN_POS                            (3U)
#define SEC_ENG_SE_AES_IV_ENDIAN_LEN                            (1U)
#define SEC_ENG_SE_AES_IV_ENDIAN_MSK                            (((1U<<SEC_ENG_SE_AES_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_IV_ENDIAN_POS)
#define SEC_ENG_SE_AES_IV_ENDIAN_UMSK                           (~(((1U<<SEC_ENG_SE_AES_IV_ENDIAN_LEN)-1)<<SEC_ENG_SE_AES_IV_ENDIAN_POS))
#define SEC_ENG_SE_AES_CTR_LEN                                  SEC_ENG_SE_AES_CTR_LEN
#define SEC_ENG_SE_AES_CTR_LEN_POS                              (30U)
#define SEC_ENG_SE_AES_CTR_LEN_LEN                              (2U)
#define SEC_ENG_SE_AES_CTR_LEN_MSK                              (((1U<<SEC_ENG_SE_AES_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_CTR_LEN_POS)
#define SEC_ENG_SE_AES_CTR_LEN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_CTR_LEN_LEN)-1)<<SEC_ENG_SE_AES_CTR_LEN_POS))

/* 0x4c : se_aes_sboot */
#define SEC_ENG_SE_AES_SBOOT_OFFSET                             (0x4c)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL                            SEC_ENG_SE_AES_SBOOT_KEY_SEL
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_POS                        (0U)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_LEN                        (1U)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_MSK                        (((1U<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_POS)
#define SEC_ENG_SE_AES_SBOOT_KEY_SEL_UMSK                       (~(((1U<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_LEN)-1)<<SEC_ENG_SE_AES_SBOOT_KEY_SEL_POS))

/* 0x50 : se_aes_link */
#define SEC_ENG_SE_AES_LINK_OFFSET                              (0x50)
#define SEC_ENG_SE_AES_LCA                                      SEC_ENG_SE_AES_LCA
#define SEC_ENG_SE_AES_LCA_POS                                  (0U)
#define SEC_ENG_SE_AES_LCA_LEN                                  (32U)
#define SEC_ENG_SE_AES_LCA_MSK                                  (((1U<<SEC_ENG_SE_AES_LCA_LEN)-1)<<SEC_ENG_SE_AES_LCA_POS)
#define SEC_ENG_SE_AES_LCA_UMSK                                 (~(((1U<<SEC_ENG_SE_AES_LCA_LEN)-1)<<SEC_ENG_SE_AES_LCA_POS))

/* 0xfc : se_aes_ctrl_prot */
#define SEC_ENG_SE_AES_CTRL_PROT_OFFSET                         (0xfc)
#define SEC_ENG_SE_AES_PROT_EN                                  SEC_ENG_SE_AES_PROT_EN
#define SEC_ENG_SE_AES_PROT_EN_POS                              (0U)
#define SEC_ENG_SE_AES_PROT_EN_LEN                              (1U)
#define SEC_ENG_SE_AES_PROT_EN_MSK                              (((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS)
#define SEC_ENG_SE_AES_PROT_EN_UMSK                             (~(((1U<<SEC_ENG_SE_AES_PROT_EN_LEN)-1)<<SEC_ENG_SE_AES_PROT_EN_POS))
#define SEC_ENG_SE_AES_ID0_EN                                   SEC_ENG_SE_AES_ID0_EN
#define SEC_ENG_SE_AES_ID0_EN_POS                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID0_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS)
#define SEC_ENG_SE_AES_ID0_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID0_EN_LEN)-1)<<SEC_ENG_SE_AES_ID0_EN_POS))
#define SEC_ENG_SE_AES_ID1_EN                                   SEC_ENG_SE_AES_ID1_EN
#define SEC_ENG_SE_AES_ID1_EN_POS                               (2U)
#define SEC_ENG_SE_AES_ID1_EN_LEN                               (1U)
#define SEC_ENG_SE_AES_ID1_EN_MSK                               (((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS)
#define SEC_ENG_SE_AES_ID1_EN_UMSK                              (~(((1U<<SEC_ENG_SE_AES_ID1_EN_LEN)-1)<<SEC_ENG_SE_AES_ID1_EN_POS))


#define SEC_ENG_AES_OFFSET     0x100


/*Following is reg patch*/

/* 0x0 : se_trng_ctrl_0 */
#define SEC_ENG_SE_TRNG_CTRL_0_OFFSET                           (0x0)
#define SEC_ENG_SE_TRNG_BUSY                                    SEC_ENG_SE_TRNG_BUSY
#define SEC_ENG_SE_TRNG_BUSY_POS                                (0U)
#define SEC_ENG_SE_TRNG_BUSY_LEN                                (1U)
#define SEC_ENG_SE_TRNG_BUSY_MSK                                (((1U<<SEC_ENG_SE_TRNG_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_BUSY_POS)
#define SEC_ENG_SE_TRNG_BUSY_UMSK                               (~(((1U<<SEC_ENG_SE_TRNG_BUSY_LEN)-1)<<SEC_ENG_SE_TRNG_BUSY_POS))
#define SEC_ENG_SE_TRNG_TRIG_1T                                 SEC_ENG_SE_TRNG_TRIG_1T
#define SEC_ENG_SE_TRNG_TRIG_1T_POS                             (1U)
#define SEC_ENG_SE_TRNG_TRIG_1T_LEN                             (1U)
#define SEC_ENG_SE_TRNG_TRIG_1T_MSK                             (((1U<<SEC_ENG_SE_TRNG_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_TRIG_1T_POS)
#define SEC_ENG_SE_TRNG_TRIG_1T_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_TRIG_1T_LEN)-1)<<SEC_ENG_SE_TRNG_TRIG_1T_POS))
#define SEC_ENG_SE_TRNG_EN                                      SEC_ENG_SE_TRNG_EN
#define SEC_ENG_SE_TRNG_EN_POS                                  (2U)
#define SEC_ENG_SE_TRNG_EN_LEN                                  (1U)
#define SEC_ENG_SE_TRNG_EN_MSK                                  (((1U<<SEC_ENG_SE_TRNG_EN_LEN)-1)<<SEC_ENG_SE_TRNG_EN_POS)
#define SEC_ENG_SE_TRNG_EN_UMSK                                 (~(((1U<<SEC_ENG_SE_TRNG_EN_LEN)-1)<<SEC_ENG_SE_TRNG_EN_POS))
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T                             SEC_ENG_SE_TRNG_DOUT_CLR_1T
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_POS                         (3U)
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_LEN                         (1U)
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_MSK                         (((1U<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_DOUT_CLR_1T_UMSK                        (~(((1U<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_HT_ERROR                                SEC_ENG_SE_TRNG_HT_ERROR
#define SEC_ENG_SE_TRNG_HT_ERROR_POS                            (4U)
#define SEC_ENG_SE_TRNG_HT_ERROR_LEN                            (1U)
#define SEC_ENG_SE_TRNG_HT_ERROR_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ERROR_POS)
#define SEC_ENG_SE_TRNG_HT_ERROR_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_ERROR_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ERROR_POS))
#define SEC_ENG_SE_TRNG_INT                                     SEC_ENG_SE_TRNG_INT
#define SEC_ENG_SE_TRNG_INT_POS                                 (8U)
#define SEC_ENG_SE_TRNG_INT_LEN                                 (1U)
#define SEC_ENG_SE_TRNG_INT_MSK                                 (((1U<<SEC_ENG_SE_TRNG_INT_LEN)-1)<<SEC_ENG_SE_TRNG_INT_POS)
#define SEC_ENG_SE_TRNG_INT_UMSK                                (~(((1U<<SEC_ENG_SE_TRNG_INT_LEN)-1)<<SEC_ENG_SE_TRNG_INT_POS))
#define SEC_ENG_SE_TRNG_INT_CLR_1T                              SEC_ENG_SE_TRNG_INT_CLR_1T
#define SEC_ENG_SE_TRNG_INT_CLR_1T_POS                          (9U)
#define SEC_ENG_SE_TRNG_INT_CLR_1T_LEN                          (1U)
#define SEC_ENG_SE_TRNG_INT_CLR_1T_MSK                          (((1U<<SEC_ENG_SE_TRNG_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_CLR_1T_POS)
#define SEC_ENG_SE_TRNG_INT_CLR_1T_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_INT_CLR_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_CLR_1T_POS))
#define SEC_ENG_SE_TRNG_INT_SET_1T                              SEC_ENG_SE_TRNG_INT_SET_1T
#define SEC_ENG_SE_TRNG_INT_SET_1T_POS                          (10U)
#define SEC_ENG_SE_TRNG_INT_SET_1T_LEN                          (1U)
#define SEC_ENG_SE_TRNG_INT_SET_1T_MSK                          (((1U<<SEC_ENG_SE_TRNG_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_SET_1T_POS)
#define SEC_ENG_SE_TRNG_INT_SET_1T_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_INT_SET_1T_LEN)-1)<<SEC_ENG_SE_TRNG_INT_SET_1T_POS))
#define SEC_ENG_SE_TRNG_INT_MASK                                SEC_ENG_SE_TRNG_INT_MASK
#define SEC_ENG_SE_TRNG_INT_MASK_POS                            (11U)
#define SEC_ENG_SE_TRNG_INT_MASK_LEN                            (1U)
#define SEC_ENG_SE_TRNG_INT_MASK_MSK                            (((1U<<SEC_ENG_SE_TRNG_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_INT_MASK_POS)
#define SEC_ENG_SE_TRNG_INT_MASK_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_INT_MASK_LEN)-1)<<SEC_ENG_SE_TRNG_INT_MASK_POS))
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL                          SEC_ENG_SE_TRNG_MANUAL_FUN_SEL
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_POS                      (13U)
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_LEN                      (1U)
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_MSK                      (((1U<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_POS)
#define SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_UMSK                     (~(((1U<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_FUN_SEL_POS))
#define SEC_ENG_SE_TRNG_MANUAL_RESEED                           SEC_ENG_SE_TRNG_MANUAL_RESEED
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_POS                       (14U)
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_LEN                       (1U)
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_MSK                       (((1U<<SEC_ENG_SE_TRNG_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_RESEED_POS)
#define SEC_ENG_SE_TRNG_MANUAL_RESEED_UMSK                      (~(((1U<<SEC_ENG_SE_TRNG_MANUAL_RESEED_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_RESEED_POS))
#define SEC_ENG_SE_TRNG_MANUAL_EN                               SEC_ENG_SE_TRNG_MANUAL_EN
#define SEC_ENG_SE_TRNG_MANUAL_EN_POS                           (15U)
#define SEC_ENG_SE_TRNG_MANUAL_EN_LEN                           (1U)
#define SEC_ENG_SE_TRNG_MANUAL_EN_MSK                           (((1U<<SEC_ENG_SE_TRNG_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_EN_POS)
#define SEC_ENG_SE_TRNG_MANUAL_EN_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_MANUAL_EN_LEN)-1)<<SEC_ENG_SE_TRNG_MANUAL_EN_POS))

/* 0x4 : se_trng_status */
#define SEC_ENG_SE_TRNG_STATUS_OFFSET                           (0x4)
#define SEC_ENG_SE_TRNG_STATUS                                  SEC_ENG_SE_TRNG_STATUS
#define SEC_ENG_SE_TRNG_STATUS_POS                              (0U)
#define SEC_ENG_SE_TRNG_STATUS_LEN                              (32U)
#define SEC_ENG_SE_TRNG_STATUS_MSK                              (((1U<<SEC_ENG_SE_TRNG_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_STATUS_POS)
#define SEC_ENG_SE_TRNG_STATUS_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_STATUS_LEN)-1)<<SEC_ENG_SE_TRNG_STATUS_POS))

/* 0x8 : se_trng_dout_0 */
#define SEC_ENG_SE_TRNG_DOUT_0_OFFSET                           (0x8)
#define SEC_ENG_SE_TRNG_DOUT_0                                  SEC_ENG_SE_TRNG_DOUT_0
#define SEC_ENG_SE_TRNG_DOUT_0_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_0_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_0_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_0_POS)
#define SEC_ENG_SE_TRNG_DOUT_0_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_0_POS))

/* 0xc : se_trng_dout_1 */
#define SEC_ENG_SE_TRNG_DOUT_1_OFFSET                           (0xc)
#define SEC_ENG_SE_TRNG_DOUT_1                                  SEC_ENG_SE_TRNG_DOUT_1
#define SEC_ENG_SE_TRNG_DOUT_1_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_1_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_1_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_1_POS)
#define SEC_ENG_SE_TRNG_DOUT_1_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_1_POS))

/* 0x10 : se_trng_dout_2 */
#define SEC_ENG_SE_TRNG_DOUT_2_OFFSET                           (0x10)
#define SEC_ENG_SE_TRNG_DOUT_2                                  SEC_ENG_SE_TRNG_DOUT_2
#define SEC_ENG_SE_TRNG_DOUT_2_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_2_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_2_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_2_POS)
#define SEC_ENG_SE_TRNG_DOUT_2_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_2_POS))

/* 0x14 : se_trng_dout_3 */
#define SEC_ENG_SE_TRNG_DOUT_3_OFFSET                           (0x14)
#define SEC_ENG_SE_TRNG_DOUT_3                                  SEC_ENG_SE_TRNG_DOUT_3
#define SEC_ENG_SE_TRNG_DOUT_3_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_3_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_3_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_3_POS)
#define SEC_ENG_SE_TRNG_DOUT_3_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_3_POS))

/* 0x18 : se_trng_dout_4 */
#define SEC_ENG_SE_TRNG_DOUT_4_OFFSET                           (0x18)
#define SEC_ENG_SE_TRNG_DOUT_4                                  SEC_ENG_SE_TRNG_DOUT_4
#define SEC_ENG_SE_TRNG_DOUT_4_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_4_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_4_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_4_POS)
#define SEC_ENG_SE_TRNG_DOUT_4_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_4_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_4_POS))

/* 0x1c : se_trng_dout_5 */
#define SEC_ENG_SE_TRNG_DOUT_5_OFFSET                           (0x1c)
#define SEC_ENG_SE_TRNG_DOUT_5                                  SEC_ENG_SE_TRNG_DOUT_5
#define SEC_ENG_SE_TRNG_DOUT_5_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_5_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_5_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_5_POS)
#define SEC_ENG_SE_TRNG_DOUT_5_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_5_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_5_POS))

/* 0x20 : se_trng_dout_6 */
#define SEC_ENG_SE_TRNG_DOUT_6_OFFSET                           (0x20)
#define SEC_ENG_SE_TRNG_DOUT_6                                  SEC_ENG_SE_TRNG_DOUT_6
#define SEC_ENG_SE_TRNG_DOUT_6_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_6_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_6_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_6_POS)
#define SEC_ENG_SE_TRNG_DOUT_6_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_6_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_6_POS))

/* 0x24 : se_trng_dout_7 */
#define SEC_ENG_SE_TRNG_DOUT_7_OFFSET                           (0x24)
#define SEC_ENG_SE_TRNG_DOUT_7                                  SEC_ENG_SE_TRNG_DOUT_7
#define SEC_ENG_SE_TRNG_DOUT_7_POS                              (0U)
#define SEC_ENG_SE_TRNG_DOUT_7_LEN                              (32U)
#define SEC_ENG_SE_TRNG_DOUT_7_MSK                              (((1U<<SEC_ENG_SE_TRNG_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_7_POS)
#define SEC_ENG_SE_TRNG_DOUT_7_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_DOUT_7_LEN)-1)<<SEC_ENG_SE_TRNG_DOUT_7_POS))

/* 0x28 : se_trng_test */
#define SEC_ENG_SE_TRNG_TEST_OFFSET                             (0x28)
#define SEC_ENG_SE_TRNG_TEST_EN                                 SEC_ENG_SE_TRNG_TEST_EN
#define SEC_ENG_SE_TRNG_TEST_EN_POS                             (0U)
#define SEC_ENG_SE_TRNG_TEST_EN_LEN                             (1U)
#define SEC_ENG_SE_TRNG_TEST_EN_MSK                             (((1U<<SEC_ENG_SE_TRNG_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_TEST_EN_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_CP_TEST_EN                              SEC_ENG_SE_TRNG_CP_TEST_EN
#define SEC_ENG_SE_TRNG_CP_TEST_EN_POS                          (1U)
#define SEC_ENG_SE_TRNG_CP_TEST_EN_LEN                          (1U)
#define SEC_ENG_SE_TRNG_CP_TEST_EN_MSK                          (((1U<<SEC_ENG_SE_TRNG_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_CP_TEST_EN_POS)
#define SEC_ENG_SE_TRNG_CP_TEST_EN_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_CP_TEST_EN_LEN)-1)<<SEC_ENG_SE_TRNG_CP_TEST_EN_POS))
#define SEC_ENG_SE_TRNG_CP_BYPASS                               SEC_ENG_SE_TRNG_CP_BYPASS
#define SEC_ENG_SE_TRNG_CP_BYPASS_POS                           (2U)
#define SEC_ENG_SE_TRNG_CP_BYPASS_LEN                           (1U)
#define SEC_ENG_SE_TRNG_CP_BYPASS_MSK                           (((1U<<SEC_ENG_SE_TRNG_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_CP_BYPASS_POS)
#define SEC_ENG_SE_TRNG_CP_BYPASS_UMSK                          (~(((1U<<SEC_ENG_SE_TRNG_CP_BYPASS_LEN)-1)<<SEC_ENG_SE_TRNG_CP_BYPASS_POS))
#define SEC_ENG_SE_TRNG_HT_DIS                                  SEC_ENG_SE_TRNG_HT_DIS
#define SEC_ENG_SE_TRNG_HT_DIS_POS                              (3U)
#define SEC_ENG_SE_TRNG_HT_DIS_LEN                              (1U)
#define SEC_ENG_SE_TRNG_HT_DIS_MSK                              (((1U<<SEC_ENG_SE_TRNG_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_HT_DIS_POS)
#define SEC_ENG_SE_TRNG_HT_DIS_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_HT_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_HT_DIS_POS))
#define SEC_ENG_SE_TRNG_HT_ALARM_N                              SEC_ENG_SE_TRNG_HT_ALARM_N
#define SEC_ENG_SE_TRNG_HT_ALARM_N_POS                          (4U)
#define SEC_ENG_SE_TRNG_HT_ALARM_N_LEN                          (8U)
#define SEC_ENG_SE_TRNG_HT_ALARM_N_MSK                          (((1U<<SEC_ENG_SE_TRNG_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ALARM_N_POS)
#define SEC_ENG_SE_TRNG_HT_ALARM_N_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_HT_ALARM_N_LEN)-1)<<SEC_ENG_SE_TRNG_HT_ALARM_N_POS))

/* 0x2c : se_trng_ctrl_1 */
#define SEC_ENG_SE_TRNG_CTRL_1_OFFSET                           (0x2c)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB                            SEC_ENG_SE_TRNG_RESEED_N_LSB
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_POS                        (0U)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_LEN                        (32U)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_MSK                        (((1U<<SEC_ENG_SE_TRNG_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_LSB_POS)
#define SEC_ENG_SE_TRNG_RESEED_N_LSB_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_RESEED_N_LSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_LSB_POS))

/* 0x30 : se_trng_ctrl_2 */
#define SEC_ENG_SE_TRNG_CTRL_2_OFFSET                           (0x30)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB                            SEC_ENG_SE_TRNG_RESEED_N_MSB
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_POS                        (0U)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_LEN                        (16U)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_MSK                        (((1U<<SEC_ENG_SE_TRNG_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_MSB_POS)
#define SEC_ENG_SE_TRNG_RESEED_N_MSB_UMSK                       (~(((1U<<SEC_ENG_SE_TRNG_RESEED_N_MSB_LEN)-1)<<SEC_ENG_SE_TRNG_RESEED_N_MSB_POS))

/* 0x34 : se_trng_ctrl_3 */
#define SEC_ENG_SE_TRNG_CTRL_3_OFFSET                           (0x34)
#define SEC_ENG_SE_TRNG_CP_RATIO                                SEC_ENG_SE_TRNG_CP_RATIO
#define SEC_ENG_SE_TRNG_CP_RATIO_POS                            (0U)
#define SEC_ENG_SE_TRNG_CP_RATIO_LEN                            (8U)
#define SEC_ENG_SE_TRNG_CP_RATIO_MSK                            (((1U<<SEC_ENG_SE_TRNG_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_CP_RATIO_POS)
#define SEC_ENG_SE_TRNG_CP_RATIO_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_CP_RATIO_LEN)-1)<<SEC_ENG_SE_TRNG_CP_RATIO_POS))
#define SEC_ENG_SE_TRNG_HT_RCT_C                                SEC_ENG_SE_TRNG_HT_RCT_C
#define SEC_ENG_SE_TRNG_HT_RCT_C_POS                            (8U)
#define SEC_ENG_SE_TRNG_HT_RCT_C_LEN                            (8U)
#define SEC_ENG_SE_TRNG_HT_RCT_C_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_RCT_C_POS)
#define SEC_ENG_SE_TRNG_HT_RCT_C_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_RCT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_RCT_C_POS))
#define SEC_ENG_SE_TRNG_HT_APT_C                                SEC_ENG_SE_TRNG_HT_APT_C
#define SEC_ENG_SE_TRNG_HT_APT_C_POS                            (16U)
#define SEC_ENG_SE_TRNG_HT_APT_C_LEN                            (10U)
#define SEC_ENG_SE_TRNG_HT_APT_C_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_APT_C_POS)
#define SEC_ENG_SE_TRNG_HT_APT_C_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_APT_C_LEN)-1)<<SEC_ENG_SE_TRNG_HT_APT_C_POS))
#define SEC_ENG_SE_TRNG_HT_OD_EN                                SEC_ENG_SE_TRNG_HT_OD_EN
#define SEC_ENG_SE_TRNG_HT_OD_EN_POS                            (26U)
#define SEC_ENG_SE_TRNG_HT_OD_EN_LEN                            (1U)
#define SEC_ENG_SE_TRNG_HT_OD_EN_MSK                            (((1U<<SEC_ENG_SE_TRNG_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_HT_OD_EN_POS)
#define SEC_ENG_SE_TRNG_HT_OD_EN_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_HT_OD_EN_LEN)-1)<<SEC_ENG_SE_TRNG_HT_OD_EN_POS))
#define SEC_ENG_SE_TRNG_ROSC_DIS                                SEC_ENG_SE_TRNG_ROSC_DIS
#define SEC_ENG_SE_TRNG_ROSC_DIS_POS                            (31U)
#define SEC_ENG_SE_TRNG_ROSC_DIS_LEN                            (1U)
#define SEC_ENG_SE_TRNG_ROSC_DIS_MSK                            (((1U<<SEC_ENG_SE_TRNG_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_ROSC_DIS_POS)
#define SEC_ENG_SE_TRNG_ROSC_DIS_UMSK                           (~(((1U<<SEC_ENG_SE_TRNG_ROSC_DIS_LEN)-1)<<SEC_ENG_SE_TRNG_ROSC_DIS_POS))

/* 0x40 : se_trng_test_out_0 */
#define SEC_ENG_SE_TRNG_TEST_OUT_0_OFFSET                       (0x40)
#define SEC_ENG_SE_TRNG_TEST_OUT_0                              SEC_ENG_SE_TRNG_TEST_OUT_0
#define SEC_ENG_SE_TRNG_TEST_OUT_0_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_0_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_0_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_0_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_0_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_0_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_0_POS))

/* 0x44 : se_trng_test_out_1 */
#define SEC_ENG_SE_TRNG_TEST_OUT_1_OFFSET                       (0x44)
#define SEC_ENG_SE_TRNG_TEST_OUT_1                              SEC_ENG_SE_TRNG_TEST_OUT_1
#define SEC_ENG_SE_TRNG_TEST_OUT_1_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_1_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_1_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_1_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_1_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_1_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_1_POS))

/* 0x48 : se_trng_test_out_2 */
#define SEC_ENG_SE_TRNG_TEST_OUT_2_OFFSET                       (0x48)
#define SEC_ENG_SE_TRNG_TEST_OUT_2                              SEC_ENG_SE_TRNG_TEST_OUT_2
#define SEC_ENG_SE_TRNG_TEST_OUT_2_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_2_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_2_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_2_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_2_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_2_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_2_POS))

/* 0x4c : se_trng_test_out_3 */
#define SEC_ENG_SE_TRNG_TEST_OUT_3_OFFSET                       (0x4c)
#define SEC_ENG_SE_TRNG_TEST_OUT_3                              SEC_ENG_SE_TRNG_TEST_OUT_3
#define SEC_ENG_SE_TRNG_TEST_OUT_3_POS                          (0U)
#define SEC_ENG_SE_TRNG_TEST_OUT_3_LEN                          (32U)
#define SEC_ENG_SE_TRNG_TEST_OUT_3_MSK                          (((1U<<SEC_ENG_SE_TRNG_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_3_POS)
#define SEC_ENG_SE_TRNG_TEST_OUT_3_UMSK                         (~(((1U<<SEC_ENG_SE_TRNG_TEST_OUT_3_LEN)-1)<<SEC_ENG_SE_TRNG_TEST_OUT_3_POS))

/* 0xfc : se_trng_ctrl_prot */
#define SEC_ENG_SE_TRNG_CTRL_PROT_OFFSET                        (0xfc)
#define SEC_ENG_SE_TRNG_PROT_EN                                 SEC_ENG_SE_TRNG_PROT_EN
#define SEC_ENG_SE_TRNG_PROT_EN_POS                             (0U)
#define SEC_ENG_SE_TRNG_PROT_EN_LEN                             (1U)
#define SEC_ENG_SE_TRNG_PROT_EN_MSK                             (((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS)
#define SEC_ENG_SE_TRNG_PROT_EN_UMSK                            (~(((1U<<SEC_ENG_SE_TRNG_PROT_EN_LEN)-1)<<SEC_ENG_SE_TRNG_PROT_EN_POS))
#define SEC_ENG_SE_TRNG_ID0_EN                                  SEC_ENG_SE_TRNG_ID0_EN
#define SEC_ENG_SE_TRNG_ID0_EN_POS                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID0_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS)
#define SEC_ENG_SE_TRNG_ID0_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID0_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID0_EN_POS))
#define SEC_ENG_SE_TRNG_ID1_EN                                  SEC_ENG_SE_TRNG_ID1_EN
#define SEC_ENG_SE_TRNG_ID1_EN_POS                              (2U)
#define SEC_ENG_SE_TRNG_ID1_EN_LEN                              (1U)
#define SEC_ENG_SE_TRNG_ID1_EN_MSK                              (((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS)
#define SEC_ENG_SE_TRNG_ID1_EN_UMSK                             (~(((1U<<SEC_ENG_SE_TRNG_ID1_EN_LEN)-1)<<SEC_ENG_SE_TRNG_ID1_EN_POS))

#define SEC_ENG_TRNG_OFFSET    0x200

/* copied SEC_ENG_SHA_Type from stddrv, SHA1_RSVD removed */
// bl_sha_type_t
#define BL_SHA256 0
#define BL_SHA224 1
#define BL_SHA1 2

/****************************************************************************
 * Public Types
 ****************************************************************************/

#ifndef __ASSEMBLY__

/* copied SEC_Eng_SHA256_Ctx from stddrv */
typedef struct {
    uint32_t total[2];
    uint32_t *shaBuf;
    uint32_t *shaPadding;
    uint8_t  shaFeed;
} _bl_sha_SEC_Eng_SHA256_Ctx_t;

typedef struct bl_sha_ctx {
    _bl_sha_SEC_Eng_SHA256_Ctx_t sha_ctx;
    uint32_t tmp[16];
    uint32_t pad[16];
} bl_sha_ctx_t;

/**
 *  @brief AES port type definition
 */
typedef enum {
    SEC_ENG_AES_ID0,                         /*!< AES0 port define */
}SEC_ENG_AES_ID_Type;

/**
 *  @brief SHA port type definition
 */
typedef enum {
    SEC_ENG_SHA_ID0,                         /*!< SHA0 port define */
}SEC_ENG_SHA_ID_Type;

/**
 *  @brief SHA type definition
 */
typedef enum {
    SEC_ENG_SHA256,                          /*!< SHA type:SHA256 */
    SEC_ENG_SHA224,                          /*!< SHA type:SHA224 */
    SEC_ENG_SHA1,                            /*!< SHA type:SHA1 */
    SEC_ENG_SHA1_RSVD,                       /*!< SHA type:SHA1 */
}SEC_ENG_SHA_Type;

/**
 *  @brief AES type definition
 */
typedef enum {
    SEC_ENG_AES_ECB,                         /*!< AES mode type:ECB */
    SEC_ENG_AES_CTR,                         /*!< AES mode type:CTR */
    SEC_ENG_AES_CBC,                         /*!< AES mode type:CBC */
}SEC_ENG_AES_Type;

/**
 *  @brief AES KEY type definition
 */
typedef enum {
    SEC_ENG_AES_KEY_128BITS,                 /*!< AES KEY type:128 bits */
    SEC_ENG_AES_KEY_256BITS,                 /*!< AES KEY type:256 bits */
    SEC_ENG_AES_KEY_192BITS,                 /*!< AES KEY type:192 bits */
    SEC_ENG_AES_DOUBLE_KEY_128BITS,          /*!< AES double KEY type:128 bits */
}SEC_ENG_AES_Key_Type;

/**
 *  @brief AES CTR mode counter type definition
 */
typedef enum {
    SEC_ENG_AES_COUNTER_BYTE_4,              /*!< AES CTR mode counter type:4 bytes */
    SEC_ENG_AES_COUNTER_BYTE_1,              /*!< AES CTR mode counter type:1 byte */
    SEC_ENG_AES_COUNTER_BYTE_2,              /*!< AES CTR mode counter type:2 bytes */
    SEC_ENG_AES_COUNTER_BYTE_3,              /*!< AES CTR mode counter type:3 bytes */
}SEC_ENG_AES_Counter_Type;

/**
 *  @brief AES use new or old value type definition
 */
typedef enum {
    SEC_ENG_AES_USE_NEW,                     /*!< Use new value */
    SEC_ENG_AES_USE_OLD,                     /*!< Use old value same as last one */
}SEC_ENG_AES_ValueUsed_Type;

/**
 *  @brief AES KEY source type definition
 */
typedef enum {
    SEC_ENG_AES_KEY_SW,                      /*!< AES KEY from software */
    SEC_ENG_AES_KEY_HW,                      /*!< AES KEY from hardware */
}SEC_ENG_AES_Key_Src_Type;

/**
 *  @brief AES KEY source type definition
 */
typedef enum {
    SEC_ENG_AES_ENCRYPTION,                  /*!< AES encryption */
    SEC_ENG_AES_DECRYPTION,                  /*!< AES decryption */
}SEC_ENG_AES_EnDec_Type;

/**
 *  @brief AES PKA register size type definition
 */
typedef enum {
    SEC_ENG_PKA_REG_SIZE_8=1,               /*!< Register size is  8 Bytes */
    SEC_ENG_PKA_REG_SIZE_16,                /*!< Register size is  16 Bytes */
    SEC_ENG_PKA_REG_SIZE_32,                /*!< Register size is  32 Bytes */
    SEC_ENG_PKA_REG_SIZE_64,                /*!< Register size is  64 Bytes */
    SEC_ENG_PKA_REG_SIZE_96,                /*!< Register size is  96 Bytes */
    SEC_ENG_PKA_REG_SIZE_128,               /*!< Register size is  128 Bytes */
    SEC_ENG_PKA_REG_SIZE_192,               /*!< Register size is  192 Bytes */
    SEC_ENG_PKA_REG_SIZE_256,               /*!< Register size is  256 Bytes */
    SEC_ENG_PKA_REG_SIZE_384,               /*!< Register size is  384 Bytes */
    SEC_ENG_PKA_REG_SIZE_512,               /*!< Register size is  512 Bytes */
}SEC_ENG_PKA_REG_SIZE_Type;

/**
 *  @brief AES PKA register size type definition
 */
typedef enum {
    SEC_ENG_PKA_OP_PPSEL,                   /*!< PKA operation type */
    SEC_ENG_PKA_OP_MOD2N=0x11,              /*!< PKA operation type */
    SEC_ENG_PKA_OP_LDIV2N=0x12,             /*!< PKA operation type */
    SEC_ENG_PKA_OP_LMUL2N=0x13,             /*!< PKA operation type */
    SEC_ENG_PKA_OP_LDIV=0x14,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_LSQR=0x15,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_LMUL=0x16,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_LSUB=0x17,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_LADD=0x18,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_LCMP=0x19,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_MDIV2=0x21,              /*!< PKA operation type */
    SEC_ENG_PKA_OP_MINV=0x22,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_MEXP=0x23,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_MSQR=0x24,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_MMUL=0x25,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_MREM=0x26,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_MSUB=0x27,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_MADD=0x28,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_RESIZE =0x31,            /*!< PKA operation type */
    SEC_ENG_PKA_OP_MOVDAT=0x32,             /*!< PKA operation type */
    SEC_ENG_PKA_OP_NLIR=0x33,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_SLIR=0x34,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_CLIR=0x35,               /*!< PKA operation type */
    SEC_ENG_PKA_OP_CFLIRI_BUFFER=0x36,      /*!< PKA operation type */
    SEC_ENG_PKA_OP_CTLIRI_PLD=0x37,         /*!< PKA operation type */
    SEC_ENG_PKA_OP_CFLIR_BUFFER=0x38,       /*!< PKA operation type */
    SEC_ENG_PKA_OP_CTLIR_PLD=0x39,          /*!< PKA operation type */
}SEC_ENG_PKA_OP_Type;

/**
 *  @brief Sec Eng Interrupt Type Def
 */
typedef enum {
    SEC_ENG_INT_TRNG,                        /*!< Sec Eng Trng Interrupt Type */
    SEC_ENG_INT_AES,                         /*!< Sec Eng Aes Interrupt Type */
    SEC_ENG_INT_SHA,                         /*!< Sec Eng Sha Interrupt Type */
    SEC_ENG_INT_PKA,                         /*!< Sec Eng Pka Interrupt Type */
    SEC_ENG_INT_CDET,                        /*!< Sec Eng Cdet Interrupt Type */
    SEC_ENG_INT_GMAC,                        /*!< Sec Eng Gmac Interrupt Type */
    SEC_ENG_INT_ALL,                         /*!< Sec Eng All Interrupt Types */
}SEC_ENG_INT_Type;

/**
 *  @brief SEC_ENG SHA context
 */
typedef struct {
    uint32_t total[2];                       /*!< Number of bytes processed */
    uint32_t  *shaBuf;                       /*!< Data not processed but in this temp buffer */
    uint32_t  *shaPadding;                   /*!< Padding data */
    uint8_t  shaFeed;                        /*!< Sha has feed data */
}SEC_Eng_SHA256_Ctx;

/**
 *  @brief SEC_ENG SHA link mode context
 */
typedef struct {
    uint32_t total[2];                       /*!< Number of bytes processed */
    uint32_t  *shaBuf;                       /*!< Data not processed but in this temp buffer */
    uint32_t  *shaPadding;                   /*!< Padding data */
    uint32_t linkAddr;                       /*!< Link configure address */
}SEC_Eng_SHA256_Link_Ctx;

/**
 *  @brief SEC_ENG AES context
 */
typedef struct {
    uint8_t  aesFeed;                        /*!< AES has feed data */
    SEC_ENG_AES_Type mode;                   /*!< AES mode */
}SEC_Eng_AES_Ctx;

/**
 *  @brief SEC_ENG SHA link config structure type definition
 */
typedef struct {
    uint32_t :2;                            /*!< [1:0]reserved */
    uint32_t shaMode:3;                     /*!< [4:2]Sha-256/sha-224/sha-1/sha-1 */
    uint32_t :1;                            /*!< [5]reserved */
    uint32_t shaHashSel:1;                  /*!< [6]New hash or accumulate last hash */
    uint32_t :2;                            /*!< [8:7]reserved */
    uint32_t shaIntClr:1;                   /*!< [9]Clear interrupt */
    uint32_t shaIntSet:1;                   /*!< [10]Set interrupt */
    uint32_t :5;                            /*!< [15:11]reserved */
    uint32_t shaMsgLen:16;                  /*!< [31:16]Number of 512-bit block */
    uint32_t shaSrcAddr;                     /*!< Message source address */
    uint32_t result[8];                      /*!< Result of SHA */
}__attribute__ ((aligned(4)))SEC_Eng_SHA_Link_Config_Type;

/**
 *  @brief SEC_ENG AES link config structure type definition
 */
typedef struct {
    uint32_t :3;                            /*!< [2:0]Reserved */
    uint32_t aesMode:2;                     /*!< [4:3]128-bit/256-bit/192-bit/128-bit-double key mode select */
    uint32_t aesDecEn:1;                    /*!< [5]Encode or decode */
    uint32_t aesDecKeySel:1;                /*!< [6]Use new key or use same key as last one */
    uint32_t aesHwKeyEn:1;                  /*!< [7]Enable or disable using hardware hey */
    uint32_t :1;                            /*!< [8]Reserved */
    uint32_t aesIntClr:1;                   /*!< [9]Clear interrupt */
    uint32_t aesIntSet:1;                   /*!< [10]Set interrupt */
    uint32_t :1;                            /*!< [11]Reserved */
    uint32_t aesBlockMode:2;                /*!< [13:12]ECB/CTR/CBC mode select */
    uint32_t aesIVSel:1;                    /*!< [14]Use new iv or use same iv as last one */
    uint32_t :1;                            /*!< [15]Reserved */
    uint32_t aesMsgLen:16;                  /*!< [31:16]Number of 128-bit block */
    uint32_t aesSrcAddr;                     /*!< Message source address */
    uint32_t aesDstAddr;                     /*!< Message destination address */
    uint32_t aesIV0;                         /*!< Big endian initial vector(MSB) */
    uint32_t aesIV1;                         /*!< Big endian initial vector */
    uint32_t aesIV2;                         /*!< Big endian initial vector */
    uint32_t aesIV3;                         /*!< Big endian initial vector(LSB)(CTR mode:counter initial value) */
    uint32_t aesKey0;                        /*!< Big endian aes key(aes-128/256 key MSB) */
    uint32_t aesKey1;                        /*!< Big endian aes key */
    uint32_t aesKey2;                        /*!< Big endian aes key */
    uint32_t aesKey3;                        /*!< Big endian aes key(aes-128 key LSB) */
    uint32_t aesKey4;                        /*!< Big endian aes key */
    uint32_t aesKey5;                        /*!< Big endian aes key */
    uint32_t aesKey6;                        /*!< Big endian aes key */
    uint32_t aesKey7;                        /*!< Big endian aes key(aes-256 key LSB) */
}__attribute__ ((aligned(4)))SEC_Eng_AES_Link_Config_Type;

/**
 *  @brief SEC_ENG GMAC link config structure type definition
 */
typedef struct {
    uint32_t :9;                            /*!< [8:0]reserved */
    uint32_t gmacIntClr:1;                  /*!< [9]Clear interrupt */
    uint32_t gmacIntSet:1;                  /*!< [10]Set interrupt */
    uint32_t :5;                            /*!< [15:11]reserved */
    uint32_t gmacMsgLen:16;                 /*!< [31:16]Number of 128-bit block */
    uint32_t gmacSrcAddr;                    /*!< Message source address */
    uint32_t gmacKey0;                       /*!< GMAC key */
    uint32_t gmacKey1;                       /*!< GMAC key */
    uint32_t gmacKey2;                       /*!< GMAC key */
    uint32_t gmacKey3;                       /*!< GMAC key */
    uint32_t result[4];                      /*!< Result of GMAC */
}__attribute__ ((aligned(4)))SEC_Eng_GMAC_Link_Config_Type;

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

int bl602_sec_trng_init(void);
int bl_rand(void);
void bl_rand_stream(uint8_t *buf, int len);
uint32_t bl_sec_get_random_word(void);
#endif /* __ASSEMBLY__ */

#endif 
