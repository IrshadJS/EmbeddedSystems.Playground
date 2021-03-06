#ifndef INCLUDED_CYFITTERKEIL_INC
#define INCLUDED_CYFITTERKEIL_INC
$INCLUDE (cydevicekeil.inc)
$INCLUDE (cydevicekeil_trm.inc)

; LED_Brightness_DMA
LED_Brightness_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
LED_Brightness_DMA__DRQ_NUMBER EQU 0
LED_Brightness_DMA__NUMBEROF_TDS EQU 0
LED_Brightness_DMA__PRIORITY EQU 2
LED_Brightness_DMA__TERMIN_EN EQU 0
LED_Brightness_DMA__TERMIN_SEL EQU 0
LED_Brightness_DMA__TERMOUT0_EN EQU 0
LED_Brightness_DMA__TERMOUT0_SEL EQU 0
LED_Brightness_DMA__TERMOUT1_EN EQU 0
LED_Brightness_DMA__TERMOUT1_SEL EQU 0

; LED_COM_PWM_PWMUDB
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB02_03_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB02_03_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB02_03_MSK
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB02_03_MSK
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB02_03_MSK
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK EQU 0x80
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS EQU 7
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB02_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB02_ST_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG EQU CYREG_B0_UDB02_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB02_ST_CTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK EQU 0x80
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB02_MSK
LED_COM_PWM_PWMUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B0_UDB02_A0
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B0_UDB02_A1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B0_UDB02_D0
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B0_UDB02_D1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B0_UDB02_F0
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B0_UDB02_F1
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
LED_COM_PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__MASK EQU 0x01
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__0__POS EQU 0
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__MASK EQU 0x04
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__2__POS EQU 2
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__MASK EQU 0x08
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__3__POS EQU 3
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__MASK EQU 0x20
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__5__POS EQU 5
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK EQU 0x2D
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK_REG EQU CYREG_B0_UDB02_MSK
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB02_MSK_ACTL
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB02_ST_CTL
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB02_ST_CTL
LED_COM_PWM_PWMUDB_sSTSReg_rstSts_stsreg__STATUS_REG EQU CYREG_B0_UDB02_ST

; LED_Refresh_Clock
LED_Refresh_Clock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
LED_Refresh_Clock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
LED_Refresh_Clock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
LED_Refresh_Clock__CFG2_SRC_SEL_MASK EQU 0x07
LED_Refresh_Clock__INDEX EQU 0x01
LED_Refresh_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
LED_Refresh_Clock__PM_ACT_MSK EQU 0x02
LED_Refresh_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
LED_Refresh_Clock__PM_STBY_MSK EQU 0x02

; LED_Segment_DMA
LED_Segment_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
LED_Segment_DMA__DRQ_NUMBER EQU 2
LED_Segment_DMA__NUMBEROF_TDS EQU 0
LED_Segment_DMA__PRIORITY EQU 2
LED_Segment_DMA__TERMIN_EN EQU 0
LED_Segment_DMA__TERMIN_SEL EQU 0
LED_Segment_DMA__TERMOUT0_EN EQU 0
LED_Segment_DMA__TERMOUT0_SEL EQU 0
LED_Segment_DMA__TERMOUT1_EN EQU 0
LED_Segment_DMA__TERMOUT1_SEL EQU 0

; LED_Common_DMA
LED_Common_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
LED_Common_DMA__DRQ_NUMBER EQU 1
LED_Common_DMA__NUMBEROF_TDS EQU 0
LED_Common_DMA__PRIORITY EQU 2
LED_Common_DMA__TERMIN_EN EQU 0
LED_Common_DMA__TERMIN_SEL EQU 0
LED_Common_DMA__TERMOUT0_EN EQU 0
LED_Common_DMA__TERMOUT0_SEL EQU 0
LED_Common_DMA__TERMOUT1_EN EQU 0
LED_Common_DMA__TERMOUT1_SEL EQU 0

; LED_PWM_Clock
LED_PWM_Clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
LED_PWM_Clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
LED_PWM_Clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
LED_PWM_Clock__CFG2_SRC_SEL_MASK EQU 0x07
LED_PWM_Clock__INDEX EQU 0x00
LED_PWM_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
LED_PWM_Clock__PM_ACT_MSK EQU 0x01
LED_PWM_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
LED_PWM_Clock__PM_STBY_MSK EQU 0x01

