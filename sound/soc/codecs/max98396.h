/* SPDX-License-Identifier: GPL-2.0 */
/*
 * max98396.h -- MAX98396 ALSA SoC audio driver header
 *
 * Copyright(c) 2022, Analog Devices Inc.
 */

#ifndef _MAX98396_H
#define _MAX98396_H

#define MAX98396_R2000_SW_RESET			0x2000
#define MAX98396_R2001_INT_RAW1			0x2001
#define MAX98396_R2002_INT_RAW2			0x2002
#define MAX98396_R2003_INT_RAW3			0x2003
#define MAX98396_R2004_INT_RAW4			0x2004
#define MAX98396_R2006_INT_STATE1		0x2006
#define MAX98396_R2007_INT_STATE2		0x2007
#define MAX98396_R2008_INT_STATE3		0x2008
#define MAX98396_R2009_INT_STATE4		0x2009
#define MAX98396_R200B_INT_FLAG1		0x200B
#define MAX98396_R200C_INT_FLAG2		0x200C
#define MAX98396_R200D_INT_FLAG3		0x200D
#define MAX98396_R200E_INT_FLAG4		0x200E
#define MAX98396_R2010_INT_EN1			0x2010
#define MAX98396_R2011_INT_EN2			0x2011
#define MAX98396_R2012_INT_EN3			0x2012
#define MAX98396_R2013_INT_EN4			0x2013
#define MAX98396_R2015_INT_FLAG_CLR1		0x2015
#define MAX98396_R2016_INT_FLAG_CLR2		0x2016
#define MAX98396_R2017_INT_FLAG_CLR3		0x2017
#define MAX98396_R2018_INT_FLAG_CLR4		0x2018
#define MAX98396_R201F_IRQ_CTRL			0x201F
#define MAX98396_R2020_THERM_WARN_THRESH	0x2020
#define MAX98396_R2021_THERM_WARN_THRESH2	0x2021
#define MAX98396_R2022_THERM_SHDN_THRESH	0x2022
#define MAX98396_R2023_THERM_HYSTERESIS		0x2023
#define MAX98396_R2024_THERM_FOLDBACK_SET	0x2024
#define MAX98396_R2027_THERM_FOLDBACK_EN	0x2027
#define MAX98396_R2030_NOISEGATE_MODE_CTRL	0x2030
#define MAX98396_R2033_NOISEGATE_MODE_EN	0x2033
#define MAX98396_R2038_CLK_MON_CTRL		0x2038
#define MAX98396_R2039_DATA_MON_CTRL		0x2039
#define MAX98396_R203F_ENABLE_CTRLS		0x203F
#define MAX98396_R2040_PIN_CFG			0x2040
#define MAX98396_R2041_PCM_MODE_CFG		0x2041
#define MAX98396_R2042_PCM_CLK_SETUP		0x2042
#define MAX98396_R2043_PCM_SR_SETUP		0x2043
#define MAX98396_R2044_PCM_TX_CTRL_1		0x2044
#define MAX98396_R2045_PCM_TX_CTRL_2		0x2045
#define MAX98396_R2046_PCM_TX_CTRL_3		0x2046
#define MAX98396_R2047_PCM_TX_CTRL_4		0x2047
#define MAX98396_R2048_PCM_TX_CTRL_5		0x2048
#define MAX98396_R2049_PCM_TX_CTRL_6		0x2049
#define MAX98396_R204A_PCM_TX_CTRL_7		0x204A
#define MAX98396_R204B_PCM_TX_CTRL_8		0x204B
#define MAX98396_R204C_PCM_TX_HIZ_CTRL_1	0x204C
#define MAX98396_R204D_PCM_TX_HIZ_CTRL_2	0x204D
#define MAX98396_R204E_PCM_TX_HIZ_CTRL_3	0x204E
#define MAX98396_R204F_PCM_TX_HIZ_CTRL_4	0x204F
#define MAX98396_R2050_PCM_TX_HIZ_CTRL_5	0x2050
#define MAX98396_R2051_PCM_TX_HIZ_CTRL_6	0x2051
#define MAX98396_R2052_PCM_TX_HIZ_CTRL_7	0x2052
#define MAX98396_R2053_PCM_TX_HIZ_CTRL_8	0x2053
#define MAX98396_R2055_PCM_RX_SRC1		0x2055
#define MAX98396_R2056_PCM_RX_SRC2		0x2056
#define MAX98396_R2058_PCM_BYPASS_SRC		0x2058
#define MAX98396_R205D_PCM_TX_SRC_EN		0x205D
#define MAX98396_R205E_PCM_RX_EN		0x205E
#define MAX98396_R205F_PCM_TX_EN		0x205F
#define MAX98396_R2070_ICC_RX_EN_A		0x2070
#define MAX98396_R2071_ICC_RX_EN_B		0x2071
#define MAX98396_R2072_ICC_TX_CTRL		0x2072
#define MAX98396_R207F_ICC_EN			0x207F
#define MAX98396_R2083_TONE_GEN_DC_CFG		0x2083
#define MAX98396_R2084_TONE_GEN_DC_LVL1		0x2084
#define MAX98396_R2085_TONE_GEN_DC_LVL2		0x2085
#define MAX98396_R2086_TONE_GEN_DC_LVL3		0x2086
#define MAX98396_R208F_TONE_GEN_EN		0x208F
#define MAX98396_R2090_AMP_VOL_CTRL		0x2090
#define MAX98396_R2091_AMP_PATH_GAIN		0x2091
#define MAX98396_R2092_AMP_DSP_CFG		0x2092
#define MAX98396_R2093_SSM_CFG			0x2093
#define MAX98396_R2094_SPK_CLS_DG_THRESH	0x2094
#define MAX98396_R2095_SPK_CLS_DG_HDR		0x2095
#define MAX98396_R2096_SPK_CLS_DG_HOLD_TIME	0x2096
#define MAX98396_R2097_SPK_CLS_DG_DELAY		0x2097
#define MAX98396_R2098_SPK_CLS_DG_MODE		0x2098
#define MAX98396_R2099_SPK_CLS_DG_VBAT_LVL	0x2099
#define MAX98396_R209A_SPK_EDGE_CTRL		0x209A
#define MAX98396_R209C_SPK_EDGE_CTRL1		0x209C
#define MAX98396_R209D_SPK_EDGE_CTRL2		0x209D
#define MAX98396_R209E_AMP_CLIP_GAIN		0x209E
#define MAX98396_R209F_BYPASS_PATH_CFG		0x209F
#define MAX98396_R20A0_AMP_SUPPLY_CTL		0x20A0
#define MAX98396_R20AF_AMP_EN			0x20AF
#define MAX98396_R20B0_ADC_SR			0x20B0
#define MAX98396_R20B1_ADC_PVDD_CFG		0x20B1
#define MAX98396_R20B2_ADC_VBAT_CFG		0x20B2
#define MAX98396_R20B3_ADC_THERMAL_CFG		0x20B3
#define MAX98396_R20B4_ADC_READBACK_CTRL1	0x20B4
#define MAX98396_R20B5_ADC_READBACK_CTRL2	0x20B5
#define MAX98396_R20B6_ADC_PVDD_READBACK_MSB	0x20B6
#define MAX98396_R20B7_ADC_PVDD_READBACK_LSB	0x20B7
#define MAX98396_R20B8_ADC_VBAT_READBACK_MSB	0x20B8
#define MAX98396_R20B9_ADC_VBAT_READBACK_LSB	0x20B9
#define MAX98396_R20BA_ADC_TEMP_READBACK_MSB	0x20BA
#define MAX98396_R20BB_ADC_TEMP_READBACK_LSB	0x20BB
#define MAX98396_R20BC_ADC_LO_PVDD_READBACK_MSB	0x20BC
#define MAX98396_R20BD_ADC_LO_PVDD_READBACK_LSB	0x20BD
#define MAX98396_R20BE_ADC_LO_VBAT_READBACK_MSB	0x20BE
#define MAX98396_R20BF_ADC_LO_VBAT_READBACK_LSB	0x20BF
#define MAX98396_R20C7_ADC_CFG			0x20C7
#define MAX98396_R20D0_DHT_CFG1			0x20D0
#define MAX98396_R20D1_LIMITER_CFG1		0x20D1
#define MAX98396_R20D2_LIMITER_CFG2		0x20D2
#define MAX98396_R20D3_DHT_CFG2			0x20D3
#define MAX98396_R20D4_DHT_CFG3			0x20D4
#define MAX98396_R20D5_DHT_CFG4			0x20D5
#define MAX98396_R20D6_DHT_HYSTERESIS_CFG	0x20D6
#define MAX98396_R20DF_DHT_EN			0x20DF
#define MAX98396_R20E0_IV_SENSE_PATH_CFG	0x20E0
#define MAX98396_R20E4_IV_SENSE_PATH_EN		0x20E4
#define MAX98396_R20E5_BPE_STATE		0x20E5
#define MAX98396_R20E6_BPE_L3_THRESH_MSB	0x20E6
#define MAX98396_R20E7_BPE_L3_THRESH_LSB	0x20E7
#define MAX98396_R20E8_BPE_L2_THRESH_MSB	0x20E8
#define MAX98396_R20E9_BPE_L2_THRESH_LSB	0x20E9
#define MAX98396_R20EA_BPE_L1_THRESH_MSB	0x20EA
#define MAX98396_R20EB_BPE_L1_THRESH_LSB	0x20EB
#define MAX98396_R20EC_BPE_L0_THRESH_MSB	0x20EC
#define MAX98396_R20ED_BPE_L0_THRESH_LSB	0x20ED
#define MAX98396_R20EE_BPE_L3_DWELL_HOLD_TIME	0x20EE
#define MAX98396_R20EF_BPE_L2_DWELL_HOLD_TIME	0x20EF
#define MAX98396_R20F0_BPE_L1_DWELL_HOLD_TIME	0x20F0
#define MAX98396_R20F1_BPE_L0_HOLD_TIME		0x20F1
#define MAX98396_R20F2_BPE_L3_ATTACK_REL_STEP	0x20F2
#define MAX98396_R20F3_BPE_L2_ATTACK_REL_STEP	0x20F3
#define MAX98396_R20F4_BPE_L1_ATTACK_REL_STEP	0x20F4
#define MAX98396_R20F5_BPE_L0_ATTACK_REL_STEP	0x20F5
#define MAX98396_R20F6_BPE_L3_MAX_GAIN_ATTN	0x20F6
#define MAX98396_R20F7_BPE_L2_MAX_GAIN_ATTN	0x20F7
#define MAX98396_R20F8_BPE_L1_MAX_GAIN_ATTN	0x20F8
#define MAX98396_R20F9_BPE_L0_MAX_GAIN_ATTN	0x20F9
#define MAX98396_R20FA_BPE_L3_ATT_REL_RATE	0x20FA
#define MAX98396_R20FB_BPE_L2_ATT_REL_RATE	0x20FB
#define MAX98396_R20FC_BPE_L1_ATT_REL_RATE	0x20FC
#define MAX98396_R20FD_BPE_L0_ATT_REL_RATE	0x20FD
#define MAX98396_R20FE_BPE_L3_LIMITER_CFG	0x20FE
#define MAX98396_R20FF_BPE_L2_LIMITER_CFG	0x20FF
#define MAX98396_R2100_BPE_L1_LIMITER_CFG	0x2100
#define MAX98396_R2101_BPE_L0_LIMITER_CFG	0x2101
#define MAX98396_R2102_BPE_L3_LIM_ATT_REL_RATE	0x2102
#define MAX98396_R2103_BPE_L2_LIM_ATT_REL_RATE	0x2103
#define MAX98396_R2104_BPE_L1_LIM_ATT_REL_RATE	0x2104
#define MAX98396_R2105_BPE_L0_LIM_ATT_REL_RATE	0x2105
#define MAX98396_R2106_BPE_THRESH_HYSTERESIS	0x2106
#define MAX98396_R2107_BPE_INFINITE_HOLD_CLR	0x2107
#define MAX98396_R2108_BPE_SUPPLY_SRC		0x2108
#define MAX98396_R2109_BPE_LOW_STATE		0x2109
#define MAX98396_R210A_BPE_LOW_GAIN		0x210A
#define MAX98396_R210B_BPE_LOW_LIMITER		0x210B
#define MAX98396_R210D_BPE_EN			0x210D
#define MAX98396_R210E_AUTO_RESTART		0x210E
#define MAX98396_R210F_GLOBAL_EN		0x210F
#define MAX98396_R21FF_REVISION_ID		0x21FF

