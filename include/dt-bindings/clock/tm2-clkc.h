/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef __TM2_CLKC_H
#define __TM2_CLKC_H

#define CLKID_SYS_PLL				0
#define CLKID_FIXED_PLL				1
#define CLKID_FCLK_DIV2				2
#define CLKID_FCLK_DIV3				3
#define CLKID_FCLK_DIV4				4
#define CLKID_FCLK_DIV5				5
#define CLKID_FCLK_DIV7				6
#define CLKID_FCLK_DIV2P5			7
#define CLKID_GP0_PLL				8
#define CLKID_GP1_PLL				9
#define CLKID_MPEG_SEL				10
#define CLKID_MPEG_DIV				11
#define CLKID_CLK81				12
#define CLKID_MPLL0				13
#define CLKID_MPLL1				14
#define CLKID_MPLL2				15
#define CLKID_MPLL3				16
#define CLKID_MPLL0_DIV				17
#define CLKID_MPLL1_DIV				18
#define CLKID_MPLL2_DIV				19
#define CLKID_MPLL3_DIV				20
#define CLKID_FCLK_DIV2_DIV			21
#define CLKID_FCLK_DIV3_DIV			22
#define CLKID_FCLK_DIV4_DIV			23
#define CLKID_FCLK_DIV5_DIV			24
#define CLKID_FCLK_DIV7_DIV			25
#define CLKID_FCLK_DIV2P5_DIV			26
#define CLKID_HIFI_PLL				27
#define CLKID_FIXED_PLL_DCO			28
#define CLKID_SYS_PLL_DCO			29
#define CLKID_GP0_PLL_DCO			30
#define CLKID_HIFI_PLL_DCO			31
#define CLKID_MPLL_PREDIV			32
#define CLKID_PCIE_PLL_DCO			33
#define CLKID_PCIE_PLL_DCO_DIV2			34
#define CLKID_PCIE_PLL_OD			35
#define CLKID_PCIE_PLL				36
#define CLKID_PCIE_PRE_EN			37
#define CLKID_PCIE_HCSL0			38
#define CLKID_PCIE_HCSL1			39
#define CLKID_GP1_PLL_DCO			40
#define CLKID_PCIE_BGP				41

