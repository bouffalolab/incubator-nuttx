
#ifndef  __EF_CTRL_REG_H__
#define  __EF_CTRL_REG_H__

#include "hardware/bl602_common.h"

/* 0x0 : ef_cfg_0 */
#define EF_DATA_0_EF_CFG_0_OFFSET                               (0x0)
#define EF_DATA_0_EF_SF_AES_MODE                                EF_DATA_0_EF_SF_AES_MODE
#define EF_DATA_0_EF_SF_AES_MODE_POS                            (0U)
#define EF_DATA_0_EF_SF_AES_MODE_LEN                            (2U)
#define EF_DATA_0_EF_SF_AES_MODE_MSK                            (((1U<<EF_DATA_0_EF_SF_AES_MODE_LEN)-1)<<EF_DATA_0_EF_SF_AES_MODE_POS)
#define EF_DATA_0_EF_SF_AES_MODE_UMSK                           (~(((1U<<EF_DATA_0_EF_SF_AES_MODE_LEN)-1)<<EF_DATA_0_EF_SF_AES_MODE_POS))
#define EF_DATA_0_EF_SBOOT_SIGN_MODE                            EF_DATA_0_EF_SBOOT_SIGN_MODE
#define EF_DATA_0_EF_SBOOT_SIGN_MODE_POS                        (2U)
#define EF_DATA_0_EF_SBOOT_SIGN_MODE_LEN                        (2U)
#define EF_DATA_0_EF_SBOOT_SIGN_MODE_MSK                        (((1U<<EF_DATA_0_EF_SBOOT_SIGN_MODE_LEN)-1)<<EF_DATA_0_EF_SBOOT_SIGN_MODE_POS)
#define EF_DATA_0_EF_SBOOT_SIGN_MODE_UMSK                       (~(((1U<<EF_DATA_0_EF_SBOOT_SIGN_MODE_LEN)-1)<<EF_DATA_0_EF_SBOOT_SIGN_MODE_POS))
#define EF_DATA_0_EF_SBOOT_EN                                   EF_DATA_0_EF_SBOOT_EN
#define EF_DATA_0_EF_SBOOT_EN_POS                               (4U)
#define EF_DATA_0_EF_SBOOT_EN_LEN                               (2U)
#define EF_DATA_0_EF_SBOOT_EN_MSK                               (((1U<<EF_DATA_0_EF_SBOOT_EN_LEN)-1)<<EF_DATA_0_EF_SBOOT_EN_POS)
#define EF_DATA_0_EF_SBOOT_EN_UMSK                              (~(((1U<<EF_DATA_0_EF_SBOOT_EN_LEN)-1)<<EF_DATA_0_EF_SBOOT_EN_POS))
#define EF_DATA_0_EF_CPU0_ENC_EN                                EF_DATA_0_EF_CPU0_ENC_EN
#define EF_DATA_0_EF_CPU0_ENC_EN_POS                            (7U)
#define EF_DATA_0_EF_CPU0_ENC_EN_LEN                            (1U)
#define EF_DATA_0_EF_CPU0_ENC_EN_MSK                            (((1U<<EF_DATA_0_EF_CPU0_ENC_EN_LEN)-1)<<EF_DATA_0_EF_CPU0_ENC_EN_POS)
#define EF_DATA_0_EF_CPU0_ENC_EN_UMSK                           (~(((1U<<EF_DATA_0_EF_CPU0_ENC_EN_LEN)-1)<<EF_DATA_0_EF_CPU0_ENC_EN_POS))
#define EF_DATA_0_EF_TRIM_EN                                    EF_DATA_0_EF_TRIM_EN
#define EF_DATA_0_EF_TRIM_EN_POS                                (12U)
#define EF_DATA_0_EF_TRIM_EN_LEN                                (1U)
#define EF_DATA_0_EF_TRIM_EN_MSK                                (((1U<<EF_DATA_0_EF_TRIM_EN_LEN)-1)<<EF_DATA_0_EF_TRIM_EN_POS)
#define EF_DATA_0_EF_TRIM_EN_UMSK                               (~(((1U<<EF_DATA_0_EF_TRIM_EN_LEN)-1)<<EF_DATA_0_EF_TRIM_EN_POS))
#define EF_DATA_0_EF_NO_HD_BOOT_EN                              EF_DATA_0_EF_NO_HD_BOOT_EN
#define EF_DATA_0_EF_NO_HD_BOOT_EN_POS                          (13U)
#define EF_DATA_0_EF_NO_HD_BOOT_EN_LEN                          (1U)
#define EF_DATA_0_EF_NO_HD_BOOT_EN_MSK                          (((1U<<EF_DATA_0_EF_NO_HD_BOOT_EN_LEN)-1)<<EF_DATA_0_EF_NO_HD_BOOT_EN_POS)
#define EF_DATA_0_EF_NO_HD_BOOT_EN_UMSK                         (~(((1U<<EF_DATA_0_EF_NO_HD_BOOT_EN_LEN)-1)<<EF_DATA_0_EF_NO_HD_BOOT_EN_POS))
#define EF_DATA_0_EF_SDU_DIS                                    EF_DATA_0_EF_SDU_DIS
#define EF_DATA_0_EF_SDU_DIS_POS                                (14U)
#define EF_DATA_0_EF_SDU_DIS_LEN                                (1U)
#define EF_DATA_0_EF_SDU_DIS_MSK                                (((1U<<EF_DATA_0_EF_SDU_DIS_LEN)-1)<<EF_DATA_0_EF_SDU_DIS_POS)
#define EF_DATA_0_EF_SDU_DIS_UMSK                               (~(((1U<<EF_DATA_0_EF_SDU_DIS_LEN)-1)<<EF_DATA_0_EF_SDU_DIS_POS))
#define EF_DATA_0_EF_BLE_DIS                                    EF_DATA_0_EF_BLE_DIS
#define EF_DATA_0_EF_BLE_DIS_POS                                (15U)
#define EF_DATA_0_EF_BLE_DIS_LEN                                (1U)
#define EF_DATA_0_EF_BLE_DIS_MSK                                (((1U<<EF_DATA_0_EF_BLE_DIS_LEN)-1)<<EF_DATA_0_EF_BLE_DIS_POS)
#define EF_DATA_0_EF_BLE_DIS_UMSK                               (~(((1U<<EF_DATA_0_EF_BLE_DIS_LEN)-1)<<EF_DATA_0_EF_BLE_DIS_POS))
#define EF_DATA_0_EF_WIFI_DIS                                   EF_DATA_0_EF_WIFI_DIS
#define EF_DATA_0_EF_WIFI_DIS_POS                               (16U)
#define EF_DATA_0_EF_WIFI_DIS_LEN                               (1U)
#define EF_DATA_0_EF_WIFI_DIS_MSK                               (((1U<<EF_DATA_0_EF_WIFI_DIS_LEN)-1)<<EF_DATA_0_EF_WIFI_DIS_POS)
#define EF_DATA_0_EF_WIFI_DIS_UMSK                              (~(((1U<<EF_DATA_0_EF_WIFI_DIS_LEN)-1)<<EF_DATA_0_EF_WIFI_DIS_POS))
#define EF_DATA_0_EF_0_KEY_ENC_EN                               EF_DATA_0_EF_0_KEY_ENC_EN
#define EF_DATA_0_EF_0_KEY_ENC_EN_POS                           (17U)
#define EF_DATA_0_EF_0_KEY_ENC_EN_LEN                           (1U)
#define EF_DATA_0_EF_0_KEY_ENC_EN_MSK                           (((1U<<EF_DATA_0_EF_0_KEY_ENC_EN_LEN)-1)<<EF_DATA_0_EF_0_KEY_ENC_EN_POS)
#define EF_DATA_0_EF_0_KEY_ENC_EN_UMSK                          (~(((1U<<EF_DATA_0_EF_0_KEY_ENC_EN_LEN)-1)<<EF_DATA_0_EF_0_KEY_ENC_EN_POS))
#define EF_DATA_0_EF_SF_DIS                                     EF_DATA_0_EF_SF_DIS
#define EF_DATA_0_EF_SF_DIS_POS                                 (19U)
#define EF_DATA_0_EF_SF_DIS_LEN                                 (1U)
#define EF_DATA_0_EF_SF_DIS_MSK                                 (((1U<<EF_DATA_0_EF_SF_DIS_LEN)-1)<<EF_DATA_0_EF_SF_DIS_POS)
#define EF_DATA_0_EF_SF_DIS_UMSK                                (~(((1U<<EF_DATA_0_EF_SF_DIS_LEN)-1)<<EF_DATA_0_EF_SF_DIS_POS))
#define EF_DATA_0_EF_CPU_RST_DBG_DIS                            EF_DATA_0_EF_CPU_RST_DBG_DIS
#define EF_DATA_0_EF_CPU_RST_DBG_DIS_POS                        (21U)
#define EF_DATA_0_EF_CPU_RST_DBG_DIS_LEN                        (1U)
#define EF_DATA_0_EF_CPU_RST_DBG_DIS_MSK                        (((1U<<EF_DATA_0_EF_CPU_RST_DBG_DIS_LEN)-1)<<EF_DATA_0_EF_CPU_RST_DBG_DIS_POS)
#define EF_DATA_0_EF_CPU_RST_DBG_DIS_UMSK                       (~(((1U<<EF_DATA_0_EF_CPU_RST_DBG_DIS_LEN)-1)<<EF_DATA_0_EF_CPU_RST_DBG_DIS_POS))
#define EF_DATA_0_EF_SE_DBG_DIS                                 EF_DATA_0_EF_SE_DBG_DIS
#define EF_DATA_0_EF_SE_DBG_DIS_POS                             (22U)
#define EF_DATA_0_EF_SE_DBG_DIS_LEN                             (1U)
#define EF_DATA_0_EF_SE_DBG_DIS_MSK                             (((1U<<EF_DATA_0_EF_SE_DBG_DIS_LEN)-1)<<EF_DATA_0_EF_SE_DBG_DIS_POS)
#define EF_DATA_0_EF_SE_DBG_DIS_UMSK                            (~(((1U<<EF_DATA_0_EF_SE_DBG_DIS_LEN)-1)<<EF_DATA_0_EF_SE_DBG_DIS_POS))
#define EF_DATA_0_EF_EFUSE_DBG_DIS                              EF_DATA_0_EF_EFUSE_DBG_DIS
#define EF_DATA_0_EF_EFUSE_DBG_DIS_POS                          (23U)
#define EF_DATA_0_EF_EFUSE_DBG_DIS_LEN                          (1U)
#define EF_DATA_0_EF_EFUSE_DBG_DIS_MSK                          (((1U<<EF_DATA_0_EF_EFUSE_DBG_DIS_LEN)-1)<<EF_DATA_0_EF_EFUSE_DBG_DIS_POS)
#define EF_DATA_0_EF_EFUSE_DBG_DIS_UMSK                         (~(((1U<<EF_DATA_0_EF_EFUSE_DBG_DIS_LEN)-1)<<EF_DATA_0_EF_EFUSE_DBG_DIS_POS))
#define EF_DATA_0_EF_DBG_JTAG_0_DIS                             EF_DATA_0_EF_DBG_JTAG_0_DIS
#define EF_DATA_0_EF_DBG_JTAG_0_DIS_POS                         (26U)
#define EF_DATA_0_EF_DBG_JTAG_0_DIS_LEN                         (2U)
#define EF_DATA_0_EF_DBG_JTAG_0_DIS_MSK                         (((1U<<EF_DATA_0_EF_DBG_JTAG_0_DIS_LEN)-1)<<EF_DATA_0_EF_DBG_JTAG_0_DIS_POS)
#define EF_DATA_0_EF_DBG_JTAG_0_DIS_UMSK                        (~(((1U<<EF_DATA_0_EF_DBG_JTAG_0_DIS_LEN)-1)<<EF_DATA_0_EF_DBG_JTAG_0_DIS_POS))
#define EF_DATA_0_EF_DBG_MODE                                   EF_DATA_0_EF_DBG_MODE
#define EF_DATA_0_EF_DBG_MODE_POS                               (28U)
#define EF_DATA_0_EF_DBG_MODE_LEN                               (4U)
#define EF_DATA_0_EF_DBG_MODE_MSK                               (((1U<<EF_DATA_0_EF_DBG_MODE_LEN)-1)<<EF_DATA_0_EF_DBG_MODE_POS)
#define EF_DATA_0_EF_DBG_MODE_UMSK                              (~(((1U<<EF_DATA_0_EF_DBG_MODE_LEN)-1)<<EF_DATA_0_EF_DBG_MODE_POS))

/* 0x4 : ef_dbg_pwd_low */
#define EF_DATA_0_EF_DBG_PWD_LOW_OFFSET                         (0x4)
#define EF_DATA_0_EF_DBG_PWD_LOW                                EF_DATA_0_EF_DBG_PWD_LOW
#define EF_DATA_0_EF_DBG_PWD_LOW_POS                            (0U)
#define EF_DATA_0_EF_DBG_PWD_LOW_LEN                            (32U)
#define EF_DATA_0_EF_DBG_PWD_LOW_MSK                            (((1U<<EF_DATA_0_EF_DBG_PWD_LOW_LEN)-1)<<EF_DATA_0_EF_DBG_PWD_LOW_POS)
#define EF_DATA_0_EF_DBG_PWD_LOW_UMSK                           (~(((1U<<EF_DATA_0_EF_DBG_PWD_LOW_LEN)-1)<<EF_DATA_0_EF_DBG_PWD_LOW_POS))

/* 0x8 : ef_dbg_pwd_high */
#define EF_DATA_0_EF_DBG_PWD_HIGH_OFFSET                        (0x8)
#define EF_DATA_0_EF_DBG_PWD_HIGH                               EF_DATA_0_EF_DBG_PWD_HIGH
#define EF_DATA_0_EF_DBG_PWD_HIGH_POS                           (0U)
#define EF_DATA_0_EF_DBG_PWD_HIGH_LEN                           (32U)
#define EF_DATA_0_EF_DBG_PWD_HIGH_MSK                           (((1U<<EF_DATA_0_EF_DBG_PWD_HIGH_LEN)-1)<<EF_DATA_0_EF_DBG_PWD_HIGH_POS)
#define EF_DATA_0_EF_DBG_PWD_HIGH_UMSK                          (~(((1U<<EF_DATA_0_EF_DBG_PWD_HIGH_LEN)-1)<<EF_DATA_0_EF_DBG_PWD_HIGH_POS))

/* 0xC : ef_ana_trim_0 */
#define EF_DATA_0_EF_ANA_TRIM_0_OFFSET                          (0xC)
#define EF_DATA_0_EF_ANA_TRIM_0                                 EF_DATA_0_EF_ANA_TRIM_0
#define EF_DATA_0_EF_ANA_TRIM_0_POS                             (0U)
#define EF_DATA_0_EF_ANA_TRIM_0_LEN                             (32U)
#define EF_DATA_0_EF_ANA_TRIM_0_MSK                             (((1U<<EF_DATA_0_EF_ANA_TRIM_0_LEN)-1)<<EF_DATA_0_EF_ANA_TRIM_0_POS)
#define EF_DATA_0_EF_ANA_TRIM_0_UMSK                            (~(((1U<<EF_DATA_0_EF_ANA_TRIM_0_LEN)-1)<<EF_DATA_0_EF_ANA_TRIM_0_POS))

/* 0x10 : ef_sw_usage_0 */
#define EF_DATA_0_EF_SW_USAGE_0_OFFSET                          (0x10)
#define EF_DATA_0_EF_SW_USAGE_0                                 EF_DATA_0_EF_SW_USAGE_0
#define EF_DATA_0_EF_SW_USAGE_0_POS                             (0U)
#define EF_DATA_0_EF_SW_USAGE_0_LEN                             (32U)
#define EF_DATA_0_EF_SW_USAGE_0_MSK                             (((1U<<EF_DATA_0_EF_SW_USAGE_0_LEN)-1)<<EF_DATA_0_EF_SW_USAGE_0_POS)
#define EF_DATA_0_EF_SW_USAGE_0_UMSK                            (~(((1U<<EF_DATA_0_EF_SW_USAGE_0_LEN)-1)<<EF_DATA_0_EF_SW_USAGE_0_POS))