; LED_RAM_1
LED_RAM_1_ctrl_reg__0__MASK EQU 0x01
LED_RAM_1_ctrl_reg__0__POS EQU 0
LED_RAM_1_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
LED_RAM_1_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB07_08_CTL
LED_RAM_1_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB07_08_CTL
LED_RAM_1_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB07_08_CTL
LED_RAM_1_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB07_08_CTL
LED_RAM_1_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB07_08_MSK
LED_RAM_1_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB07_08_MSK
LED_RAM_1_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB07_08_MSK
LED_RAM_1_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB07_08_MSK
LED_RAM_1_ctrl_reg__1__MASK EQU 0x02
LED_RAM_1_ctrl_reg__1__POS EQU 1
LED_RAM_1_ctrl_reg__2__MASK EQU 0x04
LED_RAM_1_ctrl_reg__2__POS EQU 2
LED_RAM_1_ctrl_reg__3__MASK EQU 0x08
LED_RAM_1_ctrl_reg__3__POS EQU 3
LED_RAM_1_ctrl_reg__4__MASK EQU 0x10
LED_RAM_1_ctrl_reg__4__POS EQU 4
LED_RAM_1_ctrl_reg__5__MASK EQU 0x20
LED_RAM_1_ctrl_reg__5__POS EQU 5
LED_RAM_1_ctrl_reg__6__MASK EQU 0x40
LED_RAM_1_ctrl_reg__6__POS EQU 6
LED_RAM_1_ctrl_reg__7__MASK EQU 0x80
LED_RAM_1_ctrl_reg__7__POS EQU 7
LED_RAM_1_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
LED_RAM_1_ctrl_reg__CONTROL_REG EQU CYREG_B1_UDB07_CTL
LED_RAM_1_ctrl_reg__CONTROL_ST_REG EQU CYREG_B1_UDB07_ST_CTL
LED_RAM_1_ctrl_reg__COUNT_REG EQU CYREG_B1_UDB07_CTL
LED_RAM_1_ctrl_reg__COUNT_ST_REG EQU CYREG_B1_UDB07_ST_CTL
LED_RAM_1_ctrl_reg__MASK EQU 0xFF
LED_RAM_1_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
LED_RAM_1_ctrl_reg__PERIOD_REG EQU CYREG_B1_UDB07_MSK
LED_RAM_1_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL

; LED_RAM_2
LED_RAM_2_ctrl_reg__0__MASK EQU 0x01
LED_RAM_2_ctrl_reg__0__POS EQU 0
LED_RAM_2_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
LED_RAM_2_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB03_04_CTL
LED_RAM_2_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB03_04_CTL
LED_RAM_2_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB03_04_CTL
LED_RAM_2_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB03_04_CTL
LED_RAM_2_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB03_04_MSK
LED_RAM_2_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB03_04_MSK
LED_RAM_2_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB03_04_MSK
LED_RAM_2_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB03_04_MSK
LED_RAM_2_ctrl_reg__1__MASK EQU 0x02
LED_RAM_2_ctrl_reg__1__POS EQU 1
LED_RAM_2_ctrl_reg__2__MASK EQU 0x04
LED_RAM_2_ctrl_reg__2__POS EQU 2
LED_RAM_2_ctrl_reg__3__MASK EQU 0x08
LED_RAM_2_ctrl_reg__3__POS EQU 3
LED_RAM_2_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
LED_RAM_2_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB03_CTL
LED_RAM_2_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB03_ST_CTL
LED_RAM_2_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB03_CTL
LED_RAM_2_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB03_ST_CTL
LED_RAM_2_ctrl_reg__MASK EQU 0x0F
LED_RAM_2_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB03_MSK_ACTL
LED_RAM_2_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB03_MSK
LED_RAM_2_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB03_MSK_ACTL

