/****************************************************************************
 * arch/risc-v/src/bl602/hardware/bl602_l1c.h
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

#ifndef _ARCH_RISCV_SRC_BL602_HARDWARE_BL602_L1C_H__
#define _ARCH_RISCV_SRC_BL602_HARDWARE_BL602_L1C_H__

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/bl602_common.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/
/* 0x0 : l1c_config */
#define L1C_CONFIG_OFFSET                                       (0x0)
#define L1C_CACHEABLE                                           L1C_CACHEABLE
#define L1C_CACHEABLE_POS                                       (0U)
#define L1C_CACHEABLE_LEN                                       (1U)
#define L1C_CACHEABLE_MSK                                       (((1U<<L1C_CACHEABLE_LEN)-1)<<L1C_CACHEABLE_POS)
#define L1C_CACHEABLE_UMSK                                      (~(((1U<<L1C_CACHEABLE_LEN)-1)<<L1C_CACHEABLE_POS))
#define L1C_CNT_EN                                              L1C_CNT_EN
#define L1C_CNT_EN_POS                                          (1U)
#define L1C_CNT_EN_LEN                                          (1U)
#define L1C_CNT_EN_MSK                                          (((1U<<L1C_CNT_EN_LEN)-1)<<L1C_CNT_EN_POS)
#define L1C_CNT_EN_UMSK                                         (~(((1U<<L1C_CNT_EN_LEN)-1)<<L1C_CNT_EN_POS))
#define L1C_INVALID_EN                                          L1C_INVALID_EN
#define L1C_INVALID_EN_POS                                      (2U)
#define L1C_INVALID_EN_LEN                                      (1U)
#define L1C_INVALID_EN_MSK                                      (((1U<<L1C_INVALID_EN_LEN)-1)<<L1C_INVALID_EN_POS)
#define L1C_INVALID_EN_UMSK                                     (~(((1U<<L1C_INVALID_EN_LEN)-1)<<L1C_INVALID_EN_POS))
#define L1C_INVALID_DONE                                        L1C_INVALID_DONE
#define L1C_INVALID_DONE_POS                                    (3U)
#define L1C_INVALID_DONE_LEN                                    (1U)
#define L1C_INVALID_DONE_MSK                                    (((1U<<L1C_INVALID_DONE_LEN)-1)<<L1C_INVALID_DONE_POS)
#define L1C_INVALID_DONE_UMSK                                   (~(((1U<<L1C_INVALID_DONE_LEN)-1)<<L1C_INVALID_DONE_POS))
#define L1C_WAY_DIS                                             L1C_WAY_DIS
#define L1C_WAY_DIS_POS                                         (8U)
#define L1C_WAY_DIS_LEN                                         (4U)
#define L1C_WAY_DIS_MSK                                         (((1U<<L1C_WAY_DIS_LEN)-1)<<L1C_WAY_DIS_POS)
#define L1C_WAY_DIS_UMSK                                        (~(((1U<<L1C_WAY_DIS_LEN)-1)<<L1C_WAY_DIS_POS))
#define L1C_IROM_2T_ACCESS                                      L1C_IROM_2T_ACCESS
#define L1C_IROM_2T_ACCESS_POS                                  (12U)
#define L1C_IROM_2T_ACCESS_LEN                                  (1U)
#define L1C_IROM_2T_ACCESS_MSK                                  (((1U<<L1C_IROM_2T_ACCESS_LEN)-1)<<L1C_IROM_2T_ACCESS_POS)
#define L1C_IROM_2T_ACCESS_UMSK                                 (~(((1U<<L1C_IROM_2T_ACCESS_LEN)-1)<<L1C_IROM_2T_ACCESS_POS))
#define L1C_BYPASS                                              L1C_BYPASS
#define L1C_BYPASS_POS                                          (14U)
#define L1C_BYPASS_LEN                                          (1U)
#define L1C_BYPASS_MSK                                          (((1U<<L1C_BYPASS_LEN)-1)<<L1C_BYPASS_POS)
#define L1C_BYPASS_UMSK                                         (~(((1U<<L1C_BYPASS_LEN)-1)<<L1C_BYPASS_POS))
#define L1C_BMX_ERR_EN                                          L1C_BMX_ERR_EN
#define L1C_BMX_ERR_EN_POS                                      (15U)
#define L1C_BMX_ERR_EN_LEN                                      (1U)
#define L1C_BMX_ERR_EN_MSK                                      (((1U<<L1C_BMX_ERR_EN_LEN)-1)<<L1C_BMX_ERR_EN_POS)
#define L1C_BMX_ERR_EN_UMSK                                     (~(((1U<<L1C_BMX_ERR_EN_LEN)-1)<<L1C_BMX_ERR_EN_POS))
#define L1C_BMX_ARB_MODE                                        L1C_BMX_ARB_MODE
#define L1C_BMX_ARB_MODE_POS                                    (16U)
#define L1C_BMX_ARB_MODE_LEN                                    (2U)
#define L1C_BMX_ARB_MODE_MSK                                    (((1U<<L1C_BMX_ARB_MODE_LEN)-1)<<L1C_BMX_ARB_MODE_POS)
#define L1C_BMX_ARB_MODE_UMSK                                   (~(((1U<<L1C_BMX_ARB_MODE_LEN)-1)<<L1C_BMX_ARB_MODE_POS))
#define L1C_BMX_TIMEOUT_EN                                      L1C_BMX_TIMEOUT_EN
#define L1C_BMX_TIMEOUT_EN_POS                                  (20U)
#define L1C_BMX_TIMEOUT_EN_LEN                                  (4U)
#define L1C_BMX_TIMEOUT_EN_MSK                                  (((1U<<L1C_BMX_TIMEOUT_EN_LEN)-1)<<L1C_BMX_TIMEOUT_EN_POS)
#define L1C_BMX_TIMEOUT_EN_UMSK                                 (~(((1U<<L1C_BMX_TIMEOUT_EN_LEN)-1)<<L1C_BMX_TIMEOUT_EN_POS))
#define L1C_BMX_BUSY_OPTION_DIS                                 L1C_BMX_BUSY_OPTION_DIS
#define L1C_BMX_BUSY_OPTION_DIS_POS                             (24U)
#define L1C_BMX_BUSY_OPTION_DIS_LEN                             (1U)
#define L1C_BMX_BUSY_OPTION_DIS_MSK                             (((1U<<L1C_BMX_BUSY_OPTION_DIS_LEN)-1)<<L1C_BMX_BUSY_OPTION_DIS_POS)
#define L1C_BMX_BUSY_OPTION_DIS_UMSK                            (~(((1U<<L1C_BMX_BUSY_OPTION_DIS_LEN)-1)<<L1C_BMX_BUSY_OPTION_DIS_POS))
#define L1C_EARLY_RESP_DIS                                      L1C_EARLY_RESP_DIS
#define L1C_EARLY_RESP_DIS_POS                                  (25U)
#define L1C_EARLY_RESP_DIS_LEN                                  (1U)
#define L1C_EARLY_RESP_DIS_MSK                                  (((1U<<L1C_EARLY_RESP_DIS_LEN)-1)<<L1C_EARLY_RESP_DIS_POS)
#define L1C_EARLY_RESP_DIS_UMSK                                 (~(((1U<<L1C_EARLY_RESP_DIS_LEN)-1)<<L1C_EARLY_RESP_DIS_POS))
#define L1C_WRAP_DIS                                            L1C_WRAP_DIS
#define L1C_WRAP_DIS_POS                                        (26U)
#define L1C_WRAP_DIS_LEN                                        (1U)
#define L1C_WRAP_DIS_MSK                                        (((1U<<L1C_WRAP_DIS_LEN)-1)<<L1C_WRAP_DIS_POS)
#define L1C_WRAP_DIS_UMSK                                       (~(((1U<<L1C_WRAP_DIS_LEN)-1)<<L1C_WRAP_DIS_POS))

