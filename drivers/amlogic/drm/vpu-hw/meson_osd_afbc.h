/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef _MESON_OSD_AFBC_H_
#define _MESON_OSD_AFBC_H_

#include "meson_vpu_pipeline.h"

/*VPU_MAFBC_FORMAT_SPECIFIER_S0 define as follow*/
#define AFBC_EN			BIT(31)
#define TILED_HEADER_EN		BIT(18)
#define SUPER_BLOCK_ASPECT	BIT(16)
#define BLOCK_SPLIT		BIT(9)
#define YUV_TRANSFORM		BIT(8)

/* osd afbc control*/
#define MALI_AFBCD_TOP_CTRL 0x1a0f

/* osd afbc on g12a */
#define VPU_MAFBC_BLOCK_ID 0x3a00
#define VPU_MAFBC_IRQ_RAW_STATUS 0x3a01
#define VPU_MAFBC_IRQ_CLEAR 0x3a02
#define VPU_MAFBC_IRQ_MASK 0x3a03
#define VPU_MAFBC_IRQ_STATUS 0x3a04
#define VPU_MAFBC_COMMAND 0x3a05
#define VPU_MAFBC_STATUS 0x3a06
#define VPU_MAFBC_SURFACE_CFG 0x3a07

/* osd afbc on g12a */
#define VPU_MAFBC_HEADER_BUF_ADDR_LOW_S0 0x3a10
#define VPU_MAFBC_HEADER_BUF_ADDR_HIGH_S0 0x3a11
#define VPU_MAFBC_FORMAT_SPECIFIER_S0 0x3a12
#define VPU_MAFBC_BUFFER_WIDTH_S0 0x3a13
#define VPU_MAFBC_BUFFER_HEIGHT_S0 0x3a14
#define VPU_MAFBC_BOUNDING_BOX_X_START_S0 0x3a15
#define VPU_MAFBC_BOUNDING_BOX_X_END_S0 0x3a16
#define VPU_MAFBC_BOUNDING_BOX_Y_START_S0 0x3a17
#define VPU_MAFBC_BOUNDING_BOX_Y_END_S0 0x3a18
#define VPU_MAFBC_OUTPUT_BUF_ADDR_LOW_S0 0x3a19
#define VPU_MAFBC_OUTPUT_BUF_ADDR_HIGH_S0 0x3a1a
#define VPU_MAFBC_OUTPUT_BUF_STRIDE_S0 0x3a1b
#define VPU_MAFBC_PREFETCH_CFG_S0 0x3a1c

#define VPU_MAFBC_HEADER_BUF_ADDR_LOW_S1 0x3a30
#define VPU_MAFBC_HEADER_BUF_ADDR_HIGH_S1 0x3a31
#define VPU_MAFBC_FORMAT_SPECIFIER_S1 0x3a32
#define VPU_MAFBC_BUFFER_WIDTH_S1 0x3a33
#define VPU_MAFBC_BUFFER_HEIGHT_S1 0x3a34
#define VPU_MAFBC_BOUNDING_BOX_X_START_S1 0x3a35
#define VPU_MAFBC_BOUNDING_BOX_X_END_S1 0x3a36
#define VPU_MAFBC_BOUNDING_BOX_Y_START_S1 0x3a37
#define VPU_MAFBC_BOUNDING_BOX_Y_END_S1 0x3a38
#define VPU_MAFBC_OUTPUT_BUF_ADDR_LOW_S1 0x3a39
#define VPU_MAFBC_OUTPUT_BUF_ADDR_HIGH_S1 0x3a3a
#define VPU_MAFBC_OUTPUT_BUF_STRIDE_S1 0x3a3b
#define VPU_MAFBC_PREFETCH_CFG_S1 0x3a3c