; Segment_0
Segment_0__0__MASK EQU 0x01
Segment_0__0__PC EQU CYREG_PRT3_PC0
Segment_0__0__PORT EQU 3
Segment_0__0__SHIFT EQU 0
Segment_0__AG EQU CYREG_PRT3_AG
Segment_0__AMUX EQU CYREG_PRT3_AMUX
Segment_0__BIE EQU CYREG_PRT3_BIE
Segment_0__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_0__BYP EQU CYREG_PRT3_BYP
Segment_0__CTL EQU CYREG_PRT3_CTL
Segment_0__DM0 EQU CYREG_PRT3_DM0
Segment_0__DM1 EQU CYREG_PRT3_DM1
Segment_0__DM2 EQU CYREG_PRT3_DM2
Segment_0__DR EQU CYREG_PRT3_DR
Segment_0__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_0__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_0__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_0__MASK EQU 0x01
Segment_0__PORT EQU 3
Segment_0__PRT EQU CYREG_PRT3_PRT
Segment_0__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_0__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_0__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_0__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_0__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_0__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_0__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_0__PS EQU CYREG_PRT3_PS
Segment_0__SHIFT EQU 0
Segment_0__SLW EQU CYREG_PRT3_SLW

; Segment_1
Segment_1__0__MASK EQU 0x02
Segment_1__0__PC EQU CYREG_PRT3_PC1
Segment_1__0__PORT EQU 3
Segment_1__0__SHIFT EQU 1
Segment_1__AG EQU CYREG_PRT3_AG
Segment_1__AMUX EQU CYREG_PRT3_AMUX
Segment_1__BIE EQU CYREG_PRT3_BIE
Segment_1__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_1__BYP EQU CYREG_PRT3_BYP
Segment_1__CTL EQU CYREG_PRT3_CTL
Segment_1__DM0 EQU CYREG_PRT3_DM0
Segment_1__DM1 EQU CYREG_PRT3_DM1
Segment_1__DM2 EQU CYREG_PRT3_DM2
Segment_1__DR EQU CYREG_PRT3_DR
Segment_1__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_1__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_1__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_1__MASK EQU 0x02
Segment_1__PORT EQU 3
Segment_1__PRT EQU CYREG_PRT3_PRT
Segment_1__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_1__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_1__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_1__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_1__PS EQU CYREG_PRT3_PS
Segment_1__SHIFT EQU 1
Segment_1__SLW EQU CYREG_PRT3_SLW

; Segment_2
Segment_2__0__MASK EQU 0x04
Segment_2__0__PC EQU CYREG_PRT3_PC2
Segment_2__0__PORT EQU 3
Segment_2__0__SHIFT EQU 2
Segment_2__AG EQU CYREG_PRT3_AG
Segment_2__AMUX EQU CYREG_PRT3_AMUX
Segment_2__BIE EQU CYREG_PRT3_BIE
Segment_2__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_2__BYP EQU CYREG_PRT3_BYP
Segment_2__CTL EQU CYREG_PRT3_CTL
Segment_2__DM0 EQU CYREG_PRT3_DM0
Segment_2__DM1 EQU CYREG_PRT3_DM1
Segment_2__DM2 EQU CYREG_PRT3_DM2
Segment_2__DR EQU CYREG_PRT3_DR
Segment_2__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_2__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_2__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_2__MASK EQU 0x04
Segment_2__PORT EQU 3
Segment_2__PRT EQU CYREG_PRT3_PRT
Segment_2__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_2__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_2__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_2__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_2__PS EQU CYREG_PRT3_PS
Segment_2__SHIFT EQU 2
Segment_2__SLW EQU CYREG_PRT3_SLW

; Segment_3
Segment_3__0__MASK EQU 0x08
Segment_3__0__PC EQU CYREG_PRT3_PC3
Segment_3__0__PORT EQU 3
Segment_3__0__SHIFT EQU 3
Segment_3__AG EQU CYREG_PRT3_AG
Segment_3__AMUX EQU CYREG_PRT3_AMUX
Segment_3__BIE EQU CYREG_PRT3_BIE
Segment_3__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_3__BYP EQU CYREG_PRT3_BYP
Segment_3__CTL EQU CYREG_PRT3_CTL
Segment_3__DM0 EQU CYREG_PRT3_DM0
Segment_3__DM1 EQU CYREG_PRT3_DM1
Segment_3__DM2 EQU CYREG_PRT3_DM2
Segment_3__DR EQU CYREG_PRT3_DR
Segment_3__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_3__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_3__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_3__MASK EQU 0x08
Segment_3__PORT EQU 3
Segment_3__PRT EQU CYREG_PRT3_PRT
Segment_3__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_3__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_3__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_3__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_3__PS EQU CYREG_PRT3_PS
Segment_3__SHIFT EQU 3
Segment_3__SLW EQU CYREG_PRT3_SLW