/* 0x4 : hit_cnt_lsb */
#define L1C_HIT_CNT_LSB_OFFSET                                  (0x4)
#define L1C_HIT_CNT_LSB                                         L1C_HIT_CNT_LSB
#define L1C_HIT_CNT_LSB_POS                                     (0U)
#define L1C_HIT_CNT_LSB_LEN                                     (32U)
#define L1C_HIT_CNT_LSB_MSK                                     (((1U<<L1C_HIT_CNT_LSB_LEN)-1)<<L1C_HIT_CNT_LSB_POS)
#define L1C_HIT_CNT_LSB_UMSK                                    (~(((1U<<L1C_HIT_CNT_LSB_LEN)-1)<<L1C_HIT_CNT_LSB_POS))

/* 0x8 : hit_cnt_msb */
#define L1C_HIT_CNT_MSB_OFFSET                                  (0x8)
#define L1C_HIT_CNT_MSB                                         L1C_HIT_CNT_MSB
#define L1C_HIT_CNT_MSB_POS                                     (0U)
#define L1C_HIT_CNT_MSB_LEN                                     (32U)
#define L1C_HIT_CNT_MSB_MSK                                     (((1U<<L1C_HIT_CNT_MSB_LEN)-1)<<L1C_HIT_CNT_MSB_POS)
#define L1C_HIT_CNT_MSB_UMSK                                    (~(((1U<<L1C_HIT_CNT_MSB_LEN)-1)<<L1C_HIT_CNT_MSB_POS))

