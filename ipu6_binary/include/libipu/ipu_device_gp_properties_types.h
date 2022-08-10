/**
* INTEL CONFIDENTIAL
*
* Copyright (C) 2015 - 2017 Intel Corporation. All Rights
* Reserved.
*
* The source code contained or described herein and all documents
* related to the source code ("Material") are owned by Intel Corporation
* or licensors. Title to the Material remains with Intel
* Corporation or its licensors. The Material contains trade
* secrets and proprietary and confidential information of Intel or its
* licensors. The Material is protected by worldwide copyright
* and trade secret laws and treaty provisions. No part of the Material may
* be used, copied, reproduced, modified, published, uploaded, posted,
* transmitted, distributed, or disclosed in any way without Intel's prior
* express written permission.
*
* No License under any patent, copyright, trade secret or other intellectual
* property right is granted to or conferred upon you by disclosure or
* delivery of the Materials, either expressly, by implication, inducement,
* estoppel or otherwise. Any license under such intellectual property rights
* must be express and approved by Intel in writing.
*/

#ifndef __IPU_DEVICE_GP_PROPERTIES_TYPES_H
#define __IPU_DEVICE_GP_PROPERTIES_TYPES_H

enum ipu_device_gp_isa_value {
	/* ISA_MUX_SEL options */
	IPU_DEVICE_GP_ISA_MUX_SEL_ICA = 0, /* Enable output after FF ICA */
	IPU_DEVICE_GP_ISA_MUX_SEL_LSC = 1, /* Enable output after FF LSC */
	IPU_DEVICE_GP_ISA_MUX_SEL_DPC = 2, /* Enable output after FF DPC */
	/* ICA stream block options */
	/* UNBLOCK signal received from ICA */
	IPU_DEVICE_GP_ISA_ICA_UNBLOCK = 0,
	/* BLOCK signal received from ICA */
	IPU_DEVICE_GP_ISA_ICA_BLOCK = 1,
	/* LSC stream block options */
	/* UNBLOCK signal received from LSC */
	IPU_DEVICE_GP_ISA_LSC_UNBLOCK = 0,
	/* BLOCK signal received from LSC */
	IPU_DEVICE_GP_ISA_LSC_BLOCK = 1,
	/* DPC stream block options */
	/* UNBLOCK signal received from DPC */
	IPU_DEVICE_GP_ISA_DPC_UNBLOCK = 0,
	/* BLOCK signal received from DPC */
	IPU_DEVICE_GP_ISA_DPC_BLOCK = 1,
	/* Defines needed only for bxtB0 */
	/* ISA_AWB_MUX_SEL options */
	/* Input Correction input */
	IPU_DEVICE_GP_ISA_AWB_MUX_SEL_ICA = 0,
	/* DPC input */
	IPU_DEVICE_GP_ISA_AWB_MUX_SEL_DPC = 1,
	/* ISA_AWB_MUX_SEL options */
	/* UNBLOCK DPC input */
	IPU_DEVICE_GP_ISA_AWB_MUX_ICA_UNBLOCK = 0,
	/* BLOCK DPC input */
	IPU_DEVICE_GP_ISA_AWB_MUX_ICA_BLOCK = 1,
	/* ISA_AWB_MUX_SEL options */
	/* UNBLOCK Input Correction input */
	IPU_DEVICE_GP_ISA_AWB_MUX_DPC_UNBLOCK = 0,
	/* BLOCK Input Correction input */
	IPU_DEVICE_GP_ISA_AWB_MUX_DPC_BLOCK = 1,

	/* PAF STRM options */
	/* Disable streaming to PAF FF*/
	IPU_DEVICE_GP_ISA_PAF_DISABLE_STREAM = 0,
	/* Enable stream0 to PAF FF*/
	IPU_DEVICE_GP_ISA_PAF_ENABLE_STREAM0 = 1,
	/* Enable stream1 to PAF FF*/
	IPU_DEVICE_GP_ISA_PAF_ENABLE_STREAM1 = 2,
	/* PAF SRC SEL options */
	/* External channel input */
	IPU_DEVICE_GP_ISA_PAF_SRC_SEL0 = 0,
	/* DPC extracted input */
	IPU_DEVICE_GP_ISA_PAF_SRC_SEL1 = 1,
	/* PAF_GDDPC_BLK options */
	IPU_DEVICE_GP_ISA_PAF_GDDPC_PORT_BLK0 = 0,
	IPU_DEVICE_GP_ISA_PAF_GDDPC_PORT_BLK1 = 1,
	/* PAF ISA STR_PORT options */
	IPU_DEVICE_GP_ISA_PAF_STR_PORT0 = 0,
	IPU_DEVICE_GP_ISA_PAF_STR_PORT1 = 1,