#define VPU_MAFBC_HEADER_BUF_ADDR_LOW_S2 0x3a50
#define VPU_MAFBC_HEADER_BUF_ADDR_HIGH_S2 0x3a51
#define VPU_MAFBC_FORMAT_SPECIFIER_S2 0x3a52
#define VPU_MAFBC_BUFFER_WIDTH_S2 0x3a53
#define VPU_MAFBC_BUFFER_HEIGHT_S2 0x3a54
#define VPU_MAFBC_BOUNDING_BOX_X_START_S2 0x3a55
#define VPU_MAFBC_BOUNDING_BOX_X_END_S2 0x3a56
#define VPU_MAFBC_BOUNDING_BOX_Y_START_S2 0x3a57
#define VPU_MAFBC_BOUNDING_BOX_Y_END_S2 0x3a58
#define VPU_MAFBC_OUTPUT_BUF_ADDR_LOW_S2 0x3a59
#define VPU_MAFBC_OUTPUT_BUF_ADDR_HIGH_S2 0x3a5a
#define VPU_MAFBC_OUTPUT_BUF_STRIDE_S2 0x3a5b
#define VPU_MAFBC_PREFETCH_CFG_S2 0x3a5c

#define VPU_MAFBC_HEADER_BUF_ADDR_LOW_S3 0x3a70
#define VPU_MAFBC_HEADER_BUF_ADDR_HIGH_S3 0x3a71
#define VPU_MAFBC_FORMAT_SPECIFIER_S3 0x3a72
#define VPU_MAFBC_BUFFER_WIDTH_S3 0x3a73
#define VPU_MAFBC_BUFFER_HEIGHT_S3 0x3a74
#define VPU_MAFBC_BOUNDING_BOX_X_START_S3 0x3a75
#define VPU_MAFBC_BOUNDING_BOX_X_END_S3 0x3a76
#define VPU_MAFBC_BOUNDING_BOX_Y_START_S3 0x3a77
#define VPU_MAFBC_BOUNDING_BOX_Y_END_S3 0x3a78
#define VPU_MAFBC_OUTPUT_BUF_ADDR_LOW_S3 0x3a79
#define VPU_MAFBC_OUTPUT_BUF_ADDR_HIGH_S3 0x3a7a
#define VPU_MAFBC_OUTPUT_BUF_STRIDE_S3 0x3a7b
#define VPU_MAFBC_PREFETCH_CFG_S3 0x3a7c