/* 0x14 : ef_wifi_mac_low */
#define EF_DATA_0_EF_WIFI_MAC_LOW_OFFSET                        (0x14)
#define EF_DATA_0_EF_WIFI_MAC_LOW                               EF_DATA_0_EF_WIFI_MAC_LOW
#define EF_DATA_0_EF_WIFI_MAC_LOW_POS                           (0U)
#define EF_DATA_0_EF_WIFI_MAC_LOW_LEN                           (32U)
#define EF_DATA_0_EF_WIFI_MAC_LOW_MSK                           (((1U<<EF_DATA_0_EF_WIFI_MAC_LOW_LEN)-1)<<EF_DATA_0_EF_WIFI_MAC_LOW_POS)
#define EF_DATA_0_EF_WIFI_MAC_LOW_UMSK                          (~(((1U<<EF_DATA_0_EF_WIFI_MAC_LOW_LEN)-1)<<EF_DATA_0_EF_WIFI_MAC_LOW_POS))

/* 0x18 : ef_wifi_mac_high */
#define EF_DATA_0_EF_WIFI_MAC_HIGH_OFFSET                       (0x18)
#define EF_DATA_0_EF_WIFI_MAC_HIGH                              EF_DATA_0_EF_WIFI_MAC_HIGH
#define EF_DATA_0_EF_WIFI_MAC_HIGH_POS                          (0U)
#define EF_DATA_0_EF_WIFI_MAC_HIGH_LEN                          (32U)
#define EF_DATA_0_EF_WIFI_MAC_HIGH_MSK                          (((1U<<EF_DATA_0_EF_WIFI_MAC_HIGH_LEN)-1)<<EF_DATA_0_EF_WIFI_MAC_HIGH_POS)
#define EF_DATA_0_EF_WIFI_MAC_HIGH_UMSK                         (~(((1U<<EF_DATA_0_EF_WIFI_MAC_HIGH_LEN)-1)<<EF_DATA_0_EF_WIFI_MAC_HIGH_POS))

/* 0x1C : ef_key_slot_0_w0 */
#define EF_DATA_0_EF_KEY_SLOT_0_W0_OFFSET                       (0x1C)
#define EF_DATA_0_EF_KEY_SLOT_0_W0                              EF_DATA_0_EF_KEY_SLOT_0_W0
#define EF_DATA_0_EF_KEY_SLOT_0_W0_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_0_W0_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_0_W0_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_0_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W0_POS)
#define EF_DATA_0_EF_KEY_SLOT_0_W0_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_0_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W0_POS))

/* 0x20 : ef_key_slot_0_w1 */
#define EF_DATA_0_EF_KEY_SLOT_0_W1_OFFSET                       (0x20)
#define EF_DATA_0_EF_KEY_SLOT_0_W1                              EF_DATA_0_EF_KEY_SLOT_0_W1
#define EF_DATA_0_EF_KEY_SLOT_0_W1_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_0_W1_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_0_W1_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_0_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W1_POS)
#define EF_DATA_0_EF_KEY_SLOT_0_W1_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_0_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W1_POS))

/* 0x24 : ef_key_slot_0_w2 */
#define EF_DATA_0_EF_KEY_SLOT_0_W2_OFFSET                       (0x24)
#define EF_DATA_0_EF_KEY_SLOT_0_W2                              EF_DATA_0_EF_KEY_SLOT_0_W2
#define EF_DATA_0_EF_KEY_SLOT_0_W2_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_0_W2_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_0_W2_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_0_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W2_POS)
#define EF_DATA_0_EF_KEY_SLOT_0_W2_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_0_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W2_POS))

/* 0x28 : ef_key_slot_0_w3 */
#define EF_DATA_0_EF_KEY_SLOT_0_W3_OFFSET                       (0x28)
#define EF_DATA_0_EF_KEY_SLOT_0_W3                              EF_DATA_0_EF_KEY_SLOT_0_W3
#define EF_DATA_0_EF_KEY_SLOT_0_W3_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_0_W3_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_0_W3_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_0_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W3_POS)
#define EF_DATA_0_EF_KEY_SLOT_0_W3_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_0_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_0_W3_POS))

/* 0x2C : ef_key_slot_1_w0 */
#define EF_DATA_0_EF_KEY_SLOT_1_W0_OFFSET                       (0x2C)
#define EF_DATA_0_EF_KEY_SLOT_1_W0                              EF_DATA_0_EF_KEY_SLOT_1_W0
#define EF_DATA_0_EF_KEY_SLOT_1_W0_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_1_W0_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_1_W0_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_1_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W0_POS)
#define EF_DATA_0_EF_KEY_SLOT_1_W0_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_1_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W0_POS))

/* 0x30 : ef_key_slot_1_w1 */
#define EF_DATA_0_EF_KEY_SLOT_1_W1_OFFSET                       (0x30)
#define EF_DATA_0_EF_KEY_SLOT_1_W1                              EF_DATA_0_EF_KEY_SLOT_1_W1
#define EF_DATA_0_EF_KEY_SLOT_1_W1_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_1_W1_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_1_W1_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_1_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W1_POS)
#define EF_DATA_0_EF_KEY_SLOT_1_W1_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_1_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W1_POS))

/* 0x34 : ef_key_slot_1_w2 */
#define EF_DATA_0_EF_KEY_SLOT_1_W2_OFFSET                       (0x34)
#define EF_DATA_0_EF_KEY_SLOT_1_W2                              EF_DATA_0_EF_KEY_SLOT_1_W2
#define EF_DATA_0_EF_KEY_SLOT_1_W2_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_1_W2_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_1_W2_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_1_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W2_POS)
#define EF_DATA_0_EF_KEY_SLOT_1_W2_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_1_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W2_POS))

/* 0x38 : ef_key_slot_1_w3 */
#define EF_DATA_0_EF_KEY_SLOT_1_W3_OFFSET                       (0x38)
#define EF_DATA_0_EF_KEY_SLOT_1_W3                              EF_DATA_0_EF_KEY_SLOT_1_W3
#define EF_DATA_0_EF_KEY_SLOT_1_W3_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_1_W3_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_1_W3_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_1_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W3_POS)
#define EF_DATA_0_EF_KEY_SLOT_1_W3_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_1_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_1_W3_POS))

/* 0x3C : ef_key_slot_2_w0 */
#define EF_DATA_0_EF_KEY_SLOT_2_W0_OFFSET                       (0x3C)
#define EF_DATA_0_EF_KEY_SLOT_2_W0                              EF_DATA_0_EF_KEY_SLOT_2_W0
#define EF_DATA_0_EF_KEY_SLOT_2_W0_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_2_W0_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_2_W0_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_2_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W0_POS)
#define EF_DATA_0_EF_KEY_SLOT_2_W0_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_2_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W0_POS))

/* 0x40 : ef_key_slot_2_w1 */
#define EF_DATA_0_EF_KEY_SLOT_2_W1_OFFSET                       (0x40)
#define EF_DATA_0_EF_KEY_SLOT_2_W1                              EF_DATA_0_EF_KEY_SLOT_2_W1
#define EF_DATA_0_EF_KEY_SLOT_2_W1_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_2_W1_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_2_W1_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_2_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W1_POS)
#define EF_DATA_0_EF_KEY_SLOT_2_W1_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_2_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W1_POS))

/* 0x44 : ef_key_slot_2_w2 */
#define EF_DATA_0_EF_KEY_SLOT_2_W2_OFFSET                       (0x44)
#define EF_DATA_0_EF_KEY_SLOT_2_W2                              EF_DATA_0_EF_KEY_SLOT_2_W2
#define EF_DATA_0_EF_KEY_SLOT_2_W2_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_2_W2_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_2_W2_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_2_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W2_POS)
#define EF_DATA_0_EF_KEY_SLOT_2_W2_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_2_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W2_POS))

/* 0x48 : ef_key_slot_2_w3 */
#define EF_DATA_0_EF_KEY_SLOT_2_W3_OFFSET                       (0x48)
#define EF_DATA_0_EF_KEY_SLOT_2_W3                              EF_DATA_0_EF_KEY_SLOT_2_W3
#define EF_DATA_0_EF_KEY_SLOT_2_W3_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_2_W3_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_2_W3_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_2_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W3_POS)
#define EF_DATA_0_EF_KEY_SLOT_2_W3_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_2_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_2_W3_POS))

/* 0x4C : ef_key_slot_3_w0 */
#define EF_DATA_0_EF_KEY_SLOT_3_W0_OFFSET                       (0x4C)
#define EF_DATA_0_EF_KEY_SLOT_3_W0                              EF_DATA_0_EF_KEY_SLOT_3_W0
#define EF_DATA_0_EF_KEY_SLOT_3_W0_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_3_W0_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_3_W0_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_3_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W0_POS)
#define EF_DATA_0_EF_KEY_SLOT_3_W0_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_3_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W0_POS))

/* 0x50 : ef_key_slot_3_w1 */
#define EF_DATA_0_EF_KEY_SLOT_3_W1_OFFSET                       (0x50)
#define EF_DATA_0_EF_KEY_SLOT_3_W1                              EF_DATA_0_EF_KEY_SLOT_3_W1
#define EF_DATA_0_EF_KEY_SLOT_3_W1_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_3_W1_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_3_W1_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_3_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W1_POS)
#define EF_DATA_0_EF_KEY_SLOT_3_W1_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_3_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W1_POS))

/* 0x54 : ef_key_slot_3_w2 */
#define EF_DATA_0_EF_KEY_SLOT_3_W2_OFFSET                       (0x54)
#define EF_DATA_0_EF_KEY_SLOT_3_W2                              EF_DATA_0_EF_KEY_SLOT_3_W2
#define EF_DATA_0_EF_KEY_SLOT_3_W2_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_3_W2_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_3_W2_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_3_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W2_POS)
#define EF_DATA_0_EF_KEY_SLOT_3_W2_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_3_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W2_POS))

/* 0x58 : ef_key_slot_3_w3 */
#define EF_DATA_0_EF_KEY_SLOT_3_W3_OFFSET                       (0x58)
#define EF_DATA_0_EF_KEY_SLOT_3_W3                              EF_DATA_0_EF_KEY_SLOT_3_W3
#define EF_DATA_0_EF_KEY_SLOT_3_W3_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_3_W3_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_3_W3_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_3_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W3_POS)
#define EF_DATA_0_EF_KEY_SLOT_3_W3_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_3_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_3_W3_POS))

/* 0x5C : ef_key_slot_4_w0 */
#define EF_DATA_0_EF_KEY_SLOT_4_W0_OFFSET                       (0x5C)
#define EF_DATA_0_EF_KEY_SLOT_4_W0                              EF_DATA_0_EF_KEY_SLOT_4_W0
#define EF_DATA_0_EF_KEY_SLOT_4_W0_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_4_W0_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_4_W0_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_4_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W0_POS)
#define EF_DATA_0_EF_KEY_SLOT_4_W0_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_4_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W0_POS))

/* 0x60 : ef_key_slot_4_w1 */
#define EF_DATA_0_EF_KEY_SLOT_4_W1_OFFSET                       (0x60)
#define EF_DATA_0_EF_KEY_SLOT_4_W1                              EF_DATA_0_EF_KEY_SLOT_4_W1
#define EF_DATA_0_EF_KEY_SLOT_4_W1_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_4_W1_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_4_W1_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_4_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W1_POS)
#define EF_DATA_0_EF_KEY_SLOT_4_W1_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_4_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W1_POS))

/* 0x64 : ef_key_slot_4_w2 */
#define EF_DATA_0_EF_KEY_SLOT_4_W2_OFFSET                       (0x64)
#define EF_DATA_0_EF_KEY_SLOT_4_W2                              EF_DATA_0_EF_KEY_SLOT_4_W2
#define EF_DATA_0_EF_KEY_SLOT_4_W2_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_4_W2_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_4_W2_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_4_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W2_POS)
#define EF_DATA_0_EF_KEY_SLOT_4_W2_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_4_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W2_POS))

/* 0x68 : ef_key_slot_4_w3 */
#define EF_DATA_0_EF_KEY_SLOT_4_W3_OFFSET                       (0x68)
#define EF_DATA_0_EF_KEY_SLOT_4_W3                              EF_DATA_0_EF_KEY_SLOT_4_W3
#define EF_DATA_0_EF_KEY_SLOT_4_W3_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_4_W3_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_4_W3_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_4_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W3_POS)
#define EF_DATA_0_EF_KEY_SLOT_4_W3_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_4_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_4_W3_POS))

/* 0x6C : ef_key_slot_5_w0 */
#define EF_DATA_0_EF_KEY_SLOT_5_W0_OFFSET                       (0x6C)
#define EF_DATA_0_EF_KEY_SLOT_5_W0                              EF_DATA_0_EF_KEY_SLOT_5_W0
#define EF_DATA_0_EF_KEY_SLOT_5_W0_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_5_W0_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_5_W0_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_5_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W0_POS)
#define EF_DATA_0_EF_KEY_SLOT_5_W0_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_5_W0_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W0_POS))

/* 0x70 : ef_key_slot_5_w1 */
#define EF_DATA_0_EF_KEY_SLOT_5_W1_OFFSET                       (0x70)
#define EF_DATA_0_EF_KEY_SLOT_5_W1                              EF_DATA_0_EF_KEY_SLOT_5_W1
#define EF_DATA_0_EF_KEY_SLOT_5_W1_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_5_W1_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_5_W1_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_5_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W1_POS)
#define EF_DATA_0_EF_KEY_SLOT_5_W1_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_5_W1_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W1_POS))

/* 0x74 : ef_key_slot_5_w2 */
#define EF_DATA_0_EF_KEY_SLOT_5_W2_OFFSET                       (0x74)
#define EF_DATA_0_EF_KEY_SLOT_5_W2                              EF_DATA_0_EF_KEY_SLOT_5_W2
#define EF_DATA_0_EF_KEY_SLOT_5_W2_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_5_W2_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_5_W2_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_5_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W2_POS)
#define EF_DATA_0_EF_KEY_SLOT_5_W2_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_5_W2_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W2_POS))

/* 0x78 : ef_key_slot_5_w3 */
#define EF_DATA_0_EF_KEY_SLOT_5_W3_OFFSET                       (0x78)
#define EF_DATA_0_EF_KEY_SLOT_5_W3                              EF_DATA_0_EF_KEY_SLOT_5_W3
#define EF_DATA_0_EF_KEY_SLOT_5_W3_POS                          (0U)
#define EF_DATA_0_EF_KEY_SLOT_5_W3_LEN                          (32U)
#define EF_DATA_0_EF_KEY_SLOT_5_W3_MSK                          (((1U<<EF_DATA_0_EF_KEY_SLOT_5_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W3_POS)
#define EF_DATA_0_EF_KEY_SLOT_5_W3_UMSK                         (~(((1U<<EF_DATA_0_EF_KEY_SLOT_5_W3_LEN)-1)<<EF_DATA_0_EF_KEY_SLOT_5_W3_POS))