	/* Needed only for IPU5 */
	/* scaler port block options */
	IPU_DEVICE_GP_ISA_SCALER_PORT_UNBLOCK = 0,
	IPU_DEVICE_GP_ISA_SCALER_PORT_BLOCK = 1,

	IPU_DEVICE_GP_ISA_STATIC_SCALED_OUT_DEMUX_SEL_S2V = 0,
	IPU_DEVICE_GP_ISA_STATIC_SCALED_OUT_DEMUX_SEL_PSA = 1,

	/*-------------------- For IPU6 ISA ---------------------*/
	/* Muxes/demuxes */
	/* 0 - to ISL.S2V; 1 - to PSA */
	IPU_DEVICE_GP_ISA_STATIC_ISA_ORIG_OUT_DEMUX_SEL_S2V = 0,
	IPU_DEVICE_GP_ISA_STATIC_ISA_ORIG_OUT_DEMUX_SEL_PSA = 1,
	/* 0 - to ISL.S2V; 1 - to PSA */
	IPU_DEVICE_GP_ISA_STATIC_ISA_SCALED_A_OUT_DEMUX_SEL_S2V = 0,
	IPU_DEVICE_GP_ISA_STATIC_ISA_SCALED_A_OUT_DEMUX_SEL_PSA = 1,
	/* 0 - Input Correction input; 1 - B2B mux input */
	IPU_DEVICE_GP_ISA_STATIC_AWB_MUX_SEL_INPUT_CORR = 0,
	IPU_DEVICE_GP_ISA_STATIC_AWB_MUX_SEL_B2B = 1,
	/* 0 - Input Correction input; 1 - B2B mux input */
	IPU_DEVICE_GP_ISA_STATIC_AE_MUX_SEL_INPUT_CORR = 0,
	IPU_DEVICE_GP_ISA_STATIC_AE_MUX_SEL_B2B = 1,
	/* 0 - Input Correction input; 1 - B2B mux input */
	IPU_DEVICE_GP_ISA_STATIC_AF_MUX_SEL_INPUT_CORR = 0,
	IPU_DEVICE_GP_ISA_STATIC_AF_MUX_SEL_B2B = 1,
	/* 0 - to Lsc; 1 - to Dpc; 2 - to X2b */
	IPU_DEVICE_GP_ISA_STATIC_ISA_INPUT_CORR_DEMUX_SEL_LSC = 0,
	IPU_DEVICE_GP_ISA_STATIC_ISA_INPUT_CORR_DEMUX_SEL_DPC = 1,
	IPU_DEVICE_GP_ISA_STATIC_ISA_INPUT_CORR_DEMUX_SEL_X2B = 2,
	/* 0 - Input correction; 1 - Dpc; 2 - X2b */
	IPU_DEVICE_GP_ISA_STATIC_LSC_MUX_SEL_INPUT_CORR = 0,
	IPU_DEVICE_GP_ISA_STATIC_LSC_MUX_SEL_DPC = 1,
	IPU_DEVICE_GP_ISA_STATIC_LSC_MUX_SEL_X2B = 2,
	/* 0 - to B2b; 1 - to Dpc; 2 - X2b*/
	IPU_DEVICE_GP_ISA_STATIC_LSC_DEMUX_SEL_B2B = 0,
	IPU_DEVICE_GP_ISA_STATIC_LSC_DEMUX_SEL_DPC = 1,
	IPU_DEVICE_GP_ISA_STATIC_LSC_DEMUX_SEL_X2B = 2,
	/* 0 - to Lsc; 1 - to B2b; 2 - to X2b */
	IPU_DEVICE_GP_ISA_STATIC_DPC_DEMUX_SEL_LSC = 0,
	IPU_DEVICE_GP_ISA_STATIC_DPC_DEMUX_SEL_B2B = 1,
	IPU_DEVICE_GP_ISA_STATIC_DPC_DEMUX_SEL_X2B = 2,
	/* 0 - Lsc; 1 - Input correction; 2 - X2b */
	IPU_DEVICE_GP_ISA_STATIC_DPC_MUX_SEL_LSC = 0,
	IPU_DEVICE_GP_ISA_STATIC_DPC_MUX_SEL_INPUT_CORR = 1,
	IPU_DEVICE_GP_ISA_STATIC_DPC_MUX_SEL_X2B = 2,
	/* 0 - Lsc; 1 - X2b; 2 - Input correction */
	IPU_DEVICE_GP_ISA_STATIC_X2B_MUX_SEL_LSC = 0,
	IPU_DEVICE_GP_ISA_STATIC_X2B_MUX_SEL_X2B = 1,
	IPU_DEVICE_GP_ISA_STATIC_X2B_MUX_SEL_INPUT_CORR = 2,
	/* 0 - to Lsc; 1 - to Dpc; 2 - to B2b */
	IPU_DEVICE_GP_ISA_STATIC_X2B_DEMUX_SEL_LSC = 0,
	IPU_DEVICE_GP_ISA_STATIC_X2B_DEMUX_SEL_DPC = 1,
	IPU_DEVICE_GP_ISA_STATIC_X2B_DEMUX_SEL_B2B = 2,
	/* 0 - Lsc; 1 - Dpc; 2 - X2b */
	IPU_DEVICE_GP_ISA_STATIC_B2B_MUX_SEL_LSC = 0,
	IPU_DEVICE_GP_ISA_STATIC_B2B_MUX_SEL_DPC = 1,
	IPU_DEVICE_GP_ISA_STATIC_B2B_MUX_SEL_X2B = 2,
	/* 0 - Through X2B S2V RGBIR; 1 - Bypass */
	IPU_DEVICE_GP_ISA_STATIC_SVE_RGBIR_BP_MUX_DEMUX_SEL_SVE_RGBIR = 0,
	IPU_DEVICE_GP_ISA_STATIC_SVE_RGBIR_BP_MUX_DEMUX_SEL_BYPASS = 1,
	/* 0 - X2B SVE RGBIR; 1- X2B MD */
	IPU_DEVICE_GP_ISA_STATIC_IR_DEPTH_MUX_SEL_SVE_RGBIR = 0,
	IPU_DEVICE_GP_ISA_STATIC_IR_DEPTH_MUX_SEL_MD = 1,
	/* 0 - External PAF CH0/1; 1 - DPC extracted PAF CH0/1; 2 - X2B extracted PAF CH0/ Black Box CH1 */
	IPU_DEVICE_GP_ISA_STATIC_PAF_SRC_SEL_EXT_PAF = 0,
	IPU_DEVICE_GP_ISA_STATIC_PAF_SRC_SEL_DPC = 1,
	IPU_DEVICE_GP_ISA_STATIC_PAF_SRC_SEL_X2B = 2,
	/* 0 - to Dol mux; 1 - to Dol */
	IPU_DEVICE_GP_ISA_STATIC_MAIN_INPUT_DOL_DEMUX_SEL_DOL_MUX = 0,
	IPU_DEVICE_GP_ISA_STATIC_MAIN_INPUT_DOL_DEMUX_SEL_DOL = 1,
	/* 0 - Main input; 1 - Dol */
	IPU_DEVICE_GP_ISA_STATIC_DOL_MUX_SEL_MAIN_INPUT = 0,
	IPU_DEVICE_GP_ISA_STATIC_DOL_MUX_SEL_DOL = 1,
	/* Blockers */
	/* For all IPU6 ISA Port blockers 0-UNBLOCK, 1- BLOCK */
	IPU_DEVICE_GP_ISA_STATIC_PORT_BLK_UNBLOCK = 0,
	IPU_DEVICE_GP_ISA_STATIC_PORT_BLK_BLOCK = 1,
	/*------------------- End Of IPU6 ISA -------------------*/