/* 0xC : miss_cnt */
#define L1C_MISS_CNT_OFFSET                                     (0xC)
#define L1C_MISS_CNT                                            L1C_MISS_CNT
#define L1C_MISS_CNT_POS                                        (0U)
#define L1C_MISS_CNT_LEN                                        (32U)
#define L1C_MISS_CNT_MSK                                        (((1U<<L1C_MISS_CNT_LEN)-1)<<L1C_MISS_CNT_POS)
#define L1C_MISS_CNT_UMSK                                       (~(((1U<<L1C_MISS_CNT_LEN)-1)<<L1C_MISS_CNT_POS))

/* 0x10 : l1c_range */
#define L1C_RANGE_OFFSET                                        (0x10)

/* 0x200 : l1c_bmx_err_addr_en */
#define L1C_BMX_ERR_ADDR_EN_OFFSET                              (0x200)
#define L1C_BMX_ERR_ADDR_DIS                                    L1C_BMX_ERR_ADDR_DIS
#define L1C_BMX_ERR_ADDR_DIS_POS                                (0U)
#define L1C_BMX_ERR_ADDR_DIS_LEN                                (1U)
#define L1C_BMX_ERR_ADDR_DIS_MSK                                (((1U<<L1C_BMX_ERR_ADDR_DIS_LEN)-1)<<L1C_BMX_ERR_ADDR_DIS_POS)
#define L1C_BMX_ERR_ADDR_DIS_UMSK                               (~(((1U<<L1C_BMX_ERR_ADDR_DIS_LEN)-1)<<L1C_BMX_ERR_ADDR_DIS_POS))
#define L1C_BMX_ERR_DEC                                         L1C_BMX_ERR_DEC
#define L1C_BMX_ERR_DEC_POS                                     (4U)
#define L1C_BMX_ERR_DEC_LEN                                     (1U)
#define L1C_BMX_ERR_DEC_MSK                                     (((1U<<L1C_BMX_ERR_DEC_LEN)-1)<<L1C_BMX_ERR_DEC_POS)
#define L1C_BMX_ERR_DEC_UMSK                                    (~(((1U<<L1C_BMX_ERR_DEC_LEN)-1)<<L1C_BMX_ERR_DEC_POS))
#define L1C_BMX_ERR_TZ                                          L1C_BMX_ERR_TZ
#define L1C_BMX_ERR_TZ_POS                                      (5U)
#define L1C_BMX_ERR_TZ_LEN                                      (1U)
#define L1C_BMX_ERR_TZ_MSK                                      (((1U<<L1C_BMX_ERR_TZ_LEN)-1)<<L1C_BMX_ERR_TZ_POS)
#define L1C_BMX_ERR_TZ_UMSK                                     (~(((1U<<L1C_BMX_ERR_TZ_LEN)-1)<<L1C_BMX_ERR_TZ_POS))
#define L1C_HSEL_OPTION                                         L1C_HSEL_OPTION
#define L1C_HSEL_OPTION_POS                                     (16U)
#define L1C_HSEL_OPTION_LEN                                     (4U)
#define L1C_HSEL_OPTION_MSK                                     (((1U<<L1C_HSEL_OPTION_LEN)-1)<<L1C_HSEL_OPTION_POS)
#define L1C_HSEL_OPTION_UMSK                                    (~(((1U<<L1C_HSEL_OPTION_LEN)-1)<<L1C_HSEL_OPTION_POS))