/* MAX98927 Registers */
#define MAX98397_R203A_SPK_MON_THRESH		0x203A
#define MAX98397_R204C_PCM_TX_CTRL_9		0x204C
#define MAX98397_R204D_PCM_TX_HIZ_CTRL_1	0x204D
#define MAX98397_R204E_PCM_TX_HIZ_CTRL_2	0x204E
#define MAX98397_R204F_PCM_TX_HIZ_CTRL_3	0x204F
#define MAX98397_R2050_PCM_TX_HIZ_CTRL_4	0x2050
#define MAX98397_R2051_PCM_TX_HIZ_CTRL_5	0x2051
#define MAX98397_R2052_PCM_TX_HIZ_CTRL_6	0x2052
#define MAX98397_R2053_PCM_TX_HIZ_CTRL_7	0x2053
#define MAX98397_R2054_PCM_TX_HIZ_CTRL_8	0x2054
#define MAX98397_R2056_PCM_RX_SRC1		0x2056
#define MAX98397_R2057_PCM_RX_SRC2		0x2057
#define MAX98397_R2060_PCM_TX_SUPPLY_SEL	0x2060
#define MAX98397_R209B_SPK_PATH_WB_ONLY		0x209B
#define MAX98397_R20B4_ADC_VDDH_CFG		0x20B4
#define MAX98397_R20B5_ADC_READBACK_CTRL1	0x20B5
#define MAX98397_R20B6_ADC_READBACK_CTRL2	0x20B6
#define MAX98397_R20B7_ADC_PVDD_READBACK_MSB	0x20B7
#define MAX98397_R20B8_ADC_PVDD_READBACK_LSB	0x20B8
#define MAX98397_R20B9_ADC_VBAT_READBACK_MSB	0x20B9
#define MAX98397_R20BA_ADC_VBAT_READBACK_LSB	0x20BA
#define MAX98397_R20BB_ADC_TEMP_READBACK_MSB	0x20BB
#define MAX98397_R20BC_ADC_TEMP_READBACK_LSB	0x20BC
#define MAX98397_R20BD_ADC_VDDH__READBACK_MSB	0x20BD
#define MAX98397_R20BE_ADC_VDDH_READBACK_LSB	0x20BE
#define MAX98397_R20BF_ADC_LO_PVDD_READBACK_MSB	0x20BF
#define MAX98397_R20C0_ADC_LO_PVDD_READBACK_LSB	0x20C0
#define MAX98397_R20C1_ADC_LO_VBAT_READBACK_MSB	0x20C1
#define MAX98397_R20C2_ADC_LO_VBAT_READBACK_LSB	0x20C2
#define MAX98397_R20C3_ADC_LO_VDDH_READBACK_MSB	0x20C3
#define MAX98397_R20C4_ADC_LO_VDDH_READBACK_LSB	0x20C4
#define MAX98397_R20C5_MEAS_ADC_OPTIMAL_MODE	0x20C5
#define MAX98397_R22FF_REVISION_ID		0x22FF