#define VPU_MAFBC1_BLOCK_ID 0x3b00
#define VPU_MAFBC1_IRQ_RAW_STATUS 0x3b01
#define VPU_MAFBC1_IRQ_CLEAR 0x3b02
#define VPU_MAFBC1_IRQ_MASK 0x3b03
#define VPU_MAFBC1_IRQ_STATUS 0x3b04
#define VPU_MAFBC1_COMMAND 0x3b05
#define VPU_MAFBC1_STATUS 0x3b06
#define VPU_MAFBC1_SURFACE_CFG 0x3b07
#define VPU_MAFBC1_AXI_CFG 0x3b08
#define VPU_MAFBC1_HEADER_BUF_ADDR_LOW_S0 0x3b10
#define VPU_MAFBC1_HEADER_BUF_ADDR_HIGH_S0 0x3b11
#define VPU_MAFBC1_FORMAT_SPECIFIER_S0 0x3b12
#define VPU_MAFBC1_BUFFER_WIDTH_S0 0x3b13
#define VPU_MAFBC1_BUFFER_HEIGHT_S0 0x3b14
#define VPU_MAFBC1_BOUNDING_BOX_X_START_S0 0x3b15
#define VPU_MAFBC1_BOUNDING_BOX_X_END_S0 0x3b16
#define VPU_MAFBC1_BOUNDING_BOX_Y_START_S0 0x3b17
#define VPU_MAFBC1_BOUNDING_BOX_Y_END_S0 0x3b18
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_LOW_S0 0x3b19
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_HIGH_S0 0x3b1a
#define VPU_MAFBC1_OUTPUT_BUF_STRIDE_S0 0x3b1b
#define VPU_MAFBC1_PREFETCH_CFG_S0 0x3b1c
#define VPU_MAFBC1_PAYLOAD_MIN_LOW_S0 0x3b1d
#define VPU_MAFBC1_PAYLOAD_MIN_HIGH_S0 0x3b1e
#define VPU_MAFBC1_PAYLOAD_MAX_LOW_S0 0x3b1f
#define VPU_MAFBC1_PAYLOAD_MAX_HIGH_S0 0x3b20
#define VPU_MAFBC1_HEADER_BUF_ADDR_LOW_S1 0x3b30
#define VPU_MAFBC1_HEADER_BUF_ADDR_HIGH_S1 0x3b31
#define VPU_MAFBC1_FORMAT_SPECIFIER_S1 0x3b32
#define VPU_MAFBC1_BUFFER_WIDTH_S1 0x3b33
#define VPU_MAFBC1_BUFFER_HEIGHT_S1 0x3b34
#define VPU_MAFBC1_BOUNDING_BOX_X_START_S1 0x3b35
#define VPU_MAFBC1_BOUNDING_BOX_X_END_S1 0x3b36
#define VPU_MAFBC1_BOUNDING_BOX_Y_START_S1 0x3b37
#define VPU_MAFBC1_BOUNDING_BOX_Y_END_S1 0x3b38
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_LOW_S1 0x3b39
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_HIGH_S1 0x3b3a
#define VPU_MAFBC1_OUTPUT_BUF_STRIDE_S1 0x3b3b
#define VPU_MAFBC1_PREFETCH_CFG_S1 0x3b3c
#define VPU_MAFBC1_PAYLOAD_MIN_LOW_S1 0x3b3d
#define VPU_MAFBC1_PAYLOAD_MIN_HIGH_S1 0x3b3e
#define VPU_MAFBC1_PAYLOAD_MAX_LOW_S1 0x3b3f
#define VPU_MAFBC1_PAYLOAD_MAX_HIGH_S1 0x3b40
#define VPU_MAFBC1_HEADER_BUF_ADDR_LOW_S2 0x3b50
#define VPU_MAFBC1_HEADER_BUF_ADDR_HIGH_S2 0x3b51
#define VPU_MAFBC1_FORMAT_SPECIFIER_S2 0x3b52
#define VPU_MAFBC1_BUFFER_WIDTH_S2 0x3b53
#define VPU_MAFBC1_BUFFER_HEIGHT_S2 0x3b54
#define VPU_MAFBC1_BOUNDING_BOX_X_START_S2 0x3b55
#define VPU_MAFBC1_BOUNDING_BOX_X_END_S2 0x3b56
#define VPU_MAFBC1_BOUNDING_BOX_Y_START_S2 0x3b57
#define VPU_MAFBC1_BOUNDING_BOX_Y_END_S2 0x3b58
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_LOW_S2 0x3b59
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_HIGH_S2 0x3b5a
#define VPU_MAFBC1_OUTPUT_BUF_STRIDE_S2 0x3b5b
#define VPU_MAFBC1_PREFETCH_CFG_S2 0x3b5c
#define VPU_MAFBC1_PAYLOAD_MIN_LOW_S2 0x3b5d
#define VPU_MAFBC1_PAYLOAD_MIN_HIGH_S2 0x3b5e
#define VPU_MAFBC1_PAYLOAD_MAX_LOW_S2 0x3b5f
#define VPU_MAFBC1_PAYLOAD_MAX_HIGH_S2 0x3b60
#define VPU_MAFBC1_HEADER_BUF_ADDR_LOW_S3 0x3b70
#define VPU_MAFBC1_HEADER_BUF_ADDR_HIGH_S3 0x3b71
#define VPU_MAFBC1_FORMAT_SPECIFIER_S3 0x3b72
#define VPU_MAFBC1_BUFFER_WIDTH_S3 0x3b73
#define VPU_MAFBC1_BUFFER_HEIGHT_S3 0x3b74
#define VPU_MAFBC1_BOUNDING_BOX_X_START_S3 0x3b75
#define VPU_MAFBC1_BOUNDING_BOX_X_END_S3 0x3b76
#define VPU_MAFBC1_BOUNDING_BOX_Y_START_S3 0x3b77
#define VPU_MAFBC1_BOUNDING_BOX_Y_END_S3 0x3b78
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_LOW_S3 0x3b79
#define VPU_MAFBC1_OUTPUT_BUF_ADDR_HIGH_S3 0x3b7a
#define VPU_MAFBC1_OUTPUT_BUF_STRIDE_S3 0x3b7b
#define VPU_MAFBC1_PREFETCH_CFG_S3 0x3b7c
#define VPU_MAFBC1_PAYLOAD_MIN_LOW_S3 0x3b7d
#define VPU_MAFBC1_PAYLOAD_MIN_HIGH_S3 0x3b7e
#define VPU_MAFBC1_PAYLOAD_MAX_LOW_S3 0x3b7f
#define VPU_MAFBC1_PAYLOAD_MAX_HIGH_S3 0x3b80