/*HHI_GCLK_MPEG0: 0x50*/
#define GATE_BASE0				42
#define CLKID_DDR				(GATE_BASE0 + 0)
#define CLKID_DOS				(GATE_BASE0 + 1)
#define CLKID_ETH_PHY				(GATE_BASE0 + 2)
#define CLKID_ISA				(GATE_BASE0 + 3)
#define CLKID_PL310				(GATE_BASE0 + 4)
#define CLKID_PERIPHS				(GATE_BASE0 + 5)
#define CLKID_SPICC0				(GATE_BASE0 + 6)
#define CLKID_I2C				(GATE_BASE0 + 7)
#define CLKID_SANA				(GATE_BASE0 + 8)
#define CLKID_SMART_CARD			(GATE_BASE0 + 9)
#define CLKID_UART0				(GATE_BASE0 + 10)
#define CLKID_SPICC1				(GATE_BASE0 + 11)
#define CLKID_STREAM				(GATE_BASE0 + 12)
#define CLKID_ASYNC_FIFO			(GATE_BASE0 + 13)
#define CLKID_TVFE				(GATE_BASE0 + 14)
#define CLKID_HIU_REG				(GATE_BASE0 + 15)
#define CLKID_HDMIRX_PCLK			(GATE_BASE0 + 16)
#define CLKID_ATV_DEMOD				(GATE_BASE0 + 17)
#define CLKID_ASSIST_MISC			(GATE_BASE0 + 18)
#define CLKID_SD_EMMC_B				(GATE_BASE0 + 19)
#define CLKID_SD_EMMC_C				(GATE_BASE0 + 20)
#define CLKID_ADEC				(GATE_BASE0 + 21)
#define CLKID_ACODEC				(GATE_BASE0 + 22)
#define CLKID_TCON				(GATE_BASE0 + 23)
#define CLKID_SPI				(GATE_BASE0 + 24)
#define CLKID_DSP				(GATE_BASE0 + 25)
/*HHI_GCLK_MPEG1: 0x51*/
#define GATE_BASE1				(GATE_BASE0 + 26)
#define CLKID_AUDIO				(GATE_BASE1 + 0)
#define CLKID_ETH_CORE				(GATE_BASE1 + 1)
#define CLKID_DEMUX				(GATE_BASE1 + 2)
#define CLKID_AIFIFO				(GATE_BASE1 + 3)
#define CLKID_ADC				(GATE_BASE1 + 4)
#define CLKID_UART1				(GATE_BASE1 + 5)
#define CLKID_G2D				(GATE_BASE1 + 6)
#define CLKID_RESET				(GATE_BASE1 + 7)
#define CLKID_U_PARSER				(GATE_BASE1 + 8)
#define CLKID_USB_GENERAL			(GATE_BASE1 + 9)
#define CLKID_AHB_ARB0				(GATE_BASE1 + 10)
/*HHI_GCLK_MPEG2: 0x52*/
#define GATE_BASE2				(GATE_BASE1 + 11)
#define CLKID_AHB_DATA_BUS			(GATE_BASE2 + 0)
#define CLKID_AHB_CTRL_BUS			(GATE_BASE2 + 1)
#define CLKID_BT656				(GATE_BASE2 + 2)
#define CLKID_USB1_TO_DDR			(GATE_BASE2 + 3)
#define CLKID_MMC_PCLK				(GATE_BASE2 + 4)
#define CLKID_UART2				(GATE_BASE2 + 5)
#define CLKID_CLK81_TS				(GATE_BASE2 + 6)
#define CLKID_VPU_INTR				(GATE_BASE2 + 7)
#define CLKID_DEMOD_COMB			(GATE_BASE2 + 8)
#define CLKID_GIC				(GATE_BASE2 + 9)
/*HHI_GCLK_OTHER: 0x55*/
#define GATE_OTHER				(GATE_BASE2 + 10)
#define CLKID_VCLK2_VENCI0			(GATE_OTHER + 0)
#define CLKID_VCLK2_VENCI1			(GATE_OTHER + 1)
#define CLKID_VCLK2_VENCP0			(GATE_OTHER + 2)
#define CLKID_VCLK2_VENCP1			(GATE_OTHER + 3)
#define CLKID_VCLK2_VENCT0			(GATE_OTHER + 4)
#define CLKID_VCLK2_VENCT1			(GATE_OTHER + 5)
#define CLKID_VCLK2_OTHER			(GATE_OTHER + 6)
#define CLKID_VCLK2_ENCI			(GATE_OTHER + 7)
#define CLKID_VCLK2_ENCP			(GATE_OTHER + 8)
#define CLKID_DAC_CLK				(GATE_OTHER + 9)
#define CLKID_ENC480P				(GATE_OTHER + 10)
#define CLKID_RNG1				(GATE_OTHER + 11)
#define CLKID_VCLK2_ENCT			(GATE_OTHER + 12)
#define CLKID_VCLK2_ENCL			(GATE_OTHER + 13)
#define CLKID_VCLK2_VENCLMMC			(GATE_OTHER + 14)
#define CLKID_VCLK2_VENCL			(GATE_OTHER + 15)
#define CLKID_VCLK2_OTHER1			(GATE_OTHER + 16)
/*TM2 new added*/
#define CLKID_VIPNANOQ				(GATE_OTHER + 17)
#define CLKID_PCIE0				(GATE_OTHER + 18)
#define CLKID_PCIE1				(GATE_OTHER + 19)
#define CLKID_PCIE1PHY				(GATE_OTHER + 20)
#define CLKID_PCIE0PHY				(GATE_OTHER + 21)
#define CLKID_PARSER1				(GATE_OTHER + 22)
#define CLKID_HDCP22_PCLK			(GATE_OTHER + 23)
#define CLKID_HDMITX_PCLK			(GATE_OTHER + 24)
#define CLKID_HDMITX_AXI_PCLK			(GATE_OTHER + 25)
#define CLKID_DSPB				(GATE_OTHER + 26)
#define CLKID_DSPA				(GATE_OTHER + 27)
#define CLKID_DMA				(GATE_OTHER + 28)
#define CLKID_EFUSE				(GATE_OTHER + 29)
#define CLKID_ROM_BOOT				(GATE_OTHER + 30)
#define CLKID_RESET_SEC				(GATE_OTHER + 31)
#define CLKID_SEC_APH_APB3			(GATE_OTHER + 32)