; Segment_4
Segment_4__0__MASK EQU 0x10
Segment_4__0__PC EQU CYREG_PRT3_PC4
Segment_4__0__PORT EQU 3
Segment_4__0__SHIFT EQU 4
Segment_4__AG EQU CYREG_PRT3_AG
Segment_4__AMUX EQU CYREG_PRT3_AMUX
Segment_4__BIE EQU CYREG_PRT3_BIE
Segment_4__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_4__BYP EQU CYREG_PRT3_BYP
Segment_4__CTL EQU CYREG_PRT3_CTL
Segment_4__DM0 EQU CYREG_PRT3_DM0
Segment_4__DM1 EQU CYREG_PRT3_DM1
Segment_4__DM2 EQU CYREG_PRT3_DM2
Segment_4__DR EQU CYREG_PRT3_DR
Segment_4__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_4__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_4__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_4__MASK EQU 0x10
Segment_4__PORT EQU 3
Segment_4__PRT EQU CYREG_PRT3_PRT
Segment_4__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_4__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_4__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_4__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_4__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_4__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_4__PS EQU CYREG_PRT3_PS
Segment_4__SHIFT EQU 4
Segment_4__SLW EQU CYREG_PRT3_SLW

; Segment_5
Segment_5__0__MASK EQU 0x20
Segment_5__0__PC EQU CYREG_PRT3_PC5
Segment_5__0__PORT EQU 3
Segment_5__0__SHIFT EQU 5
Segment_5__AG EQU CYREG_PRT3_AG
Segment_5__AMUX EQU CYREG_PRT3_AMUX
Segment_5__BIE EQU CYREG_PRT3_BIE
Segment_5__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_5__BYP EQU CYREG_PRT3_BYP
Segment_5__CTL EQU CYREG_PRT3_CTL
Segment_5__DM0 EQU CYREG_PRT3_DM0
Segment_5__DM1 EQU CYREG_PRT3_DM1
Segment_5__DM2 EQU CYREG_PRT3_DM2
Segment_5__DR EQU CYREG_PRT3_DR
Segment_5__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_5__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_5__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_5__MASK EQU 0x20
Segment_5__PORT EQU 3
Segment_5__PRT EQU CYREG_PRT3_PRT
Segment_5__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_5__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_5__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_5__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_5__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_5__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_5__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_5__PS EQU CYREG_PRT3_PS
Segment_5__SHIFT EQU 5
Segment_5__SLW EQU CYREG_PRT3_SLW

; Segment_6
Segment_6__0__MASK EQU 0x40
Segment_6__0__PC EQU CYREG_PRT3_PC6
Segment_6__0__PORT EQU 3
Segment_6__0__SHIFT EQU 6
Segment_6__AG EQU CYREG_PRT3_AG
Segment_6__AMUX EQU CYREG_PRT3_AMUX
Segment_6__BIE EQU CYREG_PRT3_BIE
Segment_6__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_6__BYP EQU CYREG_PRT3_BYP
Segment_6__CTL EQU CYREG_PRT3_CTL
Segment_6__DM0 EQU CYREG_PRT3_DM0
Segment_6__DM1 EQU CYREG_PRT3_DM1
Segment_6__DM2 EQU CYREG_PRT3_DM2
Segment_6__DR EQU CYREG_PRT3_DR
Segment_6__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_6__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_6__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_6__MASK EQU 0x40
Segment_6__PORT EQU 3
Segment_6__PRT EQU CYREG_PRT3_PRT
Segment_6__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_6__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_6__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_6__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_6__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_6__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_6__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_6__PS EQU CYREG_PRT3_PS
Segment_6__SHIFT EQU 6
Segment_6__SLW EQU CYREG_PRT3_SLW