#define VPU_MAFBC2_BLOCK_ID 0x3c00
#define VPU_MAFBC2_IRQ_RAW_STATUS 0x3c01
#define VPU_MAFBC2_IRQ_CLEAR 0x3c02
#define VPU_MAFBC2_IRQ_MASK 0x3c03
#define VPU_MAFBC2_IRQ_STATUS 0x3c04
#define VPU_MAFBC2_COMMAND 0x3c05
#define VPU_MAFBC2_STATUS 0x3c06
#define VPU_MAFBC2_SURFACE_CFG 0x3c07
#define VPU_MAFBC2_AXI_CFG 0x3c08
#define VPU_MAFBC2_HEADER_BUF_ADDR_LOW_S0 0x3c10
#define VPU_MAFBC2_HEADER_BUF_ADDR_HIGH_S0 0x3c11
#define VPU_MAFBC2_FORMAT_SPECIFIER_S0 0x3c12
#define VPU_MAFBC2_BUFFER_WIDTH_S0 0x3c13
#define VPU_MAFBC2_BUFFER_HEIGHT_S0 0x3c14
#define VPU_MAFBC2_BOUNDING_BOX_X_START_S0 0x3c15
#define VPU_MAFBC2_BOUNDING_BOX_X_END_S0 0x3c16
#define VPU_MAFBC2_BOUNDING_BOX_Y_START_S0 0x3c17
#define VPU_MAFBC2_BOUNDING_BOX_Y_END_S0 0x3c18
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_LOW_S0 0x3c19
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_HIGH_S0 0x3c1a
#define VPU_MAFBC2_OUTPUT_BUF_STRIDE_S0 0x3c1b
#define VPU_MAFBC2_PREFETCH_CFG_S0 0x3c1c
#define VPU_MAFBC2_PAYLOAD_MIN_LOW_S0 0x3c1d
#define VPU_MAFBC2_PAYLOAD_MIN_HIGH_S0 0x3c1e
#define VPU_MAFBC2_PAYLOAD_MAX_LOW_S0 0x3c1f
#define VPU_MAFBC2_PAYLOAD_MAX_HIGH_S0 0x3c20
#define VPU_MAFBC2_HEADER_BUF_ADDR_LOW_S1 0x3c30
#define VPU_MAFBC2_HEADER_BUF_ADDR_HIGH_S1 0x3c31
#define VPU_MAFBC2_FORMAT_SPECIFIER_S1 0x3c32
#define VPU_MAFBC2_BUFFER_WIDTH_S1 0x3c33
#define VPU_MAFBC2_BUFFER_HEIGHT_S1 0x3c34
#define VPU_MAFBC2_BOUNDING_BOX_X_START_S1 0x3c35
#define VPU_MAFBC2_BOUNDING_BOX_X_END_S1 0x3c36
#define VPU_MAFBC2_BOUNDING_BOX_Y_START_S1 0x3c37
#define VPU_MAFBC2_BOUNDING_BOX_Y_END_S1 0x3c38
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_LOW_S1 0x3c39
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_HIGH_S1 0x3c3a
#define VPU_MAFBC2_OUTPUT_BUF_STRIDE_S1 0x3c3b
#define VPU_MAFBC2_PREFETCH_CFG_S1 0x3c3c
#define VPU_MAFBC2_PAYLOAD_MIN_LOW_S1 0x3c3d
#define VPU_MAFBC2_PAYLOAD_MIN_HIGH_S1 0x3c3e
#define VPU_MAFBC2_PAYLOAD_MAX_LOW_S1 0x3c3f
#define VPU_MAFBC2_PAYLOAD_MAX_HIGH_S1 0x3c40
#define VPU_MAFBC2_HEADER_BUF_ADDR_LOW_S2 0x3c50
#define VPU_MAFBC2_HEADER_BUF_ADDR_HIGH_S2 0x3c51
#define VPU_MAFBC2_FORMAT_SPECIFIER_S2 0x3c52
#define VPU_MAFBC2_BUFFER_WIDTH_S2 0x3c53
#define VPU_MAFBC2_BUFFER_HEIGHT_S2 0x3c54
#define VPU_MAFBC2_BOUNDING_BOX_X_START_S2 0x3c55
#define VPU_MAFBC2_BOUNDING_BOX_X_END_S2 0x3c56
#define VPU_MAFBC2_BOUNDING_BOX_Y_START_S2 0x3c57
#define VPU_MAFBC2_BOUNDING_BOX_Y_END_S2 0x3c58
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_LOW_S2 0x3c59
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_HIGH_S2 0x3c5a
#define VPU_MAFBC2_OUTPUT_BUF_STRIDE_S2 0x3c5b
#define VPU_MAFBC2_PREFETCH_CFG_S2 0x3c5c
#define VPU_MAFBC2_PAYLOAD_MIN_LOW_S2 0x3c5d
#define VPU_MAFBC2_PAYLOAD_MIN_HIGH_S2 0x3c5e
#define VPU_MAFBC2_PAYLOAD_MAX_LOW_S2 0x3c5f
#define VPU_MAFBC2_PAYLOAD_MAX_HIGH_S2 0x3c60
#define VPU_MAFBC2_HEADER_BUF_ADDR_LOW_S3 0x3c70
#define VPU_MAFBC2_HEADER_BUF_ADDR_HIGH_S3 0x3c71
#define VPU_MAFBC2_FORMAT_SPECIFIER_S3 0x3c72
#define VPU_MAFBC2_BUFFER_WIDTH_S3 0x3c73
#define VPU_MAFBC2_BUFFER_HEIGHT_S3 0x3c74
#define VPU_MAFBC2_BOUNDING_BOX_X_START_S3 0x3c75
#define VPU_MAFBC2_BOUNDING_BOX_X_END_S3 0x3c76
#define VPU_MAFBC2_BOUNDING_BOX_Y_START_S3 0x3c77
#define VPU_MAFBC2_BOUNDING_BOX_Y_END_S3 0x3c78
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_LOW_S3 0x3c79
#define VPU_MAFBC2_OUTPUT_BUF_ADDR_HIGH_S3 0x3c7a
#define VPU_MAFBC2_OUTPUT_BUF_STRIDE_S3 0x3c7b
#define VPU_MAFBC2_PREFETCH_CFG_S3 0x3c7c
#define VPU_MAFBC2_PAYLOAD_MIN_LOW_S3 0x3c7d
#define VPU_MAFBC2_PAYLOAD_MIN_HIGH_S3 0x3c7e
#define VPU_MAFBC2_PAYLOAD_MAX_LOW_S3 0x3c7f
#define VPU_MAFBC2_PAYLOAD_MAX_HIGH_S3 0x3c80