	/* sis port block options */
	IPU_DEVICE_GP_ISA_SIS_PORT_UNBLOCK = 0,
	IPU_DEVICE_GP_ISA_SIS_PORT_BLOCK = 1,
	IPU_DEVICE_GP_ISA_CONF_INVALID = 0xFF
};

enum ipu_device_gp_psa_value {
	/* Defines needed for bxtB0 */
	/* PSA_STILLS_MODE_MUX */
	IPU_DEVICE_GP_PSA_MUX_POST_RYNR_ROUTE_WO_DM  = 0,
	IPU_DEVICE_GP_PSA_MUX_POST_RYNR_ROUTE_W_DM = 1,
	/* PSA_ACM_DEMUX */
	IPU_DEVICE_GP_PSA_DEMUX_PRE_ACM_ROUTE_TO_ACM = 0,
	IPU_DEVICE_GP_PSA_DEMUX_PRE_ACM_ROUTE_TO_S2V = 1,
	/* PSA_S2V_RGB_F_MUX */
	IPU_DEVICE_GP_PSA_MUX_PRE_S2V_RGB_F_FROM_ACM = 0,
	IPU_DEVICE_GP_PSA_MUX_PRE_S2V_RGB_F_FROM_DM_OR_SPLITTER = 1,
	/* PSA_V2S_RGB_4_DEMUX */
	IPU_DEVICE_GP_PSA_DEMUX_POST_V2S_RGB_4_TO_GTM = 0,
	IPU_DEVICE_GP_PSA_DEMUX_POST_V2S_RGB_4_TO_ACM = 1,
	/* Defines needed for IPU5.
	 * For details see diagram in section 2.2.2 of IPU5 general
	 * fixed function MAS. Choose between pixel stream and
	 * delta stream as BNLM output (gpreg 1)
	 */
	IPU_DEVICE_GP_PSA_1_NOISE_MUX_BNLM_PIXELS = 0,
	IPU_DEVICE_GP_PSA_1_NOISE_MUX_DELTA_STREAM = 1,
	/* enable/disable BNLM Pixel Block (gpreg 2) */
	IPU_DEVICE_GP_PSA_1_BNLM_PIXEL_STREAM_BLOCK_DISABLE = 0,
	IPU_DEVICE_GP_PSA_1_BNLM_PIXEL_STREAM_BLOCK_ENABLE = 1,
	/* enable/disable BNLM delta stream (gpreg 3) */
	IPU_DEVICE_GP_PSA_1_BNLM_DELTA_STREAM_BLOCK_DISABLE = 0,
	IPU_DEVICE_GP_PSA_1_BNLM_DELTA_STREAM_BLOCK_ENABLE = 1,
	/* choose BNLM output to XNR or to WB/DM (gpreg 0) */
	IPU_DEVICE_GP_PSA_2_BNLM_TO_XNR = 0,
	IPU_DEVICE_GP_PSA_2_BNLM_TO_WB_DM = 1,
	/* choose direction of output from vec2str 4 (gpreg 4) */
	IPU_DEVICE_GP_PSA_2_V2S_RGB_4_TO_GTC = 0,
	IPU_DEVICE_GP_PSA_2_V2S_RGB_4_TO_ACM = 1,
	IPU_DEVICE_GP_PSA_2_V2S_RGB_4_TO_VCSC = 2,
	IPU_DEVICE_GP_PSA_2_V2S_RGB_4_TO_GSTAR = 3,
	/* enable/disable VCSC input block (gpreg 7) */
	IPU_DEVICE_GP_PSA_2_VCSC_INPUT_BLOCK_DISABLE = 0,
	IPU_DEVICE_GP_PSA_2_VCSC_INPUT_BLOCK_ENABLE = 1,
	/* enable/disable XNR5 bypass block (gpreg 8) */
	IPU_DEVICE_GP_PSA_2_XNR5_BP_BLOCK_DISABLE = 0,
	IPU_DEVICE_GP_PSA_2_XNR5_BP_BLOCK_ENABLE = 1,
	/* choose to use VCSC or bypass it (gpreg 5) */
	IPU_DEVICE_GP_PSA_3_MUX_USE_VCSC = 0,
	IPU_DEVICE_GP_PSA_3_MUX_BP_VCSC = 1,
	/* choose to use XNR5 or bypass it (gpreg 6) */
	IPU_DEVICE_GP_PSA_3_MUX_USE_XNR5 = 0,
	IPU_DEVICE_GP_PSA_3_MUX_BP_XNR5 = 1,
	/* choose which input to use for the BNLM acc */
	IPU_DEVICE_GP_PSA_1_BNLM_IN_MUX_V2S = 0,
	IPU_DEVICE_GP_PSA_1_BNLM_IN_MUX_ISA_DOWNSCALED = 1,
	IPU_DEVICE_GP_PSA_1_BNLM_IN_MUX_ISA_UNSCALED = 2,
	IPU_DEVICE_GP_PSA_CONF_INVALID = 0xFF
};

enum ipu_device_gp_isl_value {
	/* choose and route pixel stream to CSI BE */
	IPU_DEVICE_GP_ISL_CSI_BE_IN_USE = 0,
	/* choose and route pixel stream bypass CSI BE */
	IPU_DEVICE_GP_ISL_CSI_BE_BYPASS
};

#endif /* __IPU_DEVICE_GP_PROPERTIES_TYPES_H */