/* 0x204 : l1c_bmx_err_addr */
#define L1C_BMX_ERR_ADDR_OFFSET                                 (0x204)
#define L1C_BMX_ERR_ADDR                                        L1C_BMX_ERR_ADDR
#define L1C_BMX_ERR_ADDR_POS                                    (0U)
#define L1C_BMX_ERR_ADDR_LEN                                    (32U)
#define L1C_BMX_ERR_ADDR_MSK                                    (((1U<<L1C_BMX_ERR_ADDR_LEN)-1)<<L1C_BMX_ERR_ADDR_POS)
#define L1C_BMX_ERR_ADDR_UMSK                                   (~(((1U<<L1C_BMX_ERR_ADDR_LEN)-1)<<L1C_BMX_ERR_ADDR_POS))

/* 0x208 : irom1_misr_dataout_0 */
#define L1C_IROM1_MISR_DATAOUT_0_OFFSET                         (0x208)
#define L1C_IROM1_MISR_DATAOUT_0                                L1C_IROM1_MISR_DATAOUT_0
#define L1C_IROM1_MISR_DATAOUT_0_POS                            (0U)
#define L1C_IROM1_MISR_DATAOUT_0_LEN                            (32U)
#define L1C_IROM1_MISR_DATAOUT_0_MSK                            (((1U<<L1C_IROM1_MISR_DATAOUT_0_LEN)-1)<<L1C_IROM1_MISR_DATAOUT_0_POS)
#define L1C_IROM1_MISR_DATAOUT_0_UMSK                           (~(((1U<<L1C_IROM1_MISR_DATAOUT_0_LEN)-1)<<L1C_IROM1_MISR_DATAOUT_0_POS))

/* 0x20C : irom1_misr_dataout_1 */
#define L1C_IROM1_MISR_DATAOUT_1_OFFSET                         (0x20C)

/* 0x210 : cpu_clk_gate */
#define L1C_CPU_CLK_GATE_OFFSET                                 (0x210)
#define L1C_FORCE_E21_CLOCK_ON_0                                L1C_FORCE_E21_CLOCK_ON_0
#define L1C_FORCE_E21_CLOCK_ON_0_POS                            (0U)
#define L1C_FORCE_E21_CLOCK_ON_0_LEN                            (1U)
#define L1C_FORCE_E21_CLOCK_ON_0_MSK                            (((1U<<L1C_FORCE_E21_CLOCK_ON_0_LEN)-1)<<L1C_FORCE_E21_CLOCK_ON_0_POS)
#define L1C_FORCE_E21_CLOCK_ON_0_UMSK                           (~(((1U<<L1C_FORCE_E21_CLOCK_ON_0_LEN)-1)<<L1C_FORCE_E21_CLOCK_ON_0_POS))
#define L1C_FORCE_E21_CLOCK_ON_1                                L1C_FORCE_E21_CLOCK_ON_1
#define L1C_FORCE_E21_CLOCK_ON_1_POS                            (1U)
#define L1C_FORCE_E21_CLOCK_ON_1_LEN                            (1U)
#define L1C_FORCE_E21_CLOCK_ON_1_MSK                            (((1U<<L1C_FORCE_E21_CLOCK_ON_1_LEN)-1)<<L1C_FORCE_E21_CLOCK_ON_1_POS)
#define L1C_FORCE_E21_CLOCK_ON_1_UMSK                           (~(((1U<<L1C_FORCE_E21_CLOCK_ON_1_LEN)-1)<<L1C_FORCE_E21_CLOCK_ON_1_POS))
#define L1C_FORCE_E21_CLOCK_ON_2                                L1C_FORCE_E21_CLOCK_ON_2
#define L1C_FORCE_E21_CLOCK_ON_2_POS                            (2U)
#define L1C_FORCE_E21_CLOCK_ON_2_LEN                            (1U)
#define L1C_FORCE_E21_CLOCK_ON_2_MSK                            (((1U<<L1C_FORCE_E21_CLOCK_ON_2_LEN)-1)<<L1C_FORCE_E21_CLOCK_ON_2_POS)
#define L1C_FORCE_E21_CLOCK_ON_2_UMSK                           (~(((1U<<L1C_FORCE_E21_CLOCK_ON_2_LEN)-1)<<L1C_FORCE_E21_CLOCK_ON_2_POS))

#endif /* _ARCH_RISCV_SRC_BL602_HARDWARE_BL602_L1C_H__ */