#define EMMC_BASE				(GATE_OTHER + 33)
#define CLKID_SD_EMMC_B_CLK0_SEL		(EMMC_BASE + 0)
#define CLKID_SD_EMMC_B_CLK0_DIV		(EMMC_BASE + 1)
#define CLKID_SD_EMMC_B_CLK0			(EMMC_BASE + 2)
#define CLKID_SD_EMMC_C_CLK0_SEL		(EMMC_BASE + 3)
#define CLKID_SD_EMMC_C_CLK0_DIV		(EMMC_BASE + 4)
#define CLKID_SD_EMMC_C_CLK0			(EMMC_BASE + 5)

#define DSP_BASE				(EMMC_BASE + 6)
#define CLKID_DSPA_A_MUX			(DSP_BASE + 0)
#define CLKID_DSPA_A_DIV			(DSP_BASE + 1)
#define CLKID_DSPA_A_GATE			(DSP_BASE + 2)
#define CLKID_DSPA_B_MUX			(DSP_BASE + 3)
#define CLKID_DSPA_B_DIV			(DSP_BASE + 4)
#define CLKID_DSPA_B_GATE			(DSP_BASE + 5)
#define CLKID_DSPA_MUX				(DSP_BASE + 6)
#define CLKID_DSPB_A_MUX			(DSP_BASE + 7)
#define CLKID_DSPB_A_DIV			(DSP_BASE + 8)
#define CLKID_DSPB_A_GATE			(DSP_BASE + 9)
#define CLKID_DSPB_B_MUX			(DSP_BASE + 10)
#define CLKID_DSPB_B_DIV			(DSP_BASE + 11)
#define CLKID_DSPB_B_GATE			(DSP_BASE + 12)
#define CLKID_DSPB_MUX				(DSP_BASE + 13)