; Segment_7
Segment_7__0__MASK EQU 0x80
Segment_7__0__PC EQU CYREG_PRT3_PC7
Segment_7__0__PORT EQU 3
Segment_7__0__SHIFT EQU 7
Segment_7__AG EQU CYREG_PRT3_AG
Segment_7__AMUX EQU CYREG_PRT3_AMUX
Segment_7__BIE EQU CYREG_PRT3_BIE
Segment_7__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Segment_7__BYP EQU CYREG_PRT3_BYP
Segment_7__CTL EQU CYREG_PRT3_CTL
Segment_7__DM0 EQU CYREG_PRT3_DM0
Segment_7__DM1 EQU CYREG_PRT3_DM1
Segment_7__DM2 EQU CYREG_PRT3_DM2
Segment_7__DR EQU CYREG_PRT3_DR
Segment_7__INP_DIS EQU CYREG_PRT3_INP_DIS
Segment_7__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Segment_7__LCD_EN EQU CYREG_PRT3_LCD_EN
Segment_7__MASK EQU 0x80
Segment_7__PORT EQU 3
Segment_7__PRT EQU CYREG_PRT3_PRT
Segment_7__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Segment_7__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Segment_7__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Segment_7__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Segment_7__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Segment_7__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Segment_7__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Segment_7__PS EQU CYREG_PRT3_PS
Segment_7__SHIFT EQU 7
Segment_7__SLW EQU CYREG_PRT3_SLW

; Common_0
Common_0__0__MASK EQU 0x01
Common_0__0__PC EQU CYREG_PRT0_PC0
Common_0__0__PORT EQU 0
Common_0__0__SHIFT EQU 0
Common_0__AG EQU CYREG_PRT0_AG
Common_0__AMUX EQU CYREG_PRT0_AMUX
Common_0__BIE EQU CYREG_PRT0_BIE
Common_0__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Common_0__BYP EQU CYREG_PRT0_BYP
Common_0__CTL EQU CYREG_PRT0_CTL
Common_0__DM0 EQU CYREG_PRT0_DM0
Common_0__DM1 EQU CYREG_PRT0_DM1
Common_0__DM2 EQU CYREG_PRT0_DM2
Common_0__DR EQU CYREG_PRT0_DR
Common_0__INP_DIS EQU CYREG_PRT0_INP_DIS
Common_0__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Common_0__LCD_EN EQU CYREG_PRT0_LCD_EN
Common_0__MASK EQU 0x01
Common_0__PORT EQU 0
Common_0__PRT EQU CYREG_PRT0_PRT
Common_0__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Common_0__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Common_0__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Common_0__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Common_0__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Common_0__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Common_0__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Common_0__PS EQU CYREG_PRT0_PS
Common_0__SHIFT EQU 0
Common_0__SLW EQU CYREG_PRT0_SLW

; Common_1
Common_1__0__MASK EQU 0x02
Common_1__0__PC EQU CYREG_PRT0_PC1
Common_1__0__PORT EQU 0
Common_1__0__SHIFT EQU 1
Common_1__AG EQU CYREG_PRT0_AG
Common_1__AMUX EQU CYREG_PRT0_AMUX
Common_1__BIE EQU CYREG_PRT0_BIE
Common_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Common_1__BYP EQU CYREG_PRT0_BYP
Common_1__CTL EQU CYREG_PRT0_CTL
Common_1__DM0 EQU CYREG_PRT0_DM0
Common_1__DM1 EQU CYREG_PRT0_DM1
Common_1__DM2 EQU CYREG_PRT0_DM2
Common_1__DR EQU CYREG_PRT0_DR
Common_1__INP_DIS EQU CYREG_PRT0_INP_DIS
Common_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Common_1__LCD_EN EQU CYREG_PRT0_LCD_EN
Common_1__MASK EQU 0x02
Common_1__PORT EQU 0
Common_1__PRT EQU CYREG_PRT0_PRT
Common_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Common_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Common_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Common_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Common_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Common_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Common_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Common_1__PS EQU CYREG_PRT0_PS
Common_1__SHIFT EQU 1
Common_1__SLW EQU CYREG_PRT0_SLW