struct afbc_osd_reg_s {
	u32 vpu_mafbc_header_buf_addr_low_s;
	u32 vpu_mafbc_header_buf_addr_high_s;
	u32 vpu_mafbc_format_specifier_s;
	u32 vpu_mafbc_buffer_width_s;
	u32 vpu_mafbc_buffer_height_s;
	u32 vpu_mafbc_bounding_box_x_start_s;
	u32 vpu_mafbc_bounding_box_x_end_s;
	u32 vpu_mafbc_bounding_box_y_start_s;
	u32 vpu_mafbc_bounding_box_y_end_s;
	u32 vpu_mafbc_output_buf_addr_low_s;
	u32 vpu_mafbc_output_buf_addr_high_s;
	u32 vpu_mafbc_output_buf_stride_s;
	u32 vpu_mafbc_prefetch_cfg_s;
	u32 vpu_mafbc_payload_min_low_s;
	u32 vpu_mafbc_payload_min_high_s;
	u32 vpu_mafbc_payload_max_low_s;
	u32 vpu_mafbc_payload_max_high_s;
};

struct afbc_status_reg_s {
	u32 vpu_mafbc_block_id;
	u32 vpu_mafbc_irq_raw_status;
	u32 vpu_mafbc_irq_clear;
	u32 vpu_mafbc_irq_mask;
	u32 vpu_mafbc_irq_status;
	u32 vpu_mafbc_command;
	u32 vpu_mafbc_status;
	u32 vpu_mafbc_surface_cfg;
	u32 mali_afbcd_top_ctrl;
};

enum afbc_pix_format_e {
	RGB565 = 0,
	RGBA5551,
	RGBA1010102,
	YUV420_10B,
	RGB888,
	RGBA8888,
	RGBA4444,
	R8,
	RG88,
	YUV420_8B,
	YUV422_8B = 11,
	YUV422_10B = 14,
};

void arm_fbc_start(struct meson_vpu_pipeline_state *pipeline_state);
void arm_fbc_check_error(void);

#endif