#define VIDEO_BASE				(DSP_BASE + 14)
#define CLKID_VPU_0_SEL				(VIDEO_BASE + 0)
#define CLKID_VPU_0				(VIDEO_BASE + 1)
#define CLKID_VPU_1_SEL				(VIDEO_BASE + 2)
#define CLKID_VPU_1				(VIDEO_BASE + 3)
#define CLKID_VPU				(VIDEO_BASE + 4)
#define CLKID_VAPB_0_SEL			(VIDEO_BASE + 5)
#define CLKID_VAPB_0				(VIDEO_BASE + 6)
#define CLKID_VAPB_1_SEL			(VIDEO_BASE + 7)
#define CLKID_VAPB_1				(VIDEO_BASE + 8)
#define CLKID_VAPB_SEL				(VIDEO_BASE + 9)
#define CLKID_VAPB				(VIDEO_BASE + 10)
#define CLKID_HDMI_PLL				(VIDEO_BASE + 11)
#define CLKID_VID_PLL				(VIDEO_BASE + 12)
#define CLKID_VCLK				(VIDEO_BASE + 13)
#define CLKID_VCLK2				(VIDEO_BASE + 14)
#define CLKID_VCLK_DIV1				(VIDEO_BASE + 15)
#define CLKID_VCLK_DIV2				(VIDEO_BASE + 16)
#define CLKID_VCLK_DIV4				(VIDEO_BASE + 17)
#define CLKID_VCLK_DIV6				(VIDEO_BASE + 18)
#define CLKID_VCLK_DIV12			(VIDEO_BASE + 19)
#define CLKID_VCLK2_DIV1			(VIDEO_BASE + 20)
#define CLKID_VCLK2_DIV2			(VIDEO_BASE + 21)
#define CLKID_VCLK2_DIV4			(VIDEO_BASE + 22)
#define CLKID_VCLK2_DIV6			(VIDEO_BASE + 23)
#define CLKID_VCLK2_DIV12			(VIDEO_BASE + 24)
#define CLKID_CTS_ENCI				(VIDEO_BASE + 25)
#define CLKID_CTS_ENCP				(VIDEO_BASE + 26)
#define CLKID_CTS_VDAC				(VIDEO_BASE + 27)
#define CLKID_HDMI_TX				(VIDEO_BASE + 28)
#define CLKID_HDMI				(VIDEO_BASE + 29)
#define CLKID_MALI_0_SEL			(VIDEO_BASE + 30)
#define CLKID_MALI_0				(VIDEO_BASE + 31)
#define CLKID_MALI_1_SEL			(VIDEO_BASE + 32)
#define CLKID_MALI_1				(VIDEO_BASE + 33)
#define CLKID_MALI				(VIDEO_BASE + 34)
#define CLKID_VPU_0_DIV				(VIDEO_BASE + 35)
#define CLKID_VPU_1_DIV				(VIDEO_BASE + 36)
#define CLKID_VAPB_0_DIV			(VIDEO_BASE + 37)
#define CLKID_VAPB_1_DIV			(VIDEO_BASE + 38)
#define CLKID_HDMI_PLL_DCO			(VIDEO_BASE + 39)
#define CLKID_HDMI_PLL_OD			(VIDEO_BASE + 40)
#define CLKID_HDMI_PLL_OD2			(VIDEO_BASE + 41)
#define CLKID_VID_PLL_SEL			(VIDEO_BASE + 42)
#define CLKID_VID_PLL_DIV			(VIDEO_BASE + 43)
#define CLKID_VCLK_SEL				(VIDEO_BASE + 44)
#define CLKID_VCLK2_SEL				(VIDEO_BASE + 45)
#define CLKID_VCLK_INPUT			(VIDEO_BASE + 46)
#define CLKID_VCLK2_INPUT			(VIDEO_BASE + 47)
#define CLKID_VCLK_DIV				(VIDEO_BASE + 48)
#define CLKID_VCLK2_DIV				(VIDEO_BASE + 49)
#define CLKID_VCLK_DIV2_EN			(VIDEO_BASE + 50)
#define CLKID_VCLK_DIV4_EN			(VIDEO_BASE + 51)
#define CLKID_VCLK_DIV6_EN			(VIDEO_BASE + 52)
#define CLKID_VCLK_DIV12_EN			(VIDEO_BASE + 53)
#define CLKID_VCLK2_DIV2_EN			(VIDEO_BASE + 54)
#define CLKID_VCLK2_DIV4_EN			(VIDEO_BASE + 55)
#define CLKID_VCLK2_DIV6_EN			(VIDEO_BASE + 56)
#define CLKID_VCLK2_DIV12_EN			(VIDEO_BASE + 57)
#define CLKID_CTS_ENCI_SEL			(VIDEO_BASE + 58)
#define CLKID_CTS_ENCP_SEL			(VIDEO_BASE + 59)
#define CLKID_CTS_VDAC_SEL			(VIDEO_BASE + 60)
#define CLKID_HDMI_TX_SEL			(VIDEO_BASE + 61)
#define CLKID_HDMI_SEL				(VIDEO_BASE + 62)
#define CLKID_HDMI_DIV				(VIDEO_BASE + 63)
#define CLKID_MALI_0_DIV			(VIDEO_BASE + 64)
#define CLKID_MALI_1_DIV			(VIDEO_BASE + 65)
#define CLKID_VDEC_1_SEL			(VIDEO_BASE + 66)
#define CLKID_VDEC_1_DIV			(VIDEO_BASE + 67)
#define CLKID_VDEC_HEVC_SEL			(VIDEO_BASE + 68)
#define CLKID_VDEC_HEVC_DIV			(VIDEO_BASE + 69)
#define CLKID_VDEC_HEVCF_SEL			(VIDEO_BASE + 70)
#define CLKID_VDEC_HEVCF_DIV			(VIDEO_BASE + 71)
#define CLKID_VDEC_1				(VIDEO_BASE + 72)
#define CLKID_VDEC_HEVC				(VIDEO_BASE + 73)
#define CLKID_VDEC_HEVCF			(VIDEO_BASE + 74)
#define CLKID_VIPNANOQ_CORE_MUX			(VIDEO_BASE + 75)
#define CLKID_VIPNANOQ_CORE_DIV			(VIDEO_BASE + 76)
#define CLKID_VIPNANOQ_CORE_GATE		(VIDEO_BASE + 77)
#define CLKID_VIPNANOQ_AXI_MUX			(VIDEO_BASE + 78)
#define CLKID_VIPNANOQ_AXI_DIV			(VIDEO_BASE + 79)
#define CLKID_VIPNANOQ_AXI_GATE			(VIDEO_BASE + 80)