#define GET_REG_ADDR_REV_ID(x)\
	((x) > 0 ? MAX98397_R22FF_REVISION_ID : MAX98396_R21FF_REVISION_ID)

/* MAX98396_R2024_THERM_FOLDBACK_SET */
#define MAX98396_THERM_FB_SLOPE1_SHIFT		(0)
#define MAX98396_THERM_FB_SLOPE2_SHIFT		(2)
#define MAX98396_THERM_FB_REL_SHIFT		(4)
#define MAX98396_THERM_FB_HOLD_SHIFT		(6)

/* MAX98396_R2038_CLK_MON_CTRL */
#define MAX98396_CLK_MON_AUTO_RESTART_MASK	(0x1 << 0)
#define MAX98396_CLK_MON_AUTO_RESTART_SHIFT	(0)

/* MAX98396_R2039_DATA_MON_CTRL */
#define MAX98396_DMON_MAG_THRESH_SHIFT		(4)
#define MAX98396_DMON_MAG_THRESH_MASK		(0x3 << MAX98396_DMON_MAG_THRESH_SHIFT)
#define MAX98396_DMON_STUCK_THRESH_SHIFT	(2)
#define MAX98396_DMON_STUCK_THRESH_MASK		(0x3 << MAX98396_DMON_STUCK_THRESH_SHIFT)
#define MAX98396_DMON_DURATION_MASK		(0x3)

