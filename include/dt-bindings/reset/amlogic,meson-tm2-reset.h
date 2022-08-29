/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_AMLOGIC_MESON_TM2_RESET_H
#define _DT_BINDINGS_AMLOGIC_MESON_TM2_RESET_H

/*	RESET0					*/
#define RESET_HIU			0
#define RESET_HDMI_ARBAXI		1
#define RESET_DOS			2
#define RESET_DDR_TOP			3
/*					4	*/
#define RESET_VIU			5
#define RESET_AFIFO			6
#define RESET_VID_PLL_DIV		7
#define RESET_DEMOD			8
#define RESET_HDMIRX			9
#define RESET_VENC			10
#define RESET_ASSIST			11
#define RESET_PCIE_CTRL_A		12
#define RESET_VCBUS			13
#define RESET_PCIE_PHY			14
#define RESET_PCIE_APB			15
#define RESET_GIC			16
#define RESET_CAPB3_DECODE		17
#define RESET_HDMIRX_APB		18
#define RESET_PDMITX_CAPB3		19
#define RESET_MALI_CAPB3		20
#define RESET_DOS_CAPB3			21
/*					22	*/
#define RESET_CBUS_CAPB3		23
#define RESET_AHB_CNTL			24
#define RESET_AHB_DATA			25
#define RESET_VCBUS_CLK81		26
/*					27	*/
#define RESET_PCIE1_A			28
#define RESET_PCIE1_PHY			29
#define RESET_PCIE1_APB			30
#define RESET_HDMI_ARBAXI_RG		31
/*	RESET1					*/
/*					32	*/
#define RESET_DEMUX			33
#define RESET_USB			34
#define RESET_DDR			35
#define RESET_AML_TCON			36
#define RESET_BT656			37
#define RESET_AHB_SRAM			38
#define RESET_TVFE_TOP			39
#define RESET_PARSER			40
#define RESET_AVT_DMD			41
#define RESET_ISA			42
#define RESET_ETHERNET			43
#define RESET_HDMI_ARBAXI_APB		44
#define RESET_SD_EMMC_B			45
#define RESET_SD_EMMC_C			46
/*					47	*/
#define RESET_USB_PHY20			48
#define RESET_USB_PHY21			49
#define RESET_USB_PHY22			50
#define RESET_USB_PHY23			51
#define RESET_DSPA_DBG			52
#define RESET_DSPB_DBG			53
/*					54-60	*/
#define RESET_AUDIO_CODEC		61
/*					62-63	*/
/*	RESET2					*/
/*					64	*/
#define RESET_AUDIO			65
#define RESET_HDMITX_TX			66
#define RESET_ADEC_TOP_WRAP		67
/*					68-69	*/
#define RESET_GE2D			70
#define RESET_PARSER_REG		71
#define RESET_PARSER_FETCH		72
#define RESET_CTL			73
#define RESET_PARSER_TOP		74
/*					75	*/
#define RESET_VIPNANOG			76
/*					77	*/
#define RESET_MALI			78
#define RESET_HDMITX			79
/*					80-95	*/
/*	RESET3					*/
#define RESET_DMUX_S2P_2		96
/*					97-99	*/
#define RESET_PARSER1_TOP		100
#define RESET_PARSER1			101
#define RESET_PARSER1_REG		102
#define RESET_PARSER1_FETCH		103
#define RESET_PARSER1_CTL		104
#define RESET_DEMUX_TOP			105
#define RESET_DEMUX_DES_PL		106
#define RESET_DEMUX_S2P_0		107
#define RESET_DEMUX_S2P_1		108
#define RESET_DEMUX_0			109
#define RESET_DEMUX_1			110
#define RESET_DEMUX_2			111
/*					112-127	*/
/*	RESET4					*/
#define RESET_DSPA			128
#define RESET_DSPB			129
/*					130-132	*/
#define RESET_RDMA			133
#define RESET_VENCI			134
#define RESET_VENCP			135
/*					136	*/
#define RESET_VDAC			137
/*					138-139 */
#define RESET_VDI6			140
#define RESET_VENCL			141
#define RESET_I2C_M1			142
#define RESET_I2C_M2			143
/*					144-159	*/
/*	RESET5					*/
/*					160-191	*/
/*	RESET6					*/
#define RESET_GEN			192
#define RESET_SPICC0			193
#define RESET_SC			194
#define RESET_SANA_3			195
#define RESET_I2C_M0			196
#define RESET_TS_PLL			197
#define RESET_SPICC1			198
#define RESET_STREAM			199
#define RESET_TS_DDR			200
#define RESET_UART0			201
#define RESET_UART1_2			202
#define RESET_ASYNC0			203
#define RESET_ASYNC1			204
#define RESET_SPIFC0			205
#define RESET_I2C_M3			206
#define RESET_ASYNC3			207
/*					208-223	*/
/*	RESET7					*/
#define RESET_USB_DDR_0			224
#define RESET_USB_DDR_1			225
#define RESET_USB_DDR_2			226
#define RESET_USB_DDR_3			227
#define RESET_TS_SAR			228
#define RESET_DEVICE_MMC_ARB		229
#define RESET_MALI_DMC_PIPL		230
#define RESET_VPU_VID_LOCK		231
#define RESET_A53_DMC_PIPL		232
#define RESET_DMC_VPU_PIPL		233
#define RESET_GE2D_DMC_PIPL		234
#define RESET_HCODEC_PIPL		235
/*					236	*/
#define RESET_HEVCF_DM_PIPL		237
/*					238-255	*/

#endif