#define MISC_BASE				(VIDEO_BASE + 81)
#define CLKID_MPLL_50M_DIV			(MISC_BASE + 0)
#define CLKID_MPLL_50M				(MISC_BASE + 1)
#define CLKID_SYS_PLL_DIV16_EN			(MISC_BASE + 2)
#define CLKID_SYS_PLL_DIV16			(MISC_BASE + 3)
#define CLKID_TS_DIV				(MISC_BASE + 4)
#define CLKID_TS				(MISC_BASE + 5)
#define CLKID_SPICC0_MUX			(MISC_BASE + 6)
#define CLKID_SPICC0_DIV			(MISC_BASE + 7)
#define CLKID_SPICC0_GATE			(MISC_BASE + 8)
#define CLKID_SPICC1_MUX			(MISC_BASE + 9)
#define CLKID_SPICC1_DIV			(MISC_BASE + 10)
#define CLKID_SPICC1_GATE			(MISC_BASE + 11)

#define CPU_BASE				(MISC_BASE + 12)
#define CLKID_CPU_CLK_DYN0_SEL			(CPU_BASE + 0)
#define CLKID_CPU_CLK_DYN0_DIV			(CPU_BASE + 1)
#define CLKID_CPU_CLK_DYN0			(CPU_BASE + 2)
#define CLKID_CPU_CLK_DYN1_SEL			(CPU_BASE + 3)
#define CLKID_CPU_CLK_DYN1_DIV			(CPU_BASE + 4)
#define CLKID_CPU_CLK_DYN1			(CPU_BASE + 5)
#define CLKID_CPU_CLK_DYN			(CPU_BASE + 6)
#define CLKID_CPU_CLK_DIV16_EN			(CPU_BASE + 7)
#define CLKID_CPU_CLK_DIV16			(CPU_BASE + 8)
#define CLKID_CPU_CLK_APB_DIV			(CPU_BASE + 9)
#define CLKID_CPU_CLK_APB			(CPU_BASE + 10)
#define CLKID_CPU_CLK_ATB_DIV			(CPU_BASE + 11)
#define CLKID_CPU_CLK_ATB			(CPU_BASE + 12)
#define CLKID_CPU_CLK_AXI_DIV			(CPU_BASE + 13)
#define CLKID_CPU_CLK_AXI			(CPU_BASE + 14)
#define CLKID_CPU_CLK_TRACE_DIV			(CPU_BASE + 15)
#define CLKID_CPU_CLK_TRACE			(CPU_BASE + 16)
#define CLKID_CPU_CLK				(CPU_BASE + 17)
#define CLKID_DSU_CLK_DYN0_SEL			(CPU_BASE + 18)
#define CLKID_DSU_CLK_DYN0_DIV			(CPU_BASE + 19)
#define CLKID_DSU_CLK_DYN0			(CPU_BASE + 20)
#define CLKID_DSU_CLK_DYN1_SEL			(CPU_BASE + 21)
#define CLKID_DSU_CLK_DYN1_DIV			(CPU_BASE + 22)
#define CLKID_DSU_CLK_DYN1			(CPU_BASE + 23)
#define CLKID_DSU_CLK_DYN			(CPU_BASE + 24)
#define CLKID_DSU_CLK_FINAL			(CPU_BASE + 25)
#define CLKID_DSU_CLK				(CPU_BASE + 26)
/* Media clocks */
#define MEDIA_BASE				(CPU_BASE + 27)
#define CLKID_DSI_MEAS_MUX			(MEDIA_BASE + 0)
#define CLKID_DSI_MEAS_DIV			(MEDIA_BASE + 1)
#define CLKID_DSI_MEAS				(MEDIA_BASE + 2)
#define CLKID_VDEC_P1_MUX			(MEDIA_BASE + 3)
#define CLKID_VDEC_P1_DIV			(MEDIA_BASE + 4)
#define CLKID_VDEC_P1				(MEDIA_BASE + 5)
#define CLKID_VDEC_MUX				(MEDIA_BASE + 6)
#define CLKID_HCODEC_P0_MUX			(MEDIA_BASE + 7)
#define CLKID_HCODEC_P0_DIV			(MEDIA_BASE + 8)
#define CLKID_HCODEC_P0				(MEDIA_BASE + 9)
#define CLKID_HCODEC_P1_MUX			(MEDIA_BASE + 10)
#define CLKID_HCODEC_P1_DIV			(MEDIA_BASE + 11)
#define CLKID_HCODEC_P1				(MEDIA_BASE + 12)
#define CLKID_HCODEC_MUX			(MEDIA_BASE + 13)
#define CLKID_HEVC_P1_MUX			(MEDIA_BASE + 14)
#define CLKID_HEVC_P1_DIV			(MEDIA_BASE + 15)
#define CLKID_HEVC_P1				(MEDIA_BASE + 16)
#define CLKID_HEVC_MUX				(MEDIA_BASE + 17)
#define CLKID_HEVCF_P1_MUX			(MEDIA_BASE + 18)
#define CLKID_HEVCF_P1_DIV			(MEDIA_BASE + 19)
#define CLKID_HEVCF_P1				(MEDIA_BASE + 20)
#define CLKID_HEVCF_MUX				(MEDIA_BASE + 21)
#define CLKID_VPU_CLKB_TMP_MUX			(MEDIA_BASE + 22)
#define CLKID_VPU_CLKB_TMP_DIV			(MEDIA_BASE + 23)
#define CLKID_VPU_CLKB_TMP			(MEDIA_BASE + 24)
#define CLKID_VPU_CLKB_DIV			(MEDIA_BASE + 25)
#define CLKID_VPU_CLKB				(MEDIA_BASE + 26)
#define CLKID_VPU_CLKC_P0_MUX			(MEDIA_BASE + 27)
#define CLKID_VPU_CLKC_P0_DIV			(MEDIA_BASE + 28)
#define CLKID_VPU_CLKC_P0			(MEDIA_BASE + 29)
#define CLKID_VPU_CLKC_P1_MUX			(MEDIA_BASE + 30)
#define CLKID_VPU_CLKC_P1_DIV			(MEDIA_BASE + 31)
#define CLKID_VPU_CLKC_P1			(MEDIA_BASE + 32)
#define CLKID_VPU_CLKC_MUX			(MEDIA_BASE + 33)
#define CLKID_VDIN_MEAS_MUX			(MEDIA_BASE + 34)
#define CLKID_VDIN_MEAS_DIV			(MEDIA_BASE + 35)
#define CLKID_VDIN_MEAS				(MEDIA_BASE + 36)
#define CLKID_HDMIRX_CFG_MUX			(MEDIA_BASE + 37)
#define CLKID_HDMIRX_CFG_DIV			(MEDIA_BASE + 38)
#define CLKID_HDMIRX_CFG_GATE			(MEDIA_BASE + 39)
#define CLKID_HDMIRX_MODET_MUX			(MEDIA_BASE + 40)
#define CLKID_HDMIRX_MODET_DIV			(MEDIA_BASE + 41)
#define CLKID_HDMIRX_MODET_GATE			(MEDIA_BASE + 42)
#define CLKID_HDMIRX_ACR_MUX			(MEDIA_BASE + 43)
#define CLKID_HDMIRX_ACR_DIV			(MEDIA_BASE + 44)
#define CLKID_HDMIRX_ACR_GATE			(MEDIA_BASE + 45)
#define CLKID_HDMIRX_METER_MUX			(MEDIA_BASE + 46)
#define CLKID_HDMIRX_METER_DIV			(MEDIA_BASE + 47)
#define CLKID_HDMIRX_METER_GATE			(MEDIA_BASE + 48)
#define CLKID_HDMIRX_AXI_MUX			(MEDIA_BASE + 49)
#define CLKID_HDMIRX_AXI_DIV			(MEDIA_BASE + 50)
#define CLKID_HDMIRX_AXI_GATE			(MEDIA_BASE + 51)
#define CLKID_HDMIRX_SKP_MUX			(MEDIA_BASE + 52)
#define CLKID_HDMIRX_SKP_DIV			(MEDIA_BASE + 53)
#define CLKID_HDMIRX_SKP_GATE			(MEDIA_BASE + 54)
#define CLKID_HDMIRX_ESM_MUX			(MEDIA_BASE + 55)
#define CLKID_HDMIRX_ESM_DIV			(MEDIA_BASE + 56)
#define CLKID_HDMIRX_ESM_GATE			(MEDIA_BASE + 57)

#define CLKID_END				(MEDIA_BASE + 58)

#endif /* __TM2_CLKC_H */