/* MAX98396_R203F_ENABLE_CTRLS */
#define MAX98396_CTRL_CMON_EN_SHIFT		(0)
#define MAX98396_CTRL_DMON_STUCK_EN_MASK	(0x1 << 1)
#define MAX98396_CTRL_DMON_MAG_EN_MASK		(0x1 << 2)

/* MAX98396_R2041_PCM_MODE_CFG */
#define MAX98396_PCM_MODE_CFG_FORMAT_MASK	(0x7 << 3)
#define MAX98396_PCM_TX_CH_INTERLEAVE_MASK	(0x1 << 2)
#define MAX98396_PCM_FORMAT_I2S			(0x0 << 3)
#define MAX98396_PCM_FORMAT_LJ			(0x1 << 3)
#define MAX98396_PCM_FORMAT_TDM_MODE0		(0x3 << 3)
#define MAX98396_PCM_FORMAT_TDM_MODE1		(0x4 << 3)
#define MAX98396_PCM_FORMAT_TDM_MODE2		(0x5 << 3)
#define MAX98396_PCM_MODE_CFG_CHANSZ_MASK	(0x3 << 6)
#define MAX98396_PCM_MODE_CFG_CHANSZ_16		(0x1 << 6)
#define MAX98396_PCM_MODE_CFG_CHANSZ_24		(0x2 << 6)
#define MAX98396_PCM_MODE_CFG_CHANSZ_32		(0x3 << 6)
#define MAX98396_PCM_MODE_CFG_LRCLKEDGE		(0x1 << 1)

