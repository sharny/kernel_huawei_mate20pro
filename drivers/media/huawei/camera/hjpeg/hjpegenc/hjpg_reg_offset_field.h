/*
 * hjpg_reg_offset_field.h
 *
 * defination for config jpeg reg address offset and len.
 *
 * Copyright (c) 2001-2021, Huawei Tech. Co., Ltd. All rights reserved.
 *
 * lixiuhua <aimee.li@hisilicon.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


#ifndef __JPGENC_REG_OFFSET_FIELD_H__
#define __JPGENC_REG_OFFSET_FIELD_H__

#define JPGENC_ENCODE_LEN    1
#define JPGENC_ENCODE_OFFSET 0

#define JPGENC_JP_INIT_LEN    1
#define JPGENC_JP_INIT_OFFSET 0

#define JPGENC_ENC_HRIGHT1_LEN    13
#define JPGENC_ENC_HRIGHT1_OFFSET 0

#define JPGENC_ENC_VBOTTOM_LEN    13
#define JPGENC_ENC_VBOTTOM_OFFSET 0

#define JPGENC_ENC_PIC_FORMAT_LEN    3
#define JPGENC_ENC_PIC_FORMAT_OFFSET 0

#define JPGENC_RESTART_INTERVAL_LEN    16
#define JPGENC_RESTART_INTERVAL_OFFSET 0

#define JPGENC_TQ0_SELECT_LEN    2
#define JPGENC_TQ0_SELECT_OFFSET 0

#define JPGENC_TQ1_SELECT_LEN    2
#define JPGENC_TQ1_SELECT_OFFSET 0

#define JPGENC_TQ2_SELECT_LEN    2
#define JPGENC_TQ2_SELECT_OFFSET 0

#define JPGENC_DC_TABLE_SELECT_V_LEN    1
#define JPGENC_DC_TABLE_SELECT_V_OFFSET 2
#define JPGENC_DC_TABLE_SELECT_U_LEN    1
#define JPGENC_DC_TABLE_SELECT_U_OFFSET 1
#define JPGENC_DC_TABLE_SELECT_Y_LEN    1
#define JPGENC_DC_TABLE_SELECT_Y_OFFSET 0

#define JPGENC_AC_TABLE_SELECT_V_LEN    1
#define JPGENC_AC_TABLE_SELECT_V_OFFSET 2
#define JPGENC_AC_TABLE_SELECT_U_LEN    1
#define JPGENC_AC_TABLE_SELECT_U_OFFSET 1
#define JPGENC_AC_TABLE_SELECT_Y_LEN    1
#define JPGENC_AC_TABLE_SELECT_Y_OFFSET 0

#define JPGENC_TABLE_WDATA_H_LEN    8
#define JPGENC_TABLE_WDATA_H_OFFSET 8
#define JPGENC_TABLE_WDATA_L_LEN    8
#define JPGENC_TABLE_WDATA_L_OFFSET 0

#define JPGENC_TABLE_ID_LEN    4
#define JPGENC_TABLE_ID_OFFSET 0

#define JPGENC_TAC0_LEN_LEN    8
#define JPGENC_TAC0_LEN_OFFSET 0

#define JPGENC_TDC0_LEN_LEN    8
#define JPGENC_TDC0_LEN_OFFSET 0

#define JPGENC_TAC1_LEN_LEN    8
#define JPGENC_TAC1_LEN_OFFSET 0

#define JPGENC_TDC1_LEN_LEN    8
#define JPGENC_TDC1_LEN_OFFSET 0

#define JPGENC_ENCODE_MODE_LEN    1
#define JPGENC_ENCODE_MODE_OFFSET 0

#define JPGENC_DEB_BAD_TABLE_ACCESS_LEN    1
#define JPGENC_DEB_BAD_TABLE_ACCESS_OFFSET 8
#define JPGENC_DEB_VLC_TABLE_BUSY_LEN      1
#define JPGENC_DEB_VLC_TABLE_BUSY_OFFSET   5
#define JPGENC_DEB_R2B_MEMORY_FULL_LEN     1
#define JPGENC_DEB_R2B_MEMORY_FULL_OFFSET  4
#define JPGENC_DEB_VLC_ENCODE_BUSY_LEN     1
#define JPGENC_DEB_VLC_ENCODE_BUSY_OFFSET  3
#define JPGENC_DEB_QIQ_TABLE_ACC_LEN       1
#define JPGENC_DEB_QIQ_TABLE_ACC_OFFSET    2

#define JPGENC_VLC_TABLE_ERR_IMR_LEN       1
#define JPGENC_VLC_TABLE_ERR_IMR_OFFSET    10
#define JPGENC_R2B_IMG_SIZE_ERR_IMR_LEN    1
#define JPGENC_R2B_IMG_SIZE_ERR_IMR_OFFSET 9
#define JPGENC_DCT_ERR_IMR_LEN             1
#define JPGENC_DCT_ERR_IMR_OFFSET          7
#define JPGENC_VLC_SYMBOL_ERR_IMR_LEN      1
#define JPGENC_VLC_SYMBOL_ERR_IMR_OFFSET   4

#define JPGENC_VLC_TABLE_ERR_RIS_LEN       1
#define JPGENC_VLC_TABLE_ERR_RIS_OFFSET    10
#define JPGENC_R2B_IMG_SIZE_ERR_RIS_LEN    1
#define JPGENC_R2B_IMG_SIZE_ERR_RIS_OFFSET 9
#define JPGENC_DCT_ERR_RIS_LEN             1
#define JPGENC_DCT_ERR_RIS_OFFSET          7
#define JPGENC_VLC_SYMBOL_ERR_RIS_LEN      1
#define JPGENC_VLC_SYMBOL_ERR_RIS_OFFSET   4

#define JPGENC_VLC_TABLE_ERR_MIS_LEN       1
#define JPGENC_VLC_TABLE_ERR_MIS_OFFSET    10
#define JPGENC_R2B_IMG_SIZE_ERR_MIS_LEN    1
#define JPGENC_R2B_IMG_SIZE_ERR_MIS_OFFSET 9
#define JPGENC_DCT_ERR_MIS_LEN             1
#define JPGENC_DCT_ERR_MIS_OFFSET          7
#define JPGENC_VLC_SYMBOL_ERR_MIS_LEN      1
#define JPGENC_VLC_SYMBOL_ERR_MIS_OFFSET   4

#define JPGENC_VLC_TABLE_ERR_ICR_LEN       1
#define JPGENC_VLC_TABLE_ERR_ICR_OFFSET    10
#define JPGENC_R2B_IMG_SIZE_ERR_ICR_LEN    1
#define JPGENC_R2B_IMG_SIZE_ERR_ICR_OFFSET 9
#define JPGENC_DCT_ERR_ICR_LEN             1
#define JPGENC_DCT_ERR_ICR_OFFSET          7
#define JPGENC_VLC_SYMBOL_ERR_ICR_LEN      1
#define JPGENC_VLC_SYMBOL_ERR_ICR_OFFSET   4

#define JPGENC_VLC_TABLE_ERR_ISR_LEN       1
#define JPGENC_VLC_TABLE_ERR_ISR_OFFSET    10
#define JPGENC_R2B_IMG_SIZE_ERR_ISR_LEN    1
#define JPGENC_R2B_IMG_SIZE_ERR_ISR_OFFSET 9
#define JPGENC_DCT_ERR_ISR_LEN             1
#define JPGENC_DCT_ERR_ISR_OFFSET          7
#define JPGENC_VLC_SYMBOL_ERR_ISR_LEN      1
#define JPGENC_VLC_SYMBOL_ERR_ISR_OFFSET   4

#define JPGENC_GEN_HEADER_DONE_IMR_LEN    1
#define JPGENC_GEN_HEADER_DONE_IMR_OFFSET 5
#define JPGENC_ENCODE_DONE_IMR_LEN        1
#define JPGENC_ENCODE_DONE_IMR_OFFSET     4

#define JPGENC_GEN_HEADER_DONE_RIS_LEN    1
#define JPGENC_GEN_HEADER_DONE_RIS_OFFSET 5
#define JPGENC_ENCODE_DONE_RIS_LEN        1
#define JPGENC_ENCODE_DONE_RIS_OFFSET     4

#define JPGENC_GEN_HEADER_DONE_MIS_LEN    1
#define JPGENC_GEN_HEADER_DONE_MIS_OFFSET 5
#define JPGENC_ENCODE_DONE_MIS_LEN        1
#define JPGENC_ENCODE_DONE_MIS_OFFSET     4

#define JPGENC_GEN_HEADER_DONE_ICR_LEN    1
#define JPGENC_GEN_HEADER_DONE_ICR_OFFSET 5
#define JPGENC_ENCODE_DONE_ICR_LEN        1
#define JPGENC_ENCODE_DONE_ICR_OFFSET     4

#define JPGENC_GEN_HEADER_DONE_ISR_LEN    1
#define JPGENC_GEN_HEADER_DONE_ISR_OFFSET 5
#define JPGENC_ENCODE_DONE_ISR_LEN        1
#define JPGENC_ENCODE_DONE_ISR_OFFSET     4

#define JPGENC_SPEEDVIEW_EN_LEN    1
#define JPGENC_SPEEDVIEW_EN_OFFSET 4

#define JPGENC_ADDRESS_Y_LEN    28
#define JPGENC_ADDRESS_Y_OFFSET 4

#define JPGENC_ADDRESS_UV_LEN    28
#define JPGENC_ADDRESS_UV_OFFSET 4

#define JPGENC_STRIDE_LEN    11
#define JPGENC_STRIDE_OFFSET 4

#define JPGENC_SRAM_NOOPT_LEN    1
#define JPGENC_SRAM_NOOPT_OFFSET 2
#define JPGENC_SOURCE_LEN        1
#define JPGENC_SOURCE_OFFSET     0

#define JPGENC_ENC_HRIGHT2_LEN    13
#define JPGENC_ENC_HRIGHT2_OFFSET 0

#define JPGENC_BYTE_CNT_LEN    30
#define JPGENC_BYTE_CNT_OFFSET 0

#define JPGENC_PREFETCH_DELAY_LEN    11
#define JPGENC_PREFETCH_DELAY_OFFSET 1
#define JPGENC_PREFETCH_EN_LEN       1
#define JPGENC_PREFETCH_EN_OFFSET    0

#define JPGENC_ID3_Y_LEN    7
#define JPGENC_ID3_Y_OFFSET 24
#define JPGENC_ID2_Y_LEN    7
#define JPGENC_ID2_Y_OFFSET 16
#define JPGENC_ID1_Y_LEN    7
#define JPGENC_ID1_Y_OFFSET 8
#define JPGENC_ID0_Y_LEN    7
#define JPGENC_ID0_Y_OFFSET 0

#define JPGENC_ID7_Y_LEN    7
#define JPGENC_ID7_Y_OFFSET 24
#define JPGENC_ID6_Y_LEN    7
#define JPGENC_ID6_Y_OFFSET 16
#define JPGENC_ID5_Y_LEN    7
#define JPGENC_ID5_Y_OFFSET 8
#define JPGENC_ID4_Y_LEN    7
#define JPGENC_ID4_Y_OFFSET 0

#define JPGENC_ID3_UV_LEN    7
#define JPGENC_ID3_UV_OFFSET 24
#define JPGENC_ID2_UV_LEN    7
#define JPGENC_ID2_UV_OFFSET 16
#define JPGENC_ID1_UV_LEN    7
#define JPGENC_ID1_UV_OFFSET 8
#define JPGENC_ID0_UV_LEN    7
#define JPGENC_ID0_UV_OFFSET 0

#define JPGENC_ID8_Y_LEN     7
#define JPGENC_ID8_Y_OFFSET  8
#define JPGENC_ID4_UV_LEN    7
#define JPGENC_ID4_UV_OFFSET 0

#define JPGENC_PREREAD_LEN    4
#define JPGENC_PREREAD_OFFSET 0

#define JPGENC_SWAPIN_U_V_LEN     1
#define JPGENC_SWAPIN_U_V_OFFSET  1
#define JPGENC_SWAPIN_Y_UV_LEN    1
#define JPGENC_SWAPIN_Y_UV_OFFSET 0

#define JPGENC_FORCE_CLK_ON_LEN    1
#define JPGENC_FORCE_CLK_ON_OFFSET 0

#define JPGENC_DBG_0_LEN    32
#define JPGENC_DBG_0_OFFSET 0

#define JPGENC_DBG_1_LEN    32
#define JPGENC_DBG_1_OFFSET 0

#define JPGENC_DBG_2_LEN    32
#define JPGENC_DBG_2_OFFSET 0

#define JPGENC_DBG_3_LEN    32
#define JPGENC_DBG_3_OFFSET 0

#define JPGENC_DBG_4_LEN    32
#define JPGENC_DBG_4_OFFSET 0

#define JPGENC_DBG_5_LEN    32
#define JPGENC_DBG_5_OFFSET 0

#define JPGENC_DBG_6_LEN    32
#define JPGENC_DBG_6_OFFSET 0

#define JPGENC_DBG_7_LEN    32
#define JPGENC_DBG_7_OFFSET 0

#define JPGENC_DBG_8_LEN    32
#define JPGENC_DBG_8_OFFSET 0

#define JPGENC_DBG_9_LEN    32
#define JPGENC_DBG_9_OFFSET 0

#define JPGENC_DBG_10_LEN    32
#define JPGENC_DBG_10_OFFSET 0

#define JPGENC_DBG_11_LEN    32
#define JPGENC_DBG_11_OFFSET 0

#define JPGENC_DBG_12_LEN    32
#define JPGENC_DBG_12_OFFSET 0

#define JPGENC_DBG_13_LEN    32
#define JPGENC_DBG_13_OFFSET 0

#endif // __JPGENC_REG_OFFSET_FIELD_H__