/* 0x7C : ef_data_0_lock */
#define EF_DATA_0_LOCK_OFFSET                                   (0x7C)
#define EF_DATA_0_EF_ANA_TRIM_1                                 EF_DATA_0_EF_ANA_TRIM_1
#define EF_DATA_0_EF_ANA_TRIM_1_POS                             (0U)
#define EF_DATA_0_EF_ANA_TRIM_1_LEN                             (13U)
#define EF_DATA_0_EF_ANA_TRIM_1_MSK                             (((1U<<EF_DATA_0_EF_ANA_TRIM_1_LEN)-1)<<EF_DATA_0_EF_ANA_TRIM_1_POS)
#define EF_DATA_0_EF_ANA_TRIM_1_UMSK                            (~(((1U<<EF_DATA_0_EF_ANA_TRIM_1_LEN)-1)<<EF_DATA_0_EF_ANA_TRIM_1_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_L                          EF_DATA_0_WR_LOCK_KEY_SLOT_4_L
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_POS                      (13U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_LEN                      (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_MSK                      (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_UMSK                     (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_L_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_L                          EF_DATA_0_WR_LOCK_KEY_SLOT_5_L
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_POS                      (14U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_LEN                      (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_MSK                      (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_UMSK                     (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_L_POS))
#define EF_DATA_0_WR_LOCK_BOOT_MODE                             EF_DATA_0_WR_LOCK_BOOT_MODE
#define EF_DATA_0_WR_LOCK_BOOT_MODE_POS                         (15U)
#define EF_DATA_0_WR_LOCK_BOOT_MODE_LEN                         (1U)
#define EF_DATA_0_WR_LOCK_BOOT_MODE_MSK                         (((1U<<EF_DATA_0_WR_LOCK_BOOT_MODE_LEN)-1)<<EF_DATA_0_WR_LOCK_BOOT_MODE_POS)
#define EF_DATA_0_WR_LOCK_BOOT_MODE_UMSK                        (~(((1U<<EF_DATA_0_WR_LOCK_BOOT_MODE_LEN)-1)<<EF_DATA_0_WR_LOCK_BOOT_MODE_POS))
#define EF_DATA_0_WR_LOCK_DBG_PWD                               EF_DATA_0_WR_LOCK_DBG_PWD
#define EF_DATA_0_WR_LOCK_DBG_PWD_POS                           (16U)
#define EF_DATA_0_WR_LOCK_DBG_PWD_LEN                           (1U)
#define EF_DATA_0_WR_LOCK_DBG_PWD_MSK                           (((1U<<EF_DATA_0_WR_LOCK_DBG_PWD_LEN)-1)<<EF_DATA_0_WR_LOCK_DBG_PWD_POS)
#define EF_DATA_0_WR_LOCK_DBG_PWD_UMSK                          (~(((1U<<EF_DATA_0_WR_LOCK_DBG_PWD_LEN)-1)<<EF_DATA_0_WR_LOCK_DBG_PWD_POS))
#define EF_DATA_0_WR_LOCK_SW_USAGE_0                            EF_DATA_0_WR_LOCK_SW_USAGE_0
#define EF_DATA_0_WR_LOCK_SW_USAGE_0_POS                        (17U)
#define EF_DATA_0_WR_LOCK_SW_USAGE_0_LEN                        (1U)
#define EF_DATA_0_WR_LOCK_SW_USAGE_0_MSK                        (((1U<<EF_DATA_0_WR_LOCK_SW_USAGE_0_LEN)-1)<<EF_DATA_0_WR_LOCK_SW_USAGE_0_POS)
#define EF_DATA_0_WR_LOCK_SW_USAGE_0_UMSK                       (~(((1U<<EF_DATA_0_WR_LOCK_SW_USAGE_0_LEN)-1)<<EF_DATA_0_WR_LOCK_SW_USAGE_0_POS))
#define EF_DATA_0_WR_LOCK_WIFI_MAC                              EF_DATA_0_WR_LOCK_WIFI_MAC
#define EF_DATA_0_WR_LOCK_WIFI_MAC_POS                          (18U)
#define EF_DATA_0_WR_LOCK_WIFI_MAC_LEN                          (1U)
#define EF_DATA_0_WR_LOCK_WIFI_MAC_MSK                          (((1U<<EF_DATA_0_WR_LOCK_WIFI_MAC_LEN)-1)<<EF_DATA_0_WR_LOCK_WIFI_MAC_POS)
#define EF_DATA_0_WR_LOCK_WIFI_MAC_UMSK                         (~(((1U<<EF_DATA_0_WR_LOCK_WIFI_MAC_LEN)-1)<<EF_DATA_0_WR_LOCK_WIFI_MAC_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_0                            EF_DATA_0_WR_LOCK_KEY_SLOT_0
#define EF_DATA_0_WR_LOCK_KEY_SLOT_0_POS                        (19U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_0_LEN                        (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_0_MSK                        (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_0_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_0_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_0_UMSK                       (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_0_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_0_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_1                            EF_DATA_0_WR_LOCK_KEY_SLOT_1
#define EF_DATA_0_WR_LOCK_KEY_SLOT_1_POS                        (20U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_1_LEN                        (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_1_MSK                        (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_1_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_1_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_1_UMSK                       (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_1_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_1_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_2                            EF_DATA_0_WR_LOCK_KEY_SLOT_2
#define EF_DATA_0_WR_LOCK_KEY_SLOT_2_POS                        (21U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_2_LEN                        (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_2_MSK                        (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_2_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_2_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_2_UMSK                       (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_2_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_2_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_3                            EF_DATA_0_WR_LOCK_KEY_SLOT_3
#define EF_DATA_0_WR_LOCK_KEY_SLOT_3_POS                        (22U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_3_LEN                        (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_3_MSK                        (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_3_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_3_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_3_UMSK                       (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_3_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_3_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_H                          EF_DATA_0_WR_LOCK_KEY_SLOT_4_H
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_POS                      (23U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_LEN                      (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_MSK                      (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_UMSK                     (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_4_H_POS))
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_H                          EF_DATA_0_WR_LOCK_KEY_SLOT_5_H
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_POS                      (24U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_LEN                      (1U)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_MSK                      (((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_POS)
#define EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_UMSK                     (~(((1U<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_LEN)-1)<<EF_DATA_0_WR_LOCK_KEY_SLOT_5_H_POS))
#define EF_DATA_0_RD_LOCK_DBG_PWD                               EF_DATA_0_RD_LOCK_DBG_PWD
#define EF_DATA_0_RD_LOCK_DBG_PWD_POS                           (25U)
#define EF_DATA_0_RD_LOCK_DBG_PWD_LEN                           (1U)
#define EF_DATA_0_RD_LOCK_DBG_PWD_MSK                           (((1U<<EF_DATA_0_RD_LOCK_DBG_PWD_LEN)-1)<<EF_DATA_0_RD_LOCK_DBG_PWD_POS)
#define EF_DATA_0_RD_LOCK_DBG_PWD_UMSK                          (~(((1U<<EF_DATA_0_RD_LOCK_DBG_PWD_LEN)-1)<<EF_DATA_0_RD_LOCK_DBG_PWD_POS))
#define EF_DATA_0_RD_LOCK_KEY_SLOT_0                            EF_DATA_0_RD_LOCK_KEY_SLOT_0
#define EF_DATA_0_RD_LOCK_KEY_SLOT_0_POS                        (26U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_0_LEN                        (1U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_0_MSK                        (((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_0_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_0_POS)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_0_UMSK                       (~(((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_0_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_0_POS))
#define EF_DATA_0_RD_LOCK_KEY_SLOT_1                            EF_DATA_0_RD_LOCK_KEY_SLOT_1
#define EF_DATA_0_RD_LOCK_KEY_SLOT_1_POS                        (27U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_1_LEN                        (1U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_1_MSK                        (((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_1_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_1_POS)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_1_UMSK                       (~(((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_1_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_1_POS))
#define EF_DATA_0_RD_LOCK_KEY_SLOT_2                            EF_DATA_0_RD_LOCK_KEY_SLOT_2
#define EF_DATA_0_RD_LOCK_KEY_SLOT_2_POS                        (28U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_2_LEN                        (1U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_2_MSK                        (((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_2_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_2_POS)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_2_UMSK                       (~(((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_2_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_2_POS))
#define EF_DATA_0_RD_LOCK_KEY_SLOT_3                            EF_DATA_0_RD_LOCK_KEY_SLOT_3
#define EF_DATA_0_RD_LOCK_KEY_SLOT_3_POS                        (29U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_3_LEN                        (1U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_3_MSK                        (((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_3_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_3_POS)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_3_UMSK                       (~(((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_3_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_3_POS))
#define EF_DATA_0_RD_LOCK_KEY_SLOT_4                            EF_DATA_0_RD_LOCK_KEY_SLOT_4
#define EF_DATA_0_RD_LOCK_KEY_SLOT_4_POS                        (30U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_4_LEN                        (1U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_4_MSK                        (((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_4_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_4_POS)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_4_UMSK                       (~(((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_4_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_4_POS))
#define EF_DATA_0_RD_LOCK_KEY_SLOT_5                            EF_DATA_0_RD_LOCK_KEY_SLOT_5
#define EF_DATA_0_RD_LOCK_KEY_SLOT_5_POS                        (31U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_5_LEN                        (1U)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_5_MSK                        (((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_5_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_5_POS)
#define EF_DATA_0_RD_LOCK_KEY_SLOT_5_UMSK                       (~(((1U<<EF_DATA_0_RD_LOCK_KEY_SLOT_5_LEN)-1)<<EF_DATA_0_RD_LOCK_KEY_SLOT_5_POS))

/* 0x80 : reg_key_slot_6_w0 */
#define EF_DATA_1_REG_KEY_SLOT_6_W0_OFFSET                      (0x80)
#define EF_DATA_1_REG_KEY_SLOT_6_W0                             EF_DATA_1_REG_KEY_SLOT_6_W0
#define EF_DATA_1_REG_KEY_SLOT_6_W0_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_6_W0_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_6_W0_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_6_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W0_POS)
#define EF_DATA_1_REG_KEY_SLOT_6_W0_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_6_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W0_POS))

/* 0x84 : reg_key_slot_6_w1 */
#define EF_DATA_1_REG_KEY_SLOT_6_W1_OFFSET                      (0x84)
#define EF_DATA_1_REG_KEY_SLOT_6_W1                             EF_DATA_1_REG_KEY_SLOT_6_W1
#define EF_DATA_1_REG_KEY_SLOT_6_W1_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_6_W1_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_6_W1_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_6_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W1_POS)
#define EF_DATA_1_REG_KEY_SLOT_6_W1_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_6_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W1_POS))

/* 0x88 : reg_key_slot_6_w2 */
#define EF_DATA_1_REG_KEY_SLOT_6_W2_OFFSET                      (0x88)
#define EF_DATA_1_REG_KEY_SLOT_6_W2                             EF_DATA_1_REG_KEY_SLOT_6_W2
#define EF_DATA_1_REG_KEY_SLOT_6_W2_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_6_W2_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_6_W2_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_6_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W2_POS)
#define EF_DATA_1_REG_KEY_SLOT_6_W2_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_6_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W2_POS))

/* 0x8C : reg_key_slot_6_w3 */
#define EF_DATA_1_REG_KEY_SLOT_6_W3_OFFSET                      (0x8C)
#define EF_DATA_1_REG_KEY_SLOT_6_W3                             EF_DATA_1_REG_KEY_SLOT_6_W3
#define EF_DATA_1_REG_KEY_SLOT_6_W3_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_6_W3_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_6_W3_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_6_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W3_POS)
#define EF_DATA_1_REG_KEY_SLOT_6_W3_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_6_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_6_W3_POS))

/* 0x90 : reg_key_slot_7_w0 */
#define EF_DATA_1_REG_KEY_SLOT_7_W0_OFFSET                      (0x90)
#define EF_DATA_1_REG_KEY_SLOT_7_W0                             EF_DATA_1_REG_KEY_SLOT_7_W0
#define EF_DATA_1_REG_KEY_SLOT_7_W0_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_7_W0_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_7_W0_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_7_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W0_POS)
#define EF_DATA_1_REG_KEY_SLOT_7_W0_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_7_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W0_POS))

/* 0x94 : reg_key_slot_7_w1 */
#define EF_DATA_1_REG_KEY_SLOT_7_W1_OFFSET                      (0x94)
#define EF_DATA_1_REG_KEY_SLOT_7_W1                             EF_DATA_1_REG_KEY_SLOT_7_W1
#define EF_DATA_1_REG_KEY_SLOT_7_W1_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_7_W1_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_7_W1_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_7_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W1_POS)
#define EF_DATA_1_REG_KEY_SLOT_7_W1_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_7_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W1_POS))

/* 0x98 : reg_key_slot_7_w2 */
#define EF_DATA_1_REG_KEY_SLOT_7_W2_OFFSET                      (0x98)
#define EF_DATA_1_REG_KEY_SLOT_7_W2                             EF_DATA_1_REG_KEY_SLOT_7_W2
#define EF_DATA_1_REG_KEY_SLOT_7_W2_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_7_W2_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_7_W2_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_7_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W2_POS)
#define EF_DATA_1_REG_KEY_SLOT_7_W2_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_7_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W2_POS))

/* 0x9C : reg_key_slot_7_w3 */
#define EF_DATA_1_REG_KEY_SLOT_7_W3_OFFSET                      (0x9C)
#define EF_DATA_1_REG_KEY_SLOT_7_W3                             EF_DATA_1_REG_KEY_SLOT_7_W3
#define EF_DATA_1_REG_KEY_SLOT_7_W3_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_7_W3_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_7_W3_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_7_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W3_POS)
#define EF_DATA_1_REG_KEY_SLOT_7_W3_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_7_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_7_W3_POS))

/* 0xA0 : reg_key_slot_8_w0 */
#define EF_DATA_1_REG_KEY_SLOT_8_W0_OFFSET                      (0xA0)
#define EF_DATA_1_REG_KEY_SLOT_8_W0                             EF_DATA_1_REG_KEY_SLOT_8_W0
#define EF_DATA_1_REG_KEY_SLOT_8_W0_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_8_W0_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_8_W0_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_8_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W0_POS)
#define EF_DATA_1_REG_KEY_SLOT_8_W0_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_8_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W0_POS))

/* 0xA4 : reg_key_slot_8_w1 */
#define EF_DATA_1_REG_KEY_SLOT_8_W1_OFFSET                      (0xA4)
#define EF_DATA_1_REG_KEY_SLOT_8_W1                             EF_DATA_1_REG_KEY_SLOT_8_W1
#define EF_DATA_1_REG_KEY_SLOT_8_W1_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_8_W1_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_8_W1_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_8_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W1_POS)
#define EF_DATA_1_REG_KEY_SLOT_8_W1_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_8_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W1_POS))

/* 0xA8 : reg_key_slot_8_w2 */
#define EF_DATA_1_REG_KEY_SLOT_8_W2_OFFSET                      (0xA8)
#define EF_DATA_1_REG_KEY_SLOT_8_W2                             EF_DATA_1_REG_KEY_SLOT_8_W2
#define EF_DATA_1_REG_KEY_SLOT_8_W2_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_8_W2_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_8_W2_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_8_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W2_POS)
#define EF_DATA_1_REG_KEY_SLOT_8_W2_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_8_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W2_POS))

/* 0xAC : reg_key_slot_8_w3 */
#define EF_DATA_1_REG_KEY_SLOT_8_W3_OFFSET                      (0xAC)
#define EF_DATA_1_REG_KEY_SLOT_8_W3                             EF_DATA_1_REG_KEY_SLOT_8_W3
#define EF_DATA_1_REG_KEY_SLOT_8_W3_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_8_W3_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_8_W3_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_8_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W3_POS)
#define EF_DATA_1_REG_KEY_SLOT_8_W3_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_8_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_8_W3_POS))

/* 0xB0 : reg_key_slot_9_w0 */
#define EF_DATA_1_REG_KEY_SLOT_9_W0_OFFSET                      (0xB0)
#define EF_DATA_1_REG_KEY_SLOT_9_W0                             EF_DATA_1_REG_KEY_SLOT_9_W0
#define EF_DATA_1_REG_KEY_SLOT_9_W0_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_9_W0_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_9_W0_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_9_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W0_POS)
#define EF_DATA_1_REG_KEY_SLOT_9_W0_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_9_W0_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W0_POS))

/* 0xB4 : reg_key_slot_9_w1 */
#define EF_DATA_1_REG_KEY_SLOT_9_W1_OFFSET                      (0xB4)
#define EF_DATA_1_REG_KEY_SLOT_9_W1                             EF_DATA_1_REG_KEY_SLOT_9_W1
#define EF_DATA_1_REG_KEY_SLOT_9_W1_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_9_W1_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_9_W1_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_9_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W1_POS)
#define EF_DATA_1_REG_KEY_SLOT_9_W1_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_9_W1_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W1_POS))

/* 0xB8 : reg_key_slot_9_w2 */
#define EF_DATA_1_REG_KEY_SLOT_9_W2_OFFSET                      (0xB8)
#define EF_DATA_1_REG_KEY_SLOT_9_W2                             EF_DATA_1_REG_KEY_SLOT_9_W2
#define EF_DATA_1_REG_KEY_SLOT_9_W2_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_9_W2_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_9_W2_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_9_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W2_POS)
#define EF_DATA_1_REG_KEY_SLOT_9_W2_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_9_W2_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W2_POS))

/* 0xBC : reg_key_slot_9_w3 */
#define EF_DATA_1_REG_KEY_SLOT_9_W3_OFFSET                      (0xBC)
#define EF_DATA_1_REG_KEY_SLOT_9_W3                             EF_DATA_1_REG_KEY_SLOT_9_W3
#define EF_DATA_1_REG_KEY_SLOT_9_W3_POS                         (0U)
#define EF_DATA_1_REG_KEY_SLOT_9_W3_LEN                         (32U)
#define EF_DATA_1_REG_KEY_SLOT_9_W3_MSK                         (((1U<<EF_DATA_1_REG_KEY_SLOT_9_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W3_POS)
#define EF_DATA_1_REG_KEY_SLOT_9_W3_UMSK                        (~(((1U<<EF_DATA_1_REG_KEY_SLOT_9_W3_LEN)-1)<<EF_DATA_1_REG_KEY_SLOT_9_W3_POS))

/* 0xC0 : reg_key_slot_10_w0 */
#define EF_DATA_1_REG_KEY_SLOT_10_W0_OFFSET                     (0xC0)

/* 0xC4 : reg_key_slot_10_w1 */
#define EF_DATA_1_REG_KEY_SLOT_10_W1_OFFSET                     (0xC4)

/* 0xC8 : reg_key_slot_10_w2 */
#define EF_DATA_1_REG_KEY_SLOT_10_W2_OFFSET                     (0xC8)

/* 0xCC : reg_key_slot_10_w3 */
#define EF_DATA_1_REG_KEY_SLOT_10_W3_OFFSET                     (0xCC)

/* 0xD0 : reg_key_slot_11_w0 */
#define EF_DATA_1_REG_KEY_SLOT_11_W0_OFFSET                     (0xD0)

/* 0xD4 : reg_key_slot_11_w1 */
#define EF_DATA_1_REG_KEY_SLOT_11_W1_OFFSET                     (0xD4)

/* 0xD8 : reg_key_slot_11_w2 */
#define EF_DATA_1_REG_KEY_SLOT_11_W2_OFFSET                     (0xD8)

/* 0xDC : reg_key_slot_11_w3 */
#define EF_DATA_1_REG_KEY_SLOT_11_W3_OFFSET                     (0xDC)

/* 0xE0 : reg_data_1_lock */
#define EF_DATA_1_REG_DATA_1_LOCK_OFFSET                        (0xE0)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_6                            EF_DATA_1_WR_LOCK_KEY_SLOT_6
#define EF_DATA_1_WR_LOCK_KEY_SLOT_6_POS                        (10U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_6_LEN                        (1U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_6_MSK                        (((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_6_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_6_POS)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_6_UMSK                       (~(((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_6_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_6_POS))
#define EF_DATA_1_WR_LOCK_KEY_SLOT_7                            EF_DATA_1_WR_LOCK_KEY_SLOT_7
#define EF_DATA_1_WR_LOCK_KEY_SLOT_7_POS                        (11U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_7_LEN                        (1U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_7_MSK                        (((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_7_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_7_POS)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_7_UMSK                       (~(((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_7_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_7_POS))
#define EF_DATA_1_WR_LOCK_KEY_SLOT_8                            EF_DATA_1_WR_LOCK_KEY_SLOT_8
#define EF_DATA_1_WR_LOCK_KEY_SLOT_8_POS                        (12U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_8_LEN                        (1U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_8_MSK                        (((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_8_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_8_POS)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_8_UMSK                       (~(((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_8_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_8_POS))
#define EF_DATA_1_WR_LOCK_KEY_SLOT_9                            EF_DATA_1_WR_LOCK_KEY_SLOT_9
#define EF_DATA_1_WR_LOCK_KEY_SLOT_9_POS                        (13U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_9_LEN                        (1U)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_9_MSK                        (((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_9_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_9_POS)
#define EF_DATA_1_WR_LOCK_KEY_SLOT_9_UMSK                       (~(((1U<<EF_DATA_1_WR_LOCK_KEY_SLOT_9_LEN)-1)<<EF_DATA_1_WR_LOCK_KEY_SLOT_9_POS))
#define EF_DATA_1_RD_LOCK_KEY_SLOT_6                            EF_DATA_1_RD_LOCK_KEY_SLOT_6
#define EF_DATA_1_RD_LOCK_KEY_SLOT_6_POS                        (26U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_6_LEN                        (1U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_6_MSK                        (((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_6_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_6_POS)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_6_UMSK                       (~(((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_6_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_6_POS))
#define EF_DATA_1_RD_LOCK_KEY_SLOT_7                            EF_DATA_1_RD_LOCK_KEY_SLOT_7
#define EF_DATA_1_RD_LOCK_KEY_SLOT_7_POS                        (27U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_7_LEN                        (1U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_7_MSK                        (((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_7_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_7_POS)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_7_UMSK                       (~(((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_7_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_7_POS))
#define EF_DATA_1_RD_LOCK_KEY_SLOT_8                            EF_DATA_1_RD_LOCK_KEY_SLOT_8
#define EF_DATA_1_RD_LOCK_KEY_SLOT_8_POS                        (28U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_8_LEN                        (1U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_8_MSK                        (((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_8_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_8_POS)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_8_UMSK                       (~(((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_8_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_8_POS))
#define EF_DATA_1_RD_LOCK_KEY_SLOT_9                            EF_DATA_1_RD_LOCK_KEY_SLOT_9
#define EF_DATA_1_RD_LOCK_KEY_SLOT_9_POS                        (29U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_9_LEN                        (1U)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_9_MSK                        (((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_9_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_9_POS)
#define EF_DATA_1_RD_LOCK_KEY_SLOT_9_UMSK                       (~(((1U<<EF_DATA_1_RD_LOCK_KEY_SLOT_9_LEN)-1)<<EF_DATA_1_RD_LOCK_KEY_SLOT_9_POS))

/****************************************************************************/

/* 0x800 : ef_if_ctrl_0 */
#define EF_CTRL_EF_IF_CTRL_0_OFFSET                             (0x800)
#define EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE                        EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE
#define EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_POS                    (0U)
#define EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_LEN                    (1U)
#define EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_MSK                    (((1U<<EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_LEN)-1)<<EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_POS)
#define EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_UMSK                   (~(((1U<<EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_LEN)-1)<<EF_CTRL_EF_IF_0_AUTOLOAD_P1_DONE_POS))
#define EF_CTRL_EF_IF_0_AUTOLOAD_DONE                           EF_CTRL_EF_IF_0_AUTOLOAD_DONE
#define EF_CTRL_EF_IF_0_AUTOLOAD_DONE_POS                       (1U)
#define EF_CTRL_EF_IF_0_AUTOLOAD_DONE_LEN                       (1U)
#define EF_CTRL_EF_IF_0_AUTOLOAD_DONE_MSK                       (((1U<<EF_CTRL_EF_IF_0_AUTOLOAD_DONE_LEN)-1)<<EF_CTRL_EF_IF_0_AUTOLOAD_DONE_POS)
#define EF_CTRL_EF_IF_0_AUTOLOAD_DONE_UMSK                      (~(((1U<<EF_CTRL_EF_IF_0_AUTOLOAD_DONE_LEN)-1)<<EF_CTRL_EF_IF_0_AUTOLOAD_DONE_POS))
#define EF_CTRL_EF_IF_0_BUSY                                    EF_CTRL_EF_IF_0_BUSY
#define EF_CTRL_EF_IF_0_BUSY_POS                                (2U)
#define EF_CTRL_EF_IF_0_BUSY_LEN                                (1U)
#define EF_CTRL_EF_IF_0_BUSY_MSK                                (((1U<<EF_CTRL_EF_IF_0_BUSY_LEN)-1)<<EF_CTRL_EF_IF_0_BUSY_POS)
#define EF_CTRL_EF_IF_0_BUSY_UMSK                               (~(((1U<<EF_CTRL_EF_IF_0_BUSY_LEN)-1)<<EF_CTRL_EF_IF_0_BUSY_POS))
#define EF_CTRL_EF_IF_0_RW                                      EF_CTRL_EF_IF_0_RW
#define EF_CTRL_EF_IF_0_RW_POS                                  (3U)
#define EF_CTRL_EF_IF_0_RW_LEN                                  (1U)
#define EF_CTRL_EF_IF_0_RW_MSK                                  (((1U<<EF_CTRL_EF_IF_0_RW_LEN)-1)<<EF_CTRL_EF_IF_0_RW_POS)
#define EF_CTRL_EF_IF_0_RW_UMSK                                 (~(((1U<<EF_CTRL_EF_IF_0_RW_LEN)-1)<<EF_CTRL_EF_IF_0_RW_POS))
#define EF_CTRL_EF_IF_0_TRIG                                    EF_CTRL_EF_IF_0_TRIG
#define EF_CTRL_EF_IF_0_TRIG_POS                                (4U)
#define EF_CTRL_EF_IF_0_TRIG_LEN                                (1U)
#define EF_CTRL_EF_IF_0_TRIG_MSK                                (((1U<<EF_CTRL_EF_IF_0_TRIG_LEN)-1)<<EF_CTRL_EF_IF_0_TRIG_POS)
#define EF_CTRL_EF_IF_0_TRIG_UMSK                               (~(((1U<<EF_CTRL_EF_IF_0_TRIG_LEN)-1)<<EF_CTRL_EF_IF_0_TRIG_POS))
#define EF_CTRL_EF_IF_0_MANUAL_EN                               EF_CTRL_EF_IF_0_MANUAL_EN
#define EF_CTRL_EF_IF_0_MANUAL_EN_POS                           (5U)
#define EF_CTRL_EF_IF_0_MANUAL_EN_LEN                           (1U)
#define EF_CTRL_EF_IF_0_MANUAL_EN_MSK                           (((1U<<EF_CTRL_EF_IF_0_MANUAL_EN_LEN)-1)<<EF_CTRL_EF_IF_0_MANUAL_EN_POS)
#define EF_CTRL_EF_IF_0_MANUAL_EN_UMSK                          (~(((1U<<EF_CTRL_EF_IF_0_MANUAL_EN_LEN)-1)<<EF_CTRL_EF_IF_0_MANUAL_EN_POS))
#define EF_CTRL_EF_IF_0_CYC_MODIFY                              EF_CTRL_EF_IF_0_CYC_MODIFY
#define EF_CTRL_EF_IF_0_CYC_MODIFY_POS                          (6U)
#define EF_CTRL_EF_IF_0_CYC_MODIFY_LEN                          (1U)
#define EF_CTRL_EF_IF_0_CYC_MODIFY_MSK                          (((1U<<EF_CTRL_EF_IF_0_CYC_MODIFY_LEN)-1)<<EF_CTRL_EF_IF_0_CYC_MODIFY_POS)
#define EF_CTRL_EF_IF_0_CYC_MODIFY_UMSK                         (~(((1U<<EF_CTRL_EF_IF_0_CYC_MODIFY_LEN)-1)<<EF_CTRL_EF_IF_0_CYC_MODIFY_POS))
#define EF_CTRL_EF_CLK_SAHB_DATA_SEL                            EF_CTRL_EF_CLK_SAHB_DATA_SEL
#define EF_CTRL_EF_CLK_SAHB_DATA_SEL_POS                        (7U)
#define EF_CTRL_EF_CLK_SAHB_DATA_SEL_LEN                        (1U)
#define EF_CTRL_EF_CLK_SAHB_DATA_SEL_MSK                        (((1U<<EF_CTRL_EF_CLK_SAHB_DATA_SEL_LEN)-1)<<EF_CTRL_EF_CLK_SAHB_DATA_SEL_POS)
#define EF_CTRL_EF_CLK_SAHB_DATA_SEL_UMSK                       (~(((1U<<EF_CTRL_EF_CLK_SAHB_DATA_SEL_LEN)-1)<<EF_CTRL_EF_CLK_SAHB_DATA_SEL_POS))
#define EF_CTRL_EF_IF_PROT_CODE_CTRL                            EF_CTRL_EF_IF_PROT_CODE_CTRL
#define EF_CTRL_EF_IF_PROT_CODE_CTRL_POS                        (8U)
#define EF_CTRL_EF_IF_PROT_CODE_CTRL_LEN                        (8U)
#define EF_CTRL_EF_IF_PROT_CODE_CTRL_MSK                        (((1U<<EF_CTRL_EF_IF_PROT_CODE_CTRL_LEN)-1)<<EF_CTRL_EF_IF_PROT_CODE_CTRL_POS)
#define EF_CTRL_EF_IF_PROT_CODE_CTRL_UMSK                       (~(((1U<<EF_CTRL_EF_IF_PROT_CODE_CTRL_LEN)-1)<<EF_CTRL_EF_IF_PROT_CODE_CTRL_POS))
#define EF_CTRL_EF_IF_POR_DIG                                   EF_CTRL_EF_IF_POR_DIG
#define EF_CTRL_EF_IF_POR_DIG_POS                               (16U)
#define EF_CTRL_EF_IF_POR_DIG_LEN                               (1U)
#define EF_CTRL_EF_IF_POR_DIG_MSK                               (((1U<<EF_CTRL_EF_IF_POR_DIG_LEN)-1)<<EF_CTRL_EF_IF_POR_DIG_POS)
#define EF_CTRL_EF_IF_POR_DIG_UMSK                              (~(((1U<<EF_CTRL_EF_IF_POR_DIG_LEN)-1)<<EF_CTRL_EF_IF_POR_DIG_POS))
#define EF_CTRL_EF_CLK_SAHB_DATA_GATE                           EF_CTRL_EF_CLK_SAHB_DATA_GATE
#define EF_CTRL_EF_CLK_SAHB_DATA_GATE_POS                       (17U)
#define EF_CTRL_EF_CLK_SAHB_DATA_GATE_LEN                       (1U)
#define EF_CTRL_EF_CLK_SAHB_DATA_GATE_MSK                       (((1U<<EF_CTRL_EF_CLK_SAHB_DATA_GATE_LEN)-1)<<EF_CTRL_EF_CLK_SAHB_DATA_GATE_POS)
#define EF_CTRL_EF_CLK_SAHB_DATA_GATE_UMSK                      (~(((1U<<EF_CTRL_EF_CLK_SAHB_DATA_GATE_LEN)-1)<<EF_CTRL_EF_CLK_SAHB_DATA_GATE_POS))
#define EF_CTRL_EF_IF_AUTO_RD_EN                                EF_CTRL_EF_IF_AUTO_RD_EN
#define EF_CTRL_EF_IF_AUTO_RD_EN_POS                            (18U)
#define EF_CTRL_EF_IF_AUTO_RD_EN_LEN                            (1U)
#define EF_CTRL_EF_IF_AUTO_RD_EN_MSK                            (((1U<<EF_CTRL_EF_IF_AUTO_RD_EN_LEN)-1)<<EF_CTRL_EF_IF_AUTO_RD_EN_POS)
#define EF_CTRL_EF_IF_AUTO_RD_EN_UMSK                           (~(((1U<<EF_CTRL_EF_IF_AUTO_RD_EN_LEN)-1)<<EF_CTRL_EF_IF_AUTO_RD_EN_POS))
#define EF_CTRL_EF_IF_CYC_MODIFY_LOCK                           EF_CTRL_EF_IF_CYC_MODIFY_LOCK
#define EF_CTRL_EF_IF_CYC_MODIFY_LOCK_POS                       (19U)
#define EF_CTRL_EF_IF_CYC_MODIFY_LOCK_LEN                       (1U)
#define EF_CTRL_EF_IF_CYC_MODIFY_LOCK_MSK                       (((1U<<EF_CTRL_EF_IF_CYC_MODIFY_LOCK_LEN)-1)<<EF_CTRL_EF_IF_CYC_MODIFY_LOCK_POS)
#define EF_CTRL_EF_IF_CYC_MODIFY_LOCK_UMSK                      (~(((1U<<EF_CTRL_EF_IF_CYC_MODIFY_LOCK_LEN)-1)<<EF_CTRL_EF_IF_CYC_MODIFY_LOCK_POS))
#define EF_CTRL_EF_IF_0_INT                                     EF_CTRL_EF_IF_0_INT
#define EF_CTRL_EF_IF_0_INT_POS                                 (20U)
#define EF_CTRL_EF_IF_0_INT_LEN                                 (1U)
#define EF_CTRL_EF_IF_0_INT_MSK                                 (((1U<<EF_CTRL_EF_IF_0_INT_LEN)-1)<<EF_CTRL_EF_IF_0_INT_POS)
#define EF_CTRL_EF_IF_0_INT_UMSK                                (~(((1U<<EF_CTRL_EF_IF_0_INT_LEN)-1)<<EF_CTRL_EF_IF_0_INT_POS))
#define EF_CTRL_EF_IF_0_INT_CLR                                 EF_CTRL_EF_IF_0_INT_CLR
#define EF_CTRL_EF_IF_0_INT_CLR_POS                             (21U)
#define EF_CTRL_EF_IF_0_INT_CLR_LEN                             (1U)
#define EF_CTRL_EF_IF_0_INT_CLR_MSK                             (((1U<<EF_CTRL_EF_IF_0_INT_CLR_LEN)-1)<<EF_CTRL_EF_IF_0_INT_CLR_POS)
#define EF_CTRL_EF_IF_0_INT_CLR_UMSK                            (~(((1U<<EF_CTRL_EF_IF_0_INT_CLR_LEN)-1)<<EF_CTRL_EF_IF_0_INT_CLR_POS))
#define EF_CTRL_EF_IF_0_INT_SET                                 EF_CTRL_EF_IF_0_INT_SET
#define EF_CTRL_EF_IF_0_INT_SET_POS                             (22U)
#define EF_CTRL_EF_IF_0_INT_SET_LEN                             (1U)
#define EF_CTRL_EF_IF_0_INT_SET_MSK                             (((1U<<EF_CTRL_EF_IF_0_INT_SET_LEN)-1)<<EF_CTRL_EF_IF_0_INT_SET_POS)
#define EF_CTRL_EF_IF_0_INT_SET_UMSK                            (~(((1U<<EF_CTRL_EF_IF_0_INT_SET_LEN)-1)<<EF_CTRL_EF_IF_0_INT_SET_POS))
#define EF_CTRL_EF_IF_PROT_CODE_CYC                             EF_CTRL_EF_IF_PROT_CODE_CYC
#define EF_CTRL_EF_IF_PROT_CODE_CYC_POS                         (24U)
#define EF_CTRL_EF_IF_PROT_CODE_CYC_LEN                         (8U)
#define EF_CTRL_EF_IF_PROT_CODE_CYC_MSK                         (((1U<<EF_CTRL_EF_IF_PROT_CODE_CYC_LEN)-1)<<EF_CTRL_EF_IF_PROT_CODE_CYC_POS)
#define EF_CTRL_EF_IF_PROT_CODE_CYC_UMSK                        (~(((1U<<EF_CTRL_EF_IF_PROT_CODE_CYC_LEN)-1)<<EF_CTRL_EF_IF_PROT_CODE_CYC_POS))

/* 0x804 : ef_if_cyc_0 */
#define EF_CTRL_EF_IF_CYC_0_OFFSET                              (0x804)
#define EF_CTRL_EF_IF_CYC_RD_DMY                                EF_CTRL_EF_IF_CYC_RD_DMY
#define EF_CTRL_EF_IF_CYC_RD_DMY_POS                            (0U)
#define EF_CTRL_EF_IF_CYC_RD_DMY_LEN                            (6U)
#define EF_CTRL_EF_IF_CYC_RD_DMY_MSK                            (((1U<<EF_CTRL_EF_IF_CYC_RD_DMY_LEN)-1)<<EF_CTRL_EF_IF_CYC_RD_DMY_POS)
#define EF_CTRL_EF_IF_CYC_RD_DMY_UMSK                           (~(((1U<<EF_CTRL_EF_IF_CYC_RD_DMY_LEN)-1)<<EF_CTRL_EF_IF_CYC_RD_DMY_POS))
#define EF_CTRL_EF_IF_CYC_RD_DAT                                EF_CTRL_EF_IF_CYC_RD_DAT
#define EF_CTRL_EF_IF_CYC_RD_DAT_POS                            (6U)
#define EF_CTRL_EF_IF_CYC_RD_DAT_LEN                            (6U)
#define EF_CTRL_EF_IF_CYC_RD_DAT_MSK                            (((1U<<EF_CTRL_EF_IF_CYC_RD_DAT_LEN)-1)<<EF_CTRL_EF_IF_CYC_RD_DAT_POS)
#define EF_CTRL_EF_IF_CYC_RD_DAT_UMSK                           (~(((1U<<EF_CTRL_EF_IF_CYC_RD_DAT_LEN)-1)<<EF_CTRL_EF_IF_CYC_RD_DAT_POS))
#define EF_CTRL_EF_IF_CYC_RD_ADR                                EF_CTRL_EF_IF_CYC_RD_ADR
#define EF_CTRL_EF_IF_CYC_RD_ADR_POS                            (12U)
#define EF_CTRL_EF_IF_CYC_RD_ADR_LEN                            (6U)
#define EF_CTRL_EF_IF_CYC_RD_ADR_MSK                            (((1U<<EF_CTRL_EF_IF_CYC_RD_ADR_LEN)-1)<<EF_CTRL_EF_IF_CYC_RD_ADR_POS)
#define EF_CTRL_EF_IF_CYC_RD_ADR_UMSK                           (~(((1U<<EF_CTRL_EF_IF_CYC_RD_ADR_LEN)-1)<<EF_CTRL_EF_IF_CYC_RD_ADR_POS))
#define EF_CTRL_EF_IF_CYC_CS                                    EF_CTRL_EF_IF_CYC_CS
#define EF_CTRL_EF_IF_CYC_CS_POS                                (18U)
#define EF_CTRL_EF_IF_CYC_CS_LEN                                (6U)
#define EF_CTRL_EF_IF_CYC_CS_MSK                                (((1U<<EF_CTRL_EF_IF_CYC_CS_LEN)-1)<<EF_CTRL_EF_IF_CYC_CS_POS)
#define EF_CTRL_EF_IF_CYC_CS_UMSK                               (~(((1U<<EF_CTRL_EF_IF_CYC_CS_LEN)-1)<<EF_CTRL_EF_IF_CYC_CS_POS))
#define EF_CTRL_EF_IF_CYC_PD_CS_S                               EF_CTRL_EF_IF_CYC_PD_CS_S
#define EF_CTRL_EF_IF_CYC_PD_CS_S_POS                           (24U)
#define EF_CTRL_EF_IF_CYC_PD_CS_S_LEN                           (8U)
#define EF_CTRL_EF_IF_CYC_PD_CS_S_MSK                           (((1U<<EF_CTRL_EF_IF_CYC_PD_CS_S_LEN)-1)<<EF_CTRL_EF_IF_CYC_PD_CS_S_POS)
#define EF_CTRL_EF_IF_CYC_PD_CS_S_UMSK                          (~(((1U<<EF_CTRL_EF_IF_CYC_PD_CS_S_LEN)-1)<<EF_CTRL_EF_IF_CYC_PD_CS_S_POS))

/* 0x808 : ef_if_cyc_1 */
#define EF_CTRL_EF_IF_CYC_1_OFFSET                              (0x808)
#define EF_CTRL_EF_IF_CYC_PI                                    EF_CTRL_EF_IF_CYC_PI
#define EF_CTRL_EF_IF_CYC_PI_POS                                (0U)
#define EF_CTRL_EF_IF_CYC_PI_LEN                                (6U)
#define EF_CTRL_EF_IF_CYC_PI_MSK                                (((1U<<EF_CTRL_EF_IF_CYC_PI_LEN)-1)<<EF_CTRL_EF_IF_CYC_PI_POS)
#define EF_CTRL_EF_IF_CYC_PI_UMSK                               (~(((1U<<EF_CTRL_EF_IF_CYC_PI_LEN)-1)<<EF_CTRL_EF_IF_CYC_PI_POS))
#define EF_CTRL_EF_IF_CYC_PP                                    EF_CTRL_EF_IF_CYC_PP
#define EF_CTRL_EF_IF_CYC_PP_POS                                (6U)
#define EF_CTRL_EF_IF_CYC_PP_LEN                                (8U)
#define EF_CTRL_EF_IF_CYC_PP_MSK                                (((1U<<EF_CTRL_EF_IF_CYC_PP_LEN)-1)<<EF_CTRL_EF_IF_CYC_PP_POS)
#define EF_CTRL_EF_IF_CYC_PP_UMSK                               (~(((1U<<EF_CTRL_EF_IF_CYC_PP_LEN)-1)<<EF_CTRL_EF_IF_CYC_PP_POS))
#define EF_CTRL_EF_IF_CYC_WR_ADR                                EF_CTRL_EF_IF_CYC_WR_ADR
#define EF_CTRL_EF_IF_CYC_WR_ADR_POS                            (14U)
#define EF_CTRL_EF_IF_CYC_WR_ADR_LEN                            (6U)
#define EF_CTRL_EF_IF_CYC_WR_ADR_MSK                            (((1U<<EF_CTRL_EF_IF_CYC_WR_ADR_LEN)-1)<<EF_CTRL_EF_IF_CYC_WR_ADR_POS)
#define EF_CTRL_EF_IF_CYC_WR_ADR_UMSK                           (~(((1U<<EF_CTRL_EF_IF_CYC_WR_ADR_LEN)-1)<<EF_CTRL_EF_IF_CYC_WR_ADR_POS))
#define EF_CTRL_EF_IF_CYC_PS_CS                                 EF_CTRL_EF_IF_CYC_PS_CS
#define EF_CTRL_EF_IF_CYC_PS_CS_POS                             (20U)
#define EF_CTRL_EF_IF_CYC_PS_CS_LEN                             (6U)
#define EF_CTRL_EF_IF_CYC_PS_CS_MSK                             (((1U<<EF_CTRL_EF_IF_CYC_PS_CS_LEN)-1)<<EF_CTRL_EF_IF_CYC_PS_CS_POS)
#define EF_CTRL_EF_IF_CYC_PS_CS_UMSK                            (~(((1U<<EF_CTRL_EF_IF_CYC_PS_CS_LEN)-1)<<EF_CTRL_EF_IF_CYC_PS_CS_POS))
#define EF_CTRL_EF_IF_CYC_PD_CS_H                               EF_CTRL_EF_IF_CYC_PD_CS_H
#define EF_CTRL_EF_IF_CYC_PD_CS_H_POS                           (26U)
#define EF_CTRL_EF_IF_CYC_PD_CS_H_LEN                           (6U)
#define EF_CTRL_EF_IF_CYC_PD_CS_H_MSK                           (((1U<<EF_CTRL_EF_IF_CYC_PD_CS_H_LEN)-1)<<EF_CTRL_EF_IF_CYC_PD_CS_H_POS)
#define EF_CTRL_EF_IF_CYC_PD_CS_H_UMSK                          (~(((1U<<EF_CTRL_EF_IF_CYC_PD_CS_H_LEN)-1)<<EF_CTRL_EF_IF_CYC_PD_CS_H_POS))

/* 0x80C : ef_if_0_manual */
#define EF_CTRL_EF_IF_0_MANUAL_OFFSET                           (0x80C)
#define EF_CTRL_EF_IF_A                                         EF_CTRL_EF_IF_A
#define EF_CTRL_EF_IF_A_POS                                     (0U)
#define EF_CTRL_EF_IF_A_LEN                                     (10U)
#define EF_CTRL_EF_IF_A_MSK                                     (((1U<<EF_CTRL_EF_IF_A_LEN)-1)<<EF_CTRL_EF_IF_A_POS)
#define EF_CTRL_EF_IF_A_UMSK                                    (~(((1U<<EF_CTRL_EF_IF_A_LEN)-1)<<EF_CTRL_EF_IF_A_POS))
#define EF_CTRL_EF_IF_PD                                        EF_CTRL_EF_IF_PD
#define EF_CTRL_EF_IF_PD_POS                                    (10U)
#define EF_CTRL_EF_IF_PD_LEN                                    (1U)
#define EF_CTRL_EF_IF_PD_MSK                                    (((1U<<EF_CTRL_EF_IF_PD_LEN)-1)<<EF_CTRL_EF_IF_PD_POS)
#define EF_CTRL_EF_IF_PD_UMSK                                   (~(((1U<<EF_CTRL_EF_IF_PD_LEN)-1)<<EF_CTRL_EF_IF_PD_POS))
#define EF_CTRL_EF_IF_PS                                        EF_CTRL_EF_IF_PS
#define EF_CTRL_EF_IF_PS_POS                                    (11U)
#define EF_CTRL_EF_IF_PS_LEN                                    (1U)
#define EF_CTRL_EF_IF_PS_MSK                                    (((1U<<EF_CTRL_EF_IF_PS_LEN)-1)<<EF_CTRL_EF_IF_PS_POS)
#define EF_CTRL_EF_IF_PS_UMSK                                   (~(((1U<<EF_CTRL_EF_IF_PS_LEN)-1)<<EF_CTRL_EF_IF_PS_POS))
#define EF_CTRL_EF_IF_STROBE                                    EF_CTRL_EF_IF_STROBE
#define EF_CTRL_EF_IF_STROBE_POS                                (12U)
#define EF_CTRL_EF_IF_STROBE_LEN                                (1U)
#define EF_CTRL_EF_IF_STROBE_MSK                                (((1U<<EF_CTRL_EF_IF_STROBE_LEN)-1)<<EF_CTRL_EF_IF_STROBE_POS)
#define EF_CTRL_EF_IF_STROBE_UMSK                               (~(((1U<<EF_CTRL_EF_IF_STROBE_LEN)-1)<<EF_CTRL_EF_IF_STROBE_POS))
#define EF_CTRL_EF_IF_PGENB                                     EF_CTRL_EF_IF_PGENB
#define EF_CTRL_EF_IF_PGENB_POS                                 (13U)
#define EF_CTRL_EF_IF_PGENB_LEN                                 (1U)
#define EF_CTRL_EF_IF_PGENB_MSK                                 (((1U<<EF_CTRL_EF_IF_PGENB_LEN)-1)<<EF_CTRL_EF_IF_PGENB_POS)
#define EF_CTRL_EF_IF_PGENB_UMSK                                (~(((1U<<EF_CTRL_EF_IF_PGENB_LEN)-1)<<EF_CTRL_EF_IF_PGENB_POS))
#define EF_CTRL_EF_IF_LOAD                                      EF_CTRL_EF_IF_LOAD
#define EF_CTRL_EF_IF_LOAD_POS                                  (14U)
#define EF_CTRL_EF_IF_LOAD_LEN                                  (1U)
#define EF_CTRL_EF_IF_LOAD_MSK                                  (((1U<<EF_CTRL_EF_IF_LOAD_LEN)-1)<<EF_CTRL_EF_IF_LOAD_POS)
#define EF_CTRL_EF_IF_LOAD_UMSK                                 (~(((1U<<EF_CTRL_EF_IF_LOAD_LEN)-1)<<EF_CTRL_EF_IF_LOAD_POS))
#define EF_CTRL_EF_IF_CSB                                       EF_CTRL_EF_IF_CSB
#define EF_CTRL_EF_IF_CSB_POS                                   (15U)
#define EF_CTRL_EF_IF_CSB_LEN                                   (1U)
#define EF_CTRL_EF_IF_CSB_MSK                                   (((1U<<EF_CTRL_EF_IF_CSB_LEN)-1)<<EF_CTRL_EF_IF_CSB_POS)
#define EF_CTRL_EF_IF_CSB_UMSK                                  (~(((1U<<EF_CTRL_EF_IF_CSB_LEN)-1)<<EF_CTRL_EF_IF_CSB_POS))
#define EF_CTRL_EF_IF_0_Q                                       EF_CTRL_EF_IF_0_Q
#define EF_CTRL_EF_IF_0_Q_POS                                   (16U)
#define EF_CTRL_EF_IF_0_Q_LEN                                   (8U)
#define EF_CTRL_EF_IF_0_Q_MSK                                   (((1U<<EF_CTRL_EF_IF_0_Q_LEN)-1)<<EF_CTRL_EF_IF_0_Q_POS)
#define EF_CTRL_EF_IF_0_Q_UMSK                                  (~(((1U<<EF_CTRL_EF_IF_0_Q_LEN)-1)<<EF_CTRL_EF_IF_0_Q_POS))
#define EF_CTRL_EF_IF_PROT_CODE_MANUAL                          EF_CTRL_EF_IF_PROT_CODE_MANUAL
#define EF_CTRL_EF_IF_PROT_CODE_MANUAL_POS                      (24U)
#define EF_CTRL_EF_IF_PROT_CODE_MANUAL_LEN                      (8U)
#define EF_CTRL_EF_IF_PROT_CODE_MANUAL_MSK                      (((1U<<EF_CTRL_EF_IF_PROT_CODE_MANUAL_LEN)-1)<<EF_CTRL_EF_IF_PROT_CODE_MANUAL_POS)
#define EF_CTRL_EF_IF_PROT_CODE_MANUAL_UMSK                     (~(((1U<<EF_CTRL_EF_IF_PROT_CODE_MANUAL_LEN)-1)<<EF_CTRL_EF_IF_PROT_CODE_MANUAL_POS))

/* 0x810 : ef_if_0_status */
#define EF_CTRL_EF_IF_0_STATUS_OFFSET                           (0x810)
#define EF_CTRL_EF_IF_0_STATUS                                  EF_CTRL_EF_IF_0_STATUS
#define EF_CTRL_EF_IF_0_STATUS_POS                              (0U)
#define EF_CTRL_EF_IF_0_STATUS_LEN                              (32U)
#define EF_CTRL_EF_IF_0_STATUS_MSK                              (((1U<<EF_CTRL_EF_IF_0_STATUS_LEN)-1)<<EF_CTRL_EF_IF_0_STATUS_POS)
#define EF_CTRL_EF_IF_0_STATUS_UMSK                             (~(((1U<<EF_CTRL_EF_IF_0_STATUS_LEN)-1)<<EF_CTRL_EF_IF_0_STATUS_POS))

/* 0x814 : ef_if_cfg_0 */
#define EF_CTRL_EF_IF_CFG_0_OFFSET                              (0x814)
#define EF_CTRL_EF_IF_SF_AES_MODE                               EF_CTRL_EF_IF_SF_AES_MODE
#define EF_CTRL_EF_IF_SF_AES_MODE_POS                           (0U)
#define EF_CTRL_EF_IF_SF_AES_MODE_LEN                           (2U)
#define EF_CTRL_EF_IF_SF_AES_MODE_MSK                           (((1U<<EF_CTRL_EF_IF_SF_AES_MODE_LEN)-1)<<EF_CTRL_EF_IF_SF_AES_MODE_POS)
#define EF_CTRL_EF_IF_SF_AES_MODE_UMSK                          (~(((1U<<EF_CTRL_EF_IF_SF_AES_MODE_LEN)-1)<<EF_CTRL_EF_IF_SF_AES_MODE_POS))
#define EF_CTRL_EF_IF_SBOOT_SIGN_MODE                           EF_CTRL_EF_IF_SBOOT_SIGN_MODE
#define EF_CTRL_EF_IF_SBOOT_SIGN_MODE_POS                       (2U)
#define EF_CTRL_EF_IF_SBOOT_SIGN_MODE_LEN                       (2U)
#define EF_CTRL_EF_IF_SBOOT_SIGN_MODE_MSK                       (((1U<<EF_CTRL_EF_IF_SBOOT_SIGN_MODE_LEN)-1)<<EF_CTRL_EF_IF_SBOOT_SIGN_MODE_POS)
#define EF_CTRL_EF_IF_SBOOT_SIGN_MODE_UMSK                      (~(((1U<<EF_CTRL_EF_IF_SBOOT_SIGN_MODE_LEN)-1)<<EF_CTRL_EF_IF_SBOOT_SIGN_MODE_POS))
#define EF_CTRL_EF_IF_SBOOT_EN                                  EF_CTRL_EF_IF_SBOOT_EN
#define EF_CTRL_EF_IF_SBOOT_EN_POS                              (4U)
#define EF_CTRL_EF_IF_SBOOT_EN_LEN                              (2U)
#define EF_CTRL_EF_IF_SBOOT_EN_MSK                              (((1U<<EF_CTRL_EF_IF_SBOOT_EN_LEN)-1)<<EF_CTRL_EF_IF_SBOOT_EN_POS)
#define EF_CTRL_EF_IF_SBOOT_EN_UMSK                             (~(((1U<<EF_CTRL_EF_IF_SBOOT_EN_LEN)-1)<<EF_CTRL_EF_IF_SBOOT_EN_POS))
#define EF_CTRL_EF_IF_CPU1_ENC_EN                               EF_CTRL_EF_IF_CPU1_ENC_EN
#define EF_CTRL_EF_IF_CPU1_ENC_EN_POS                           (6U)
#define EF_CTRL_EF_IF_CPU1_ENC_EN_LEN                           (1U)
#define EF_CTRL_EF_IF_CPU1_ENC_EN_MSK                           (((1U<<EF_CTRL_EF_IF_CPU1_ENC_EN_LEN)-1)<<EF_CTRL_EF_IF_CPU1_ENC_EN_POS)
#define EF_CTRL_EF_IF_CPU1_ENC_EN_UMSK                          (~(((1U<<EF_CTRL_EF_IF_CPU1_ENC_EN_LEN)-1)<<EF_CTRL_EF_IF_CPU1_ENC_EN_POS))
#define EF_CTRL_EF_IF_CPU0_ENC_EN                               EF_CTRL_EF_IF_CPU0_ENC_EN
#define EF_CTRL_EF_IF_CPU0_ENC_EN_POS                           (7U)
#define EF_CTRL_EF_IF_CPU0_ENC_EN_LEN                           (1U)
#define EF_CTRL_EF_IF_CPU0_ENC_EN_MSK                           (((1U<<EF_CTRL_EF_IF_CPU0_ENC_EN_LEN)-1)<<EF_CTRL_EF_IF_CPU0_ENC_EN_POS)
#define EF_CTRL_EF_IF_CPU0_ENC_EN_UMSK                          (~(((1U<<EF_CTRL_EF_IF_CPU0_ENC_EN_LEN)-1)<<EF_CTRL_EF_IF_CPU0_ENC_EN_POS))
#define EF_CTRL_EF_IF_BOOT_SEL                                  EF_CTRL_EF_IF_BOOT_SEL
#define EF_CTRL_EF_IF_BOOT_SEL_POS                              (8U)
#define EF_CTRL_EF_IF_BOOT_SEL_LEN                              (4U)
#define EF_CTRL_EF_IF_BOOT_SEL_MSK                              (((1U<<EF_CTRL_EF_IF_BOOT_SEL_LEN)-1)<<EF_CTRL_EF_IF_BOOT_SEL_POS)
#define EF_CTRL_EF_IF_BOOT_SEL_UMSK                             (~(((1U<<EF_CTRL_EF_IF_BOOT_SEL_LEN)-1)<<EF_CTRL_EF_IF_BOOT_SEL_POS))
#define EF_CTRL_EF_IF_SW_USAGE_1                                EF_CTRL_EF_IF_SW_USAGE_1
#define EF_CTRL_EF_IF_SW_USAGE_1_POS                            (12U)
#define EF_CTRL_EF_IF_SW_USAGE_1_LEN                            (2U)
#define EF_CTRL_EF_IF_SW_USAGE_1_MSK                            (((1U<<EF_CTRL_EF_IF_SW_USAGE_1_LEN)-1)<<EF_CTRL_EF_IF_SW_USAGE_1_POS)
#define EF_CTRL_EF_IF_SW_USAGE_1_UMSK                           (~(((1U<<EF_CTRL_EF_IF_SW_USAGE_1_LEN)-1)<<EF_CTRL_EF_IF_SW_USAGE_1_POS))
#define EF_CTRL_EF_IF_SDU_DIS                                   EF_CTRL_EF_IF_SDU_DIS
#define EF_CTRL_EF_IF_SDU_DIS_POS                               (14U)
#define EF_CTRL_EF_IF_SDU_DIS_LEN                               (1U)
#define EF_CTRL_EF_IF_SDU_DIS_MSK                               (((1U<<EF_CTRL_EF_IF_SDU_DIS_LEN)-1)<<EF_CTRL_EF_IF_SDU_DIS_POS)
#define EF_CTRL_EF_IF_SDU_DIS_UMSK                              (~(((1U<<EF_CTRL_EF_IF_SDU_DIS_LEN)-1)<<EF_CTRL_EF_IF_SDU_DIS_POS))
#define EF_CTRL_EF_IF_BLE_DIS                                   EF_CTRL_EF_IF_BLE_DIS
#define EF_CTRL_EF_IF_BLE_DIS_POS                               (15U)
#define EF_CTRL_EF_IF_BLE_DIS_LEN                               (1U)
#define EF_CTRL_EF_IF_BLE_DIS_MSK                               (((1U<<EF_CTRL_EF_IF_BLE_DIS_LEN)-1)<<EF_CTRL_EF_IF_BLE_DIS_POS)
#define EF_CTRL_EF_IF_BLE_DIS_UMSK                              (~(((1U<<EF_CTRL_EF_IF_BLE_DIS_LEN)-1)<<EF_CTRL_EF_IF_BLE_DIS_POS))
#define EF_CTRL_EF_IF_WIFI_DIS                                  EF_CTRL_EF_IF_WIFI_DIS
#define EF_CTRL_EF_IF_WIFI_DIS_POS                              (16U)
#define EF_CTRL_EF_IF_WIFI_DIS_LEN                              (1U)
#define EF_CTRL_EF_IF_WIFI_DIS_MSK                              (((1U<<EF_CTRL_EF_IF_WIFI_DIS_LEN)-1)<<EF_CTRL_EF_IF_WIFI_DIS_POS)
#define EF_CTRL_EF_IF_WIFI_DIS_UMSK                             (~(((1U<<EF_CTRL_EF_IF_WIFI_DIS_LEN)-1)<<EF_CTRL_EF_IF_WIFI_DIS_POS))
#define EF_CTRL_EF_IF_0_KEY_ENC_EN                              EF_CTRL_EF_IF_0_KEY_ENC_EN
#define EF_CTRL_EF_IF_0_KEY_ENC_EN_POS                          (17U)
#define EF_CTRL_EF_IF_0_KEY_ENC_EN_LEN                          (1U)
#define EF_CTRL_EF_IF_0_KEY_ENC_EN_MSK                          (((1U<<EF_CTRL_EF_IF_0_KEY_ENC_EN_LEN)-1)<<EF_CTRL_EF_IF_0_KEY_ENC_EN_POS)
#define EF_CTRL_EF_IF_0_KEY_ENC_EN_UMSK                         (~(((1U<<EF_CTRL_EF_IF_0_KEY_ENC_EN_LEN)-1)<<EF_CTRL_EF_IF_0_KEY_ENC_EN_POS))
#define EF_CTRL_EF_IF_CAM_DIS                                   EF_CTRL_EF_IF_CAM_DIS
#define EF_CTRL_EF_IF_CAM_DIS_POS                               (18U)
#define EF_CTRL_EF_IF_CAM_DIS_LEN                               (1U)
#define EF_CTRL_EF_IF_CAM_DIS_MSK                               (((1U<<EF_CTRL_EF_IF_CAM_DIS_LEN)-1)<<EF_CTRL_EF_IF_CAM_DIS_POS)
#define EF_CTRL_EF_IF_CAM_DIS_UMSK                              (~(((1U<<EF_CTRL_EF_IF_CAM_DIS_LEN)-1)<<EF_CTRL_EF_IF_CAM_DIS_POS))
#define EF_CTRL_EF_IF_SF_DIS                                    EF_CTRL_EF_IF_SF_DIS
#define EF_CTRL_EF_IF_SF_DIS_POS                                (19U)
#define EF_CTRL_EF_IF_SF_DIS_LEN                                (1U)
#define EF_CTRL_EF_IF_SF_DIS_MSK                                (((1U<<EF_CTRL_EF_IF_SF_DIS_LEN)-1)<<EF_CTRL_EF_IF_SF_DIS_POS)
#define EF_CTRL_EF_IF_SF_DIS_UMSK                               (~(((1U<<EF_CTRL_EF_IF_SF_DIS_LEN)-1)<<EF_CTRL_EF_IF_SF_DIS_POS))
#define EF_CTRL_EF_IF_CPU1_DIS                                  EF_CTRL_EF_IF_CPU1_DIS
#define EF_CTRL_EF_IF_CPU1_DIS_POS                              (20U)
#define EF_CTRL_EF_IF_CPU1_DIS_LEN                              (1U)
#define EF_CTRL_EF_IF_CPU1_DIS_MSK                              (((1U<<EF_CTRL_EF_IF_CPU1_DIS_LEN)-1)<<EF_CTRL_EF_IF_CPU1_DIS_POS)
#define EF_CTRL_EF_IF_CPU1_DIS_UMSK                             (~(((1U<<EF_CTRL_EF_IF_CPU1_DIS_LEN)-1)<<EF_CTRL_EF_IF_CPU1_DIS_POS))
#define EF_CTRL_EF_IF_CPU_RST_DBG_DIS                           EF_CTRL_EF_IF_CPU_RST_DBG_DIS
#define EF_CTRL_EF_IF_CPU_RST_DBG_DIS_POS                       (21U)
#define EF_CTRL_EF_IF_CPU_RST_DBG_DIS_LEN                       (1U)
#define EF_CTRL_EF_IF_CPU_RST_DBG_DIS_MSK                       (((1U<<EF_CTRL_EF_IF_CPU_RST_DBG_DIS_LEN)-1)<<EF_CTRL_EF_IF_CPU_RST_DBG_DIS_POS)
#define EF_CTRL_EF_IF_CPU_RST_DBG_DIS_UMSK                      (~(((1U<<EF_CTRL_EF_IF_CPU_RST_DBG_DIS_LEN)-1)<<EF_CTRL_EF_IF_CPU_RST_DBG_DIS_POS))
#define EF_CTRL_EF_IF_SE_DBG_DIS                                EF_CTRL_EF_IF_SE_DBG_DIS
#define EF_CTRL_EF_IF_SE_DBG_DIS_POS                            (22U)
#define EF_CTRL_EF_IF_SE_DBG_DIS_LEN                            (1U)
#define EF_CTRL_EF_IF_SE_DBG_DIS_MSK                            (((1U<<EF_CTRL_EF_IF_SE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_IF_SE_DBG_DIS_POS)
#define EF_CTRL_EF_IF_SE_DBG_DIS_UMSK                           (~(((1U<<EF_CTRL_EF_IF_SE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_IF_SE_DBG_DIS_POS))
#define EF_CTRL_EF_IF_EFUSE_DBG_DIS                             EF_CTRL_EF_IF_EFUSE_DBG_DIS
#define EF_CTRL_EF_IF_EFUSE_DBG_DIS_POS                         (23U)
#define EF_CTRL_EF_IF_EFUSE_DBG_DIS_LEN                         (1U)
#define EF_CTRL_EF_IF_EFUSE_DBG_DIS_MSK                         (((1U<<EF_CTRL_EF_IF_EFUSE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_IF_EFUSE_DBG_DIS_POS)
#define EF_CTRL_EF_IF_EFUSE_DBG_DIS_UMSK                        (~(((1U<<EF_CTRL_EF_IF_EFUSE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_IF_EFUSE_DBG_DIS_POS))
#define EF_CTRL_EF_IF_DBG_JTAG_1_DIS                            EF_CTRL_EF_IF_DBG_JTAG_1_DIS
#define EF_CTRL_EF_IF_DBG_JTAG_1_DIS_POS                        (24U)
#define EF_CTRL_EF_IF_DBG_JTAG_1_DIS_LEN                        (2U)
#define EF_CTRL_EF_IF_DBG_JTAG_1_DIS_MSK                        (((1U<<EF_CTRL_EF_IF_DBG_JTAG_1_DIS_LEN)-1)<<EF_CTRL_EF_IF_DBG_JTAG_1_DIS_POS)
#define EF_CTRL_EF_IF_DBG_JTAG_1_DIS_UMSK                       (~(((1U<<EF_CTRL_EF_IF_DBG_JTAG_1_DIS_LEN)-1)<<EF_CTRL_EF_IF_DBG_JTAG_1_DIS_POS))
#define EF_CTRL_EF_IF_DBG_JTAG_0_DIS                            EF_CTRL_EF_IF_DBG_JTAG_0_DIS
#define EF_CTRL_EF_IF_DBG_JTAG_0_DIS_POS                        (26U)
#define EF_CTRL_EF_IF_DBG_JTAG_0_DIS_LEN                        (2U)
#define EF_CTRL_EF_IF_DBG_JTAG_0_DIS_MSK                        (((1U<<EF_CTRL_EF_IF_DBG_JTAG_0_DIS_LEN)-1)<<EF_CTRL_EF_IF_DBG_JTAG_0_DIS_POS)
#define EF_CTRL_EF_IF_DBG_JTAG_0_DIS_UMSK                       (~(((1U<<EF_CTRL_EF_IF_DBG_JTAG_0_DIS_LEN)-1)<<EF_CTRL_EF_IF_DBG_JTAG_0_DIS_POS))
#define EF_CTRL_EF_IF_DBG_MODE                                  EF_CTRL_EF_IF_DBG_MODE
#define EF_CTRL_EF_IF_DBG_MODE_POS                              (28U)
#define EF_CTRL_EF_IF_DBG_MODE_LEN                              (4U)
#define EF_CTRL_EF_IF_DBG_MODE_MSK                              (((1U<<EF_CTRL_EF_IF_DBG_MODE_LEN)-1)<<EF_CTRL_EF_IF_DBG_MODE_POS)
#define EF_CTRL_EF_IF_DBG_MODE_UMSK                             (~(((1U<<EF_CTRL_EF_IF_DBG_MODE_LEN)-1)<<EF_CTRL_EF_IF_DBG_MODE_POS))

/* 0x818 : ef_sw_cfg_0 */
#define EF_CTRL_EF_SW_CFG_0_OFFSET                              (0x818)
#define EF_CTRL_EF_SW_SF_AES_MODE                               EF_CTRL_EF_SW_SF_AES_MODE
#define EF_CTRL_EF_SW_SF_AES_MODE_POS                           (0U)
#define EF_CTRL_EF_SW_SF_AES_MODE_LEN                           (2U)
#define EF_CTRL_EF_SW_SF_AES_MODE_MSK                           (((1U<<EF_CTRL_EF_SW_SF_AES_MODE_LEN)-1)<<EF_CTRL_EF_SW_SF_AES_MODE_POS)
#define EF_CTRL_EF_SW_SF_AES_MODE_UMSK                          (~(((1U<<EF_CTRL_EF_SW_SF_AES_MODE_LEN)-1)<<EF_CTRL_EF_SW_SF_AES_MODE_POS))
#define EF_CTRL_EF_SW_SBOOT_SIGN_MODE                           EF_CTRL_EF_SW_SBOOT_SIGN_MODE
#define EF_CTRL_EF_SW_SBOOT_SIGN_MODE_POS                       (2U)
#define EF_CTRL_EF_SW_SBOOT_SIGN_MODE_LEN                       (2U)
#define EF_CTRL_EF_SW_SBOOT_SIGN_MODE_MSK                       (((1U<<EF_CTRL_EF_SW_SBOOT_SIGN_MODE_LEN)-1)<<EF_CTRL_EF_SW_SBOOT_SIGN_MODE_POS)
#define EF_CTRL_EF_SW_SBOOT_SIGN_MODE_UMSK                      (~(((1U<<EF_CTRL_EF_SW_SBOOT_SIGN_MODE_LEN)-1)<<EF_CTRL_EF_SW_SBOOT_SIGN_MODE_POS))
#define EF_CTRL_EF_SW_SBOOT_EN                                  EF_CTRL_EF_SW_SBOOT_EN
#define EF_CTRL_EF_SW_SBOOT_EN_POS                              (4U)
#define EF_CTRL_EF_SW_SBOOT_EN_LEN                              (2U)
#define EF_CTRL_EF_SW_SBOOT_EN_MSK                              (((1U<<EF_CTRL_EF_SW_SBOOT_EN_LEN)-1)<<EF_CTRL_EF_SW_SBOOT_EN_POS)
#define EF_CTRL_EF_SW_SBOOT_EN_UMSK                             (~(((1U<<EF_CTRL_EF_SW_SBOOT_EN_LEN)-1)<<EF_CTRL_EF_SW_SBOOT_EN_POS))
#define EF_CTRL_EF_SW_CPU1_ENC_EN                               EF_CTRL_EF_SW_CPU1_ENC_EN
#define EF_CTRL_EF_SW_CPU1_ENC_EN_POS                           (6U)
#define EF_CTRL_EF_SW_CPU1_ENC_EN_LEN                           (1U)
#define EF_CTRL_EF_SW_CPU1_ENC_EN_MSK                           (((1U<<EF_CTRL_EF_SW_CPU1_ENC_EN_LEN)-1)<<EF_CTRL_EF_SW_CPU1_ENC_EN_POS)
#define EF_CTRL_EF_SW_CPU1_ENC_EN_UMSK                          (~(((1U<<EF_CTRL_EF_SW_CPU1_ENC_EN_LEN)-1)<<EF_CTRL_EF_SW_CPU1_ENC_EN_POS))
#define EF_CTRL_EF_SW_CPU0_ENC_EN                               EF_CTRL_EF_SW_CPU0_ENC_EN
#define EF_CTRL_EF_SW_CPU0_ENC_EN_POS                           (7U)
#define EF_CTRL_EF_SW_CPU0_ENC_EN_LEN                           (1U)
#define EF_CTRL_EF_SW_CPU0_ENC_EN_MSK                           (((1U<<EF_CTRL_EF_SW_CPU0_ENC_EN_LEN)-1)<<EF_CTRL_EF_SW_CPU0_ENC_EN_POS)
#define EF_CTRL_EF_SW_CPU0_ENC_EN_UMSK                          (~(((1U<<EF_CTRL_EF_SW_CPU0_ENC_EN_LEN)-1)<<EF_CTRL_EF_SW_CPU0_ENC_EN_POS))
#define EF_CTRL_EF_SW_SW_USAGE_1                                EF_CTRL_EF_SW_SW_USAGE_1
#define EF_CTRL_EF_SW_SW_USAGE_1_POS                            (12U)
#define EF_CTRL_EF_SW_SW_USAGE_1_LEN                            (2U)
#define EF_CTRL_EF_SW_SW_USAGE_1_MSK                            (((1U<<EF_CTRL_EF_SW_SW_USAGE_1_LEN)-1)<<EF_CTRL_EF_SW_SW_USAGE_1_POS)
#define EF_CTRL_EF_SW_SW_USAGE_1_UMSK                           (~(((1U<<EF_CTRL_EF_SW_SW_USAGE_1_LEN)-1)<<EF_CTRL_EF_SW_SW_USAGE_1_POS))
#define EF_CTRL_EF_SW_SDU_DIS                                   EF_CTRL_EF_SW_SDU_DIS
#define EF_CTRL_EF_SW_SDU_DIS_POS                               (14U)
#define EF_CTRL_EF_SW_SDU_DIS_LEN                               (1U)
#define EF_CTRL_EF_SW_SDU_DIS_MSK                               (((1U<<EF_CTRL_EF_SW_SDU_DIS_LEN)-1)<<EF_CTRL_EF_SW_SDU_DIS_POS)
#define EF_CTRL_EF_SW_SDU_DIS_UMSK                              (~(((1U<<EF_CTRL_EF_SW_SDU_DIS_LEN)-1)<<EF_CTRL_EF_SW_SDU_DIS_POS))
#define EF_CTRL_EF_SW_BLE_DIS                                   EF_CTRL_EF_SW_BLE_DIS
#define EF_CTRL_EF_SW_BLE_DIS_POS                               (15U)
#define EF_CTRL_EF_SW_BLE_DIS_LEN                               (1U)
#define EF_CTRL_EF_SW_BLE_DIS_MSK                               (((1U<<EF_CTRL_EF_SW_BLE_DIS_LEN)-1)<<EF_CTRL_EF_SW_BLE_DIS_POS)
#define EF_CTRL_EF_SW_BLE_DIS_UMSK                              (~(((1U<<EF_CTRL_EF_SW_BLE_DIS_LEN)-1)<<EF_CTRL_EF_SW_BLE_DIS_POS))
#define EF_CTRL_EF_SW_WIFI_DIS                                  EF_CTRL_EF_SW_WIFI_DIS
#define EF_CTRL_EF_SW_WIFI_DIS_POS                              (16U)
#define EF_CTRL_EF_SW_WIFI_DIS_LEN                              (1U)
#define EF_CTRL_EF_SW_WIFI_DIS_MSK                              (((1U<<EF_CTRL_EF_SW_WIFI_DIS_LEN)-1)<<EF_CTRL_EF_SW_WIFI_DIS_POS)
#define EF_CTRL_EF_SW_WIFI_DIS_UMSK                             (~(((1U<<EF_CTRL_EF_SW_WIFI_DIS_LEN)-1)<<EF_CTRL_EF_SW_WIFI_DIS_POS))
#define EF_CTRL_EF_SW_0_KEY_ENC_EN                              EF_CTRL_EF_SW_0_KEY_ENC_EN
#define EF_CTRL_EF_SW_0_KEY_ENC_EN_POS                          (17U)
#define EF_CTRL_EF_SW_0_KEY_ENC_EN_LEN                          (1U)
#define EF_CTRL_EF_SW_0_KEY_ENC_EN_MSK                          (((1U<<EF_CTRL_EF_SW_0_KEY_ENC_EN_LEN)-1)<<EF_CTRL_EF_SW_0_KEY_ENC_EN_POS)
#define EF_CTRL_EF_SW_0_KEY_ENC_EN_UMSK                         (~(((1U<<EF_CTRL_EF_SW_0_KEY_ENC_EN_LEN)-1)<<EF_CTRL_EF_SW_0_KEY_ENC_EN_POS))
#define EF_CTRL_EF_SW_CAM_DIS                                   EF_CTRL_EF_SW_CAM_DIS
#define EF_CTRL_EF_SW_CAM_DIS_POS                               (18U)
#define EF_CTRL_EF_SW_CAM_DIS_LEN                               (1U)
#define EF_CTRL_EF_SW_CAM_DIS_MSK                               (((1U<<EF_CTRL_EF_SW_CAM_DIS_LEN)-1)<<EF_CTRL_EF_SW_CAM_DIS_POS)
#define EF_CTRL_EF_SW_CAM_DIS_UMSK                              (~(((1U<<EF_CTRL_EF_SW_CAM_DIS_LEN)-1)<<EF_CTRL_EF_SW_CAM_DIS_POS))
#define EF_CTRL_EF_SW_SF_DIS                                    EF_CTRL_EF_SW_SF_DIS
#define EF_CTRL_EF_SW_SF_DIS_POS                                (19U)
#define EF_CTRL_EF_SW_SF_DIS_LEN                                (1U)
#define EF_CTRL_EF_SW_SF_DIS_MSK                                (((1U<<EF_CTRL_EF_SW_SF_DIS_LEN)-1)<<EF_CTRL_EF_SW_SF_DIS_POS)
#define EF_CTRL_EF_SW_SF_DIS_UMSK                               (~(((1U<<EF_CTRL_EF_SW_SF_DIS_LEN)-1)<<EF_CTRL_EF_SW_SF_DIS_POS))
#define EF_CTRL_EF_SW_CPU1_DIS                                  EF_CTRL_EF_SW_CPU1_DIS
#define EF_CTRL_EF_SW_CPU1_DIS_POS                              (20U)
#define EF_CTRL_EF_SW_CPU1_DIS_LEN                              (1U)
#define EF_CTRL_EF_SW_CPU1_DIS_MSK                              (((1U<<EF_CTRL_EF_SW_CPU1_DIS_LEN)-1)<<EF_CTRL_EF_SW_CPU1_DIS_POS)
#define EF_CTRL_EF_SW_CPU1_DIS_UMSK                             (~(((1U<<EF_CTRL_EF_SW_CPU1_DIS_LEN)-1)<<EF_CTRL_EF_SW_CPU1_DIS_POS))
#define EF_CTRL_EF_SW_CPU_RST_DBG_DIS                           EF_CTRL_EF_SW_CPU_RST_DBG_DIS
#define EF_CTRL_EF_SW_CPU_RST_DBG_DIS_POS                       (21U)
#define EF_CTRL_EF_SW_CPU_RST_DBG_DIS_LEN                       (1U)
#define EF_CTRL_EF_SW_CPU_RST_DBG_DIS_MSK                       (((1U<<EF_CTRL_EF_SW_CPU_RST_DBG_DIS_LEN)-1)<<EF_CTRL_EF_SW_CPU_RST_DBG_DIS_POS)
#define EF_CTRL_EF_SW_CPU_RST_DBG_DIS_UMSK                      (~(((1U<<EF_CTRL_EF_SW_CPU_RST_DBG_DIS_LEN)-1)<<EF_CTRL_EF_SW_CPU_RST_DBG_DIS_POS))
#define EF_CTRL_EF_SW_SE_DBG_DIS                                EF_CTRL_EF_SW_SE_DBG_DIS
#define EF_CTRL_EF_SW_SE_DBG_DIS_POS                            (22U)
#define EF_CTRL_EF_SW_SE_DBG_DIS_LEN                            (1U)
#define EF_CTRL_EF_SW_SE_DBG_DIS_MSK                            (((1U<<EF_CTRL_EF_SW_SE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_SW_SE_DBG_DIS_POS)
#define EF_CTRL_EF_SW_SE_DBG_DIS_UMSK                           (~(((1U<<EF_CTRL_EF_SW_SE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_SW_SE_DBG_DIS_POS))
#define EF_CTRL_EF_SW_EFUSE_DBG_DIS                             EF_CTRL_EF_SW_EFUSE_DBG_DIS
#define EF_CTRL_EF_SW_EFUSE_DBG_DIS_POS                         (23U)
#define EF_CTRL_EF_SW_EFUSE_DBG_DIS_LEN                         (1U)
#define EF_CTRL_EF_SW_EFUSE_DBG_DIS_MSK                         (((1U<<EF_CTRL_EF_SW_EFUSE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_SW_EFUSE_DBG_DIS_POS)
#define EF_CTRL_EF_SW_EFUSE_DBG_DIS_UMSK                        (~(((1U<<EF_CTRL_EF_SW_EFUSE_DBG_DIS_LEN)-1)<<EF_CTRL_EF_SW_EFUSE_DBG_DIS_POS))
#define EF_CTRL_EF_SW_DBG_JTAG_1_DIS                            EF_CTRL_EF_SW_DBG_JTAG_1_DIS
#define EF_CTRL_EF_SW_DBG_JTAG_1_DIS_POS                        (24U)
#define EF_CTRL_EF_SW_DBG_JTAG_1_DIS_LEN                        (2U)
#define EF_CTRL_EF_SW_DBG_JTAG_1_DIS_MSK                        (((1U<<EF_CTRL_EF_SW_DBG_JTAG_1_DIS_LEN)-1)<<EF_CTRL_EF_SW_DBG_JTAG_1_DIS_POS)
#define EF_CTRL_EF_SW_DBG_JTAG_1_DIS_UMSK                       (~(((1U<<EF_CTRL_EF_SW_DBG_JTAG_1_DIS_LEN)-1)<<EF_CTRL_EF_SW_DBG_JTAG_1_DIS_POS))
#define EF_CTRL_EF_SW_DBG_JTAG_0_DIS                            EF_CTRL_EF_SW_DBG_JTAG_0_DIS
#define EF_CTRL_EF_SW_DBG_JTAG_0_DIS_POS                        (26U)
#define EF_CTRL_EF_SW_DBG_JTAG_0_DIS_LEN                        (2U)
#define EF_CTRL_EF_SW_DBG_JTAG_0_DIS_MSK                        (((1U<<EF_CTRL_EF_SW_DBG_JTAG_0_DIS_LEN)-1)<<EF_CTRL_EF_SW_DBG_JTAG_0_DIS_POS)
#define EF_CTRL_EF_SW_DBG_JTAG_0_DIS_UMSK                       (~(((1U<<EF_CTRL_EF_SW_DBG_JTAG_0_DIS_LEN)-1)<<EF_CTRL_EF_SW_DBG_JTAG_0_DIS_POS))
#define EF_CTRL_EF_SW_DBG_MODE                                  EF_CTRL_EF_SW_DBG_MODE
#define EF_CTRL_EF_SW_DBG_MODE_POS                              (28U)
#define EF_CTRL_EF_SW_DBG_MODE_LEN                              (4U)
#define EF_CTRL_EF_SW_DBG_MODE_MSK                              (((1U<<EF_CTRL_EF_SW_DBG_MODE_LEN)-1)<<EF_CTRL_EF_SW_DBG_MODE_POS)
#define EF_CTRL_EF_SW_DBG_MODE_UMSK                             (~(((1U<<EF_CTRL_EF_SW_DBG_MODE_LEN)-1)<<EF_CTRL_EF_SW_DBG_MODE_POS))

/* 0x81C : ef_reserved */
#define EF_CTRL_EF_RESERVED_OFFSET                              (0x81C)
#define EF_CTRL_EF_RESERVED                                     EF_CTRL_EF_RESERVED
#define EF_CTRL_EF_RESERVED_POS                                 (0U)
#define EF_CTRL_EF_RESERVED_LEN                                 (32U)
#define EF_CTRL_EF_RESERVED_MSK                                 (((1U<<EF_CTRL_EF_RESERVED_LEN)-1)<<EF_CTRL_EF_RESERVED_POS)
#define EF_CTRL_EF_RESERVED_UMSK                                (~(((1U<<EF_CTRL_EF_RESERVED_LEN)-1)<<EF_CTRL_EF_RESERVED_POS))

/* 0x820 : ef_if_ana_trim_0 */
#define EF_CTRL_EF_IF_ANA_TRIM_0_OFFSET                         (0x820)
#define EF_CTRL_EF_IF_ANA_TRIM_0                                EF_CTRL_EF_IF_ANA_TRIM_0
#define EF_CTRL_EF_IF_ANA_TRIM_0_POS                            (0U)
#define EF_CTRL_EF_IF_ANA_TRIM_0_LEN                            (32U)
#define EF_CTRL_EF_IF_ANA_TRIM_0_MSK                            (((1U<<EF_CTRL_EF_IF_ANA_TRIM_0_LEN)-1)<<EF_CTRL_EF_IF_ANA_TRIM_0_POS)
#define EF_CTRL_EF_IF_ANA_TRIM_0_UMSK                           (~(((1U<<EF_CTRL_EF_IF_ANA_TRIM_0_LEN)-1)<<EF_CTRL_EF_IF_ANA_TRIM_0_POS))

/* 0x824 : ef_if_sw_usage_0 */
#define EF_CTRL_EF_IF_SW_USAGE_0_OFFSET                         (0x824)
#define EF_CTRL_EF_IF_SW_USAGE_0                                EF_CTRL_EF_IF_SW_USAGE_0
#define EF_CTRL_EF_IF_SW_USAGE_0_POS                            (0U)
#define EF_CTRL_EF_IF_SW_USAGE_0_LEN                            (32U)
#define EF_CTRL_EF_IF_SW_USAGE_0_MSK                            (((1U<<EF_CTRL_EF_IF_SW_USAGE_0_LEN)-1)<<EF_CTRL_EF_IF_SW_USAGE_0_POS)
#define EF_CTRL_EF_IF_SW_USAGE_0_UMSK                           (~(((1U<<EF_CTRL_EF_IF_SW_USAGE_0_LEN)-1)<<EF_CTRL_EF_IF_SW_USAGE_0_POS))

/* 0xA00 : ef_crc_ctrl_0 */
#define EF_CTRL_EF_CRC_CTRL_0_OFFSET                            (0xA00)
#define EF_CTRL_EF_CRC_BUSY                                     EF_CTRL_EF_CRC_BUSY
#define EF_CTRL_EF_CRC_BUSY_POS                                 (0U)
#define EF_CTRL_EF_CRC_BUSY_LEN                                 (1U)
#define EF_CTRL_EF_CRC_BUSY_MSK                                 (((1U<<EF_CTRL_EF_CRC_BUSY_LEN)-1)<<EF_CTRL_EF_CRC_BUSY_POS)
#define EF_CTRL_EF_CRC_BUSY_UMSK                                (~(((1U<<EF_CTRL_EF_CRC_BUSY_LEN)-1)<<EF_CTRL_EF_CRC_BUSY_POS))
#define EF_CTRL_EF_CRC_TRIG                                     EF_CTRL_EF_CRC_TRIG
#define EF_CTRL_EF_CRC_TRIG_POS                                 (1U)
#define EF_CTRL_EF_CRC_TRIG_LEN                                 (1U)
#define EF_CTRL_EF_CRC_TRIG_MSK                                 (((1U<<EF_CTRL_EF_CRC_TRIG_LEN)-1)<<EF_CTRL_EF_CRC_TRIG_POS)
#define EF_CTRL_EF_CRC_TRIG_UMSK                                (~(((1U<<EF_CTRL_EF_CRC_TRIG_LEN)-1)<<EF_CTRL_EF_CRC_TRIG_POS))
#define EF_CTRL_EF_CRC_EN                                       EF_CTRL_EF_CRC_EN
#define EF_CTRL_EF_CRC_EN_POS                                   (2U)
#define EF_CTRL_EF_CRC_EN_LEN                                   (1U)
#define EF_CTRL_EF_CRC_EN_MSK                                   (((1U<<EF_CTRL_EF_CRC_EN_LEN)-1)<<EF_CTRL_EF_CRC_EN_POS)
#define EF_CTRL_EF_CRC_EN_UMSK                                  (~(((1U<<EF_CTRL_EF_CRC_EN_LEN)-1)<<EF_CTRL_EF_CRC_EN_POS))
#define EF_CTRL_EF_CRC_MODE                                     EF_CTRL_EF_CRC_MODE
#define EF_CTRL_EF_CRC_MODE_POS                                 (3U)
#define EF_CTRL_EF_CRC_MODE_LEN                                 (1U)
#define EF_CTRL_EF_CRC_MODE_MSK                                 (((1U<<EF_CTRL_EF_CRC_MODE_LEN)-1)<<EF_CTRL_EF_CRC_MODE_POS)
#define EF_CTRL_EF_CRC_MODE_UMSK                                (~(((1U<<EF_CTRL_EF_CRC_MODE_LEN)-1)<<EF_CTRL_EF_CRC_MODE_POS))
#define EF_CTRL_EF_CRC_ERROR                                    EF_CTRL_EF_CRC_ERROR
#define EF_CTRL_EF_CRC_ERROR_POS                                (4U)
#define EF_CTRL_EF_CRC_ERROR_LEN                                (1U)
#define EF_CTRL_EF_CRC_ERROR_MSK                                (((1U<<EF_CTRL_EF_CRC_ERROR_LEN)-1)<<EF_CTRL_EF_CRC_ERROR_POS)
#define EF_CTRL_EF_CRC_ERROR_UMSK                               (~(((1U<<EF_CTRL_EF_CRC_ERROR_LEN)-1)<<EF_CTRL_EF_CRC_ERROR_POS))
#define EF_CTRL_EF_CRC_DOUT_INV_EN                              EF_CTRL_EF_CRC_DOUT_INV_EN
#define EF_CTRL_EF_CRC_DOUT_INV_EN_POS                          (5U)
#define EF_CTRL_EF_CRC_DOUT_INV_EN_LEN                          (1U)
#define EF_CTRL_EF_CRC_DOUT_INV_EN_MSK                          (((1U<<EF_CTRL_EF_CRC_DOUT_INV_EN_LEN)-1)<<EF_CTRL_EF_CRC_DOUT_INV_EN_POS)
#define EF_CTRL_EF_CRC_DOUT_INV_EN_UMSK                         (~(((1U<<EF_CTRL_EF_CRC_DOUT_INV_EN_LEN)-1)<<EF_CTRL_EF_CRC_DOUT_INV_EN_POS))
#define EF_CTRL_EF_CRC_DOUT_ENDIAN                              EF_CTRL_EF_CRC_DOUT_ENDIAN
#define EF_CTRL_EF_CRC_DOUT_ENDIAN_POS                          (6U)
#define EF_CTRL_EF_CRC_DOUT_ENDIAN_LEN                          (1U)
#define EF_CTRL_EF_CRC_DOUT_ENDIAN_MSK                          (((1U<<EF_CTRL_EF_CRC_DOUT_ENDIAN_LEN)-1)<<EF_CTRL_EF_CRC_DOUT_ENDIAN_POS)
#define EF_CTRL_EF_CRC_DOUT_ENDIAN_UMSK                         (~(((1U<<EF_CTRL_EF_CRC_DOUT_ENDIAN_LEN)-1)<<EF_CTRL_EF_CRC_DOUT_ENDIAN_POS))
#define EF_CTRL_EF_CRC_DIN_ENDIAN                               EF_CTRL_EF_CRC_DIN_ENDIAN
#define EF_CTRL_EF_CRC_DIN_ENDIAN_POS                           (7U)
#define EF_CTRL_EF_CRC_DIN_ENDIAN_LEN                           (1U)
#define EF_CTRL_EF_CRC_DIN_ENDIAN_MSK                           (((1U<<EF_CTRL_EF_CRC_DIN_ENDIAN_LEN)-1)<<EF_CTRL_EF_CRC_DIN_ENDIAN_POS)
#define EF_CTRL_EF_CRC_DIN_ENDIAN_UMSK                          (~(((1U<<EF_CTRL_EF_CRC_DIN_ENDIAN_LEN)-1)<<EF_CTRL_EF_CRC_DIN_ENDIAN_POS))
#define EF_CTRL_EF_CRC_INT                                      EF_CTRL_EF_CRC_INT
#define EF_CTRL_EF_CRC_INT_POS                                  (8U)
#define EF_CTRL_EF_CRC_INT_LEN                                  (1U)
#define EF_CTRL_EF_CRC_INT_MSK                                  (((1U<<EF_CTRL_EF_CRC_INT_LEN)-1)<<EF_CTRL_EF_CRC_INT_POS)
#define EF_CTRL_EF_CRC_INT_UMSK                                 (~(((1U<<EF_CTRL_EF_CRC_INT_LEN)-1)<<EF_CTRL_EF_CRC_INT_POS))
#define EF_CTRL_EF_CRC_INT_CLR                                  EF_CTRL_EF_CRC_INT_CLR
#define EF_CTRL_EF_CRC_INT_CLR_POS                              (9U)
#define EF_CTRL_EF_CRC_INT_CLR_LEN                              (1U)
#define EF_CTRL_EF_CRC_INT_CLR_MSK                              (((1U<<EF_CTRL_EF_CRC_INT_CLR_LEN)-1)<<EF_CTRL_EF_CRC_INT_CLR_POS)
#define EF_CTRL_EF_CRC_INT_CLR_UMSK                             (~(((1U<<EF_CTRL_EF_CRC_INT_CLR_LEN)-1)<<EF_CTRL_EF_CRC_INT_CLR_POS))
#define EF_CTRL_EF_CRC_INT_SET                                  EF_CTRL_EF_CRC_INT_SET
#define EF_CTRL_EF_CRC_INT_SET_POS                              (10U)
#define EF_CTRL_EF_CRC_INT_SET_LEN                              (1U)
#define EF_CTRL_EF_CRC_INT_SET_MSK                              (((1U<<EF_CTRL_EF_CRC_INT_SET_LEN)-1)<<EF_CTRL_EF_CRC_INT_SET_POS)
#define EF_CTRL_EF_CRC_INT_SET_UMSK                             (~(((1U<<EF_CTRL_EF_CRC_INT_SET_LEN)-1)<<EF_CTRL_EF_CRC_INT_SET_POS))
#define EF_CTRL_EF_CRC_LOCK                                     EF_CTRL_EF_CRC_LOCK
#define EF_CTRL_EF_CRC_LOCK_POS                                 (11U)
#define EF_CTRL_EF_CRC_LOCK_LEN                                 (1U)
#define EF_CTRL_EF_CRC_LOCK_MSK                                 (((1U<<EF_CTRL_EF_CRC_LOCK_LEN)-1)<<EF_CTRL_EF_CRC_LOCK_POS)
#define EF_CTRL_EF_CRC_LOCK_UMSK                                (~(((1U<<EF_CTRL_EF_CRC_LOCK_LEN)-1)<<EF_CTRL_EF_CRC_LOCK_POS))
#define EF_CTRL_EF_CRC_SLP_N                                    EF_CTRL_EF_CRC_SLP_N
#define EF_CTRL_EF_CRC_SLP_N_POS                                (16U)
#define EF_CTRL_EF_CRC_SLP_N_LEN                                (16U)
#define EF_CTRL_EF_CRC_SLP_N_MSK                                (((1U<<EF_CTRL_EF_CRC_SLP_N_LEN)-1)<<EF_CTRL_EF_CRC_SLP_N_POS)
#define EF_CTRL_EF_CRC_SLP_N_UMSK                               (~(((1U<<EF_CTRL_EF_CRC_SLP_N_LEN)-1)<<EF_CTRL_EF_CRC_SLP_N_POS))

/* 0xA04 : ef_crc_ctrl_1 */
#define EF_CTRL_EF_CRC_CTRL_1_OFFSET                            (0xA04)
#define EF_CTRL_EF_CRC_DATA_0_EN                                EF_CTRL_EF_CRC_DATA_0_EN
#define EF_CTRL_EF_CRC_DATA_0_EN_POS                            (0U)
#define EF_CTRL_EF_CRC_DATA_0_EN_LEN                            (32U)
#define EF_CTRL_EF_CRC_DATA_0_EN_MSK                            (((1U<<EF_CTRL_EF_CRC_DATA_0_EN_LEN)-1)<<EF_CTRL_EF_CRC_DATA_0_EN_POS)
#define EF_CTRL_EF_CRC_DATA_0_EN_UMSK                           (~(((1U<<EF_CTRL_EF_CRC_DATA_0_EN_LEN)-1)<<EF_CTRL_EF_CRC_DATA_0_EN_POS))

/* 0xA08 : ef_crc_ctrl_2 */
#define EF_CTRL_EF_CRC_CTRL_2_OFFSET                            (0xA08)
#define EF_CTRL_EF_CRC_DATA_1_EN                                EF_CTRL_EF_CRC_DATA_1_EN
#define EF_CTRL_EF_CRC_DATA_1_EN_POS                            (0U)
#define EF_CTRL_EF_CRC_DATA_1_EN_LEN                            (32U)
#define EF_CTRL_EF_CRC_DATA_1_EN_MSK                            (((1U<<EF_CTRL_EF_CRC_DATA_1_EN_LEN)-1)<<EF_CTRL_EF_CRC_DATA_1_EN_POS)
#define EF_CTRL_EF_CRC_DATA_1_EN_UMSK                           (~(((1U<<EF_CTRL_EF_CRC_DATA_1_EN_LEN)-1)<<EF_CTRL_EF_CRC_DATA_1_EN_POS))

/* 0xA0C : ef_crc_ctrl_3 */
#define EF_CTRL_EF_CRC_CTRL_3_OFFSET                            (0xA0C)
#define EF_CTRL_EF_CRC_IV                                       EF_CTRL_EF_CRC_IV
#define EF_CTRL_EF_CRC_IV_POS                                   (0U)
#define EF_CTRL_EF_CRC_IV_LEN                                   (32U)
#define EF_CTRL_EF_CRC_IV_MSK                                   (((1U<<EF_CTRL_EF_CRC_IV_LEN)-1)<<EF_CTRL_EF_CRC_IV_POS)
#define EF_CTRL_EF_CRC_IV_UMSK                                  (~(((1U<<EF_CTRL_EF_CRC_IV_LEN)-1)<<EF_CTRL_EF_CRC_IV_POS))

/* 0xA10 : ef_crc_ctrl_4 */
#define EF_CTRL_EF_CRC_CTRL_4_OFFSET                            (0xA10)
#define EF_CTRL_EF_CRC_GOLDEN                                   EF_CTRL_EF_CRC_GOLDEN
#define EF_CTRL_EF_CRC_GOLDEN_POS                               (0U)
#define EF_CTRL_EF_CRC_GOLDEN_LEN                               (32U)
#define EF_CTRL_EF_CRC_GOLDEN_MSK                               (((1U<<EF_CTRL_EF_CRC_GOLDEN_LEN)-1)<<EF_CTRL_EF_CRC_GOLDEN_POS)
#define EF_CTRL_EF_CRC_GOLDEN_UMSK                              (~(((1U<<EF_CTRL_EF_CRC_GOLDEN_LEN)-1)<<EF_CTRL_EF_CRC_GOLDEN_POS))

/* 0xA14 : ef_crc_ctrl_5 */
#define EF_CTRL_EF_CRC_CTRL_5_OFFSET                            (0xA14)
#define EF_CTRL_EF_CRC_DOUT                                     EF_CTRL_EF_CRC_DOUT
#define EF_CTRL_EF_CRC_DOUT_POS                                 (0U)
#define EF_CTRL_EF_CRC_DOUT_LEN                                 (32U)
#define EF_CTRL_EF_CRC_DOUT_MSK                                 (((1U<<EF_CTRL_EF_CRC_DOUT_LEN)-1)<<EF_CTRL_EF_CRC_DOUT_POS)
#define EF_CTRL_EF_CRC_DOUT_UMSK                                (~(((1U<<EF_CTRL_EF_CRC_DOUT_LEN)-1)<<EF_CTRL_EF_CRC_DOUT_POS))

#define EF_CTRL_EFUSE_R0_SIZE                           128

#define EF_CTRL_OP_MODE_AUTO 0
#define EF_CTRL_OP_MODE_MANUAL 1

typedef enum {
    EF_CTRL_PARA_DFT ,                      /*!< Select default cyc parameter */
    EF_CTRL_PARA_MANUAL,                     /*!< Select manual cyc parameter */
}EF_Ctrl_CYC_PARA_Type;

typedef enum {
    EF_CTRL_EF_CLK,                         /*!< Select efuse clock */
    EF_CTRL_SAHB_CLK,                       /*!< Select SAHB clock */
}EF_Ctrl_CLK_Type;

void bl602_ef_ctrl_load_efuse_r0(void);
int bl602_ef_ctrl_busy(void);
void bl602_ctrl_sw_ahb_clk_0(void);
void bl602_ef_ctrl_clear(uint32_t index, uint32_t len);
int bl602_ef_ctrl_read_mac_address(uint8_t mac[6]);
#endif