; Common_2
Common_2__0__MASK EQU 0x04
Common_2__0__PC EQU CYREG_PRT0_PC2
Common_2__0__PORT EQU 0
Common_2__0__SHIFT EQU 2
Common_2__AG EQU CYREG_PRT0_AG
Common_2__AMUX EQU CYREG_PRT0_AMUX
Common_2__BIE EQU CYREG_PRT0_BIE
Common_2__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Common_2__BYP EQU CYREG_PRT0_BYP
Common_2__CTL EQU CYREG_PRT0_CTL
Common_2__DM0 EQU CYREG_PRT0_DM0
Common_2__DM1 EQU CYREG_PRT0_DM1
Common_2__DM2 EQU CYREG_PRT0_DM2
Common_2__DR EQU CYREG_PRT0_DR
Common_2__INP_DIS EQU CYREG_PRT0_INP_DIS
Common_2__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Common_2__LCD_EN EQU CYREG_PRT0_LCD_EN
Common_2__MASK EQU 0x04
Common_2__PORT EQU 0
Common_2__PRT EQU CYREG_PRT0_PRT
Common_2__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Common_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Common_2__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Common_2__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Common_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Common_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Common_2__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Common_2__PS EQU CYREG_PRT0_PS
Common_2__SHIFT EQU 2
Common_2__SLW EQU CYREG_PRT0_SLW

; Common_3
Common_3__0__MASK EQU 0x08
Common_3__0__PC EQU CYREG_PRT0_PC3
Common_3__0__PORT EQU 0
Common_3__0__SHIFT EQU 3
Common_3__AG EQU CYREG_PRT0_AG
Common_3__AMUX EQU CYREG_PRT0_AMUX
Common_3__BIE EQU CYREG_PRT0_BIE
Common_3__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Common_3__BYP EQU CYREG_PRT0_BYP
Common_3__CTL EQU CYREG_PRT0_CTL
Common_3__DM0 EQU CYREG_PRT0_DM0
Common_3__DM1 EQU CYREG_PRT0_DM1
Common_3__DM2 EQU CYREG_PRT0_DM2
Common_3__DR EQU CYREG_PRT0_DR
Common_3__INP_DIS EQU CYREG_PRT0_INP_DIS
Common_3__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Common_3__LCD_EN EQU CYREG_PRT0_LCD_EN
Common_3__MASK EQU 0x08
Common_3__PORT EQU 0
Common_3__PRT EQU CYREG_PRT0_PRT
Common_3__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Common_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Common_3__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Common_3__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Common_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Common_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Common_3__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Common_3__PS EQU CYREG_PRT0_PS
Common_3__SHIFT EQU 3
Common_3__SLW EQU CYREG_PRT0_SLW

; Button
Button__0__MASK EQU 0x02
Button__0__PC EQU CYREG_PRT6_PC1
Button__0__PORT EQU 6
Button__0__SHIFT EQU 1
Button__AG EQU CYREG_PRT6_AG
Button__AMUX EQU CYREG_PRT6_AMUX
Button__BIE EQU CYREG_PRT6_BIE
Button__BIT_MASK EQU CYREG_PRT6_BIT_MASK
Button__BYP EQU CYREG_PRT6_BYP
Button__CTL EQU CYREG_PRT6_CTL
Button__DM0 EQU CYREG_PRT6_DM0
Button__DM1 EQU CYREG_PRT6_DM1
Button__DM2 EQU CYREG_PRT6_DM2
Button__DR EQU CYREG_PRT6_DR
Button__INP_DIS EQU CYREG_PRT6_INP_DIS
Button__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
Button__LCD_EN EQU CYREG_PRT6_LCD_EN
Button__MASK EQU 0x02
Button__PORT EQU 6
Button__PRT EQU CYREG_PRT6_PRT
Button__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
Button__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
Button__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
Button__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
Button__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
Button__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
Button__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
Button__PS EQU CYREG_PRT6_PS
Button__SHIFT EQU 1
Button__SLW EQU CYREG_PRT6_SLW

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_LEOPARD
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_PANTHER EQU 2
CYDEV_CHIP_DIE_PSOC5LP EQU 3
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC3
CYDEV_CHIP_JTAG_ID EQU 0x1E028069
CYDEV_CHIP_MEMBER_5A EQU 2
CYDEV_CHIP_MEMBER_5B EQU 3
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_3A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_3A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_LEOPARD_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC5LP_ES EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CONFIGURATION_CLEAR_SRAM EQU 1
CYDEV_CONFIGURATION_COMPRESSED EQU 0
CYDEV_CONFIGURATION_DMA EQU 1
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_DMA
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_FORCE_ROUTE EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_REQXRES EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_VDDA LIT '5.0'
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD LIT '5.0'
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0 LIT '5.0'
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1 LIT '5.0'
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2 LIT '5.0'
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3 LIT '5.0'
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
DMA_CHANNELS_USED__MASK0 EQU 0x00000007
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERKEIL_INC */