/* MAX98396_R2042_PCM_CLK_SETUP */
#define MAX98396_PCM_MODE_CFG_BCLKEDGE		(0x1 << 4)
#define MAX98396_PCM_CLK_SETUP_BSEL_MASK	(0xF << 0)
#define MAX98396_PCM_BCLKEDGE_BSEL_MASK		(0x1F)

/* MAX98396_R2043_PCM_SR_SETUP */
#define MAX98396_PCM_SR_SHIFT			(0)
#define MAX98396_IVADC_SR_SHIFT			(4)
#define MAX98396_PCM_SR_MASK			(0xF << MAX98396_PCM_SR_SHIFT)
#define MAX98396_IVADC_SR_MASK			(0xF << MAX98396_IVADC_SR_SHIFT)
#define MAX98396_PCM_SR_8000			(0)
#define MAX98396_PCM_SR_11025			(1)
#define MAX98396_PCM_SR_12000			(2)
#define MAX98396_PCM_SR_16000			(3)
#define MAX98396_PCM_SR_22050			(4)
#define MAX98396_PCM_SR_24000			(5)
#define MAX98396_PCM_SR_32000			(6)
#define MAX98396_PCM_SR_44100			(7)
#define MAX98396_PCM_SR_48000			(8)
#define MAX98396_PCM_SR_88200			(9)
#define MAX98396_PCM_SR_96000			(10)
#define MAX98396_PCM_SR_176400			(11)
#define MAX98396_PCM_SR_192000			(12)

/* MAX98396_R2055_PCM_RX_SRC1 */
#define MAX98396_PCM_RX_MASK			(0x3 << 0)

/* MAX98396_R2056_PCM_RX_SRC2 */
#define MAX98396_PCM_DMIX_CH1_SHIFT		(0xF << 0)
#define MAX98396_PCM_DMIX_CH0_SRC_MASK		(0xF << 0)
#define MAX98396_PCM_DMIX_CH1_SRC_MASK		(0xF << MAX98396_PCM_DMIX_CH1_SHIFT)

/* MAX98396_R205E_PCM_RX_EN */
#define MAX98396_PCM_RX_EN_MASK			(0x1 << 0)
#define MAX98396_PCM_RX_BYP_EN_MASK		(0x1 << 1)

/* MAX98396_R2092_AMP_DSP_CFG */
#define MAX98396_DSP_SPK_DCBLK_EN_SHIFT		(0)
#define MAX98396_DSP_SPK_DITH_EN_SHIFT		(1)
#define MAX98396_DSP_SPK_INVERT_SHIFT		(2)
#define MAX98396_DSP_SPK_VOL_RMPUP_SHIFT	(3)
#define MAX98396_DSP_SPK_VOL_RMPDN_SHIFT	(4)
#define MAX98396_DSP_SPK_SAFE_EN_SHIFT		(5)
#define MAX98396_DSP_SPK_WB_FLT_EN_SHIFT	(6)

/* MAX98396_R20A0_AMP_SUPPLY_CTL */
#define MAX98396_AMP_SUPPLY_NOVBAT		(0x1 << 0)

/* MAX98396_R20E0_IV_SENSE_PATH_CFG */
#define MAX98396_IV_SENSE_DCBLK_EN_MASK		(0x3 << 0)
#define MAX98396_IV_SENSE_DCBLK_EN_SHIFT	(0)
#define MAX98396_IV_SENSE_DITH_EN_SHIFT		(2)
#define MAX98396_IV_SENSE_WB_FLT_EN_SHIFT	(3)

/* MAX98396_R210E_AUTO_RESTART_BEHAVIOR */
#define MAX98396_PVDD_UVLO_RESTART_SHFT		(0)
#define MAX98396_VBAT_UVLO_RESTART_SHFT		(1)
#define MAX98396_THEM_SHDN_RESTART_SHFT		(2)
#define MAX98396_OVC_RESTART_SHFT		(3)

enum {
	CODEC_TYPE_MAX98396,
	CODEC_TYPE_MAX98397,
};

#define  MAX98396_NUM_CORE_SUPPLIES 3

struct max98396_priv {
	struct regmap *regmap;
	struct gpio_desc *reset_gpio;
	struct regulator_bulk_data core_supplies[MAX98396_NUM_CORE_SUPPLIES];
	struct regulator *pvdd, *vbat;
	unsigned int v_slot;
	unsigned int i_slot;
	unsigned int spkfb_slot;
	unsigned int bypass_slot;
	bool dmon_stuck_enable;
	unsigned int dmon_stuck_threshold;
	bool dmon_mag_enable;
	unsigned int dmon_mag_threshold;
	unsigned int dmon_duration;
	bool interleave_mode;
	bool tdm_mode;
	int tdm_max_samplerate;
	int device_id;
};
#endif
