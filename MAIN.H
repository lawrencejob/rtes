//****************************************************************************
// @Module        Project Settings
// @Filename      MAIN.H
// @Project       FullLab.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains all function prototypes and macros for 
//                the MAIN module.
//
//----------------------------------------------------------------------------
// @Date          05/12/2014 16:17:24
//
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,1)

// USER CODE END



#ifndef _MAIN_H_
#define _MAIN_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************
#define KEIL

// USER CODE BEGIN (MAIN_Header,4)

// USER CODE END


//****************************************************************************
// @Declaration of SFRs
//****************************************************************************


//The source and destination pointers SRCPx and DSTPx
#define SRCP0                  (*((uword volatile *) 0xFCE0))
#define DSTP0                  (*((uword volatile *) 0xFCE2))
#define SRCP1                  (*((uword volatile *) 0xFCE4))
#define DSTP1                  (*((uword volatile *) 0xFCE6))
#define SRCP2                  (*((uword volatile *) 0xFCE8))
#define DSTP2                  (*((uword volatile *) 0xFCEA))
#define SRCP3                  (*((uword volatile *) 0xFCEC))
#define DSTP3                  (*((uword volatile *) 0xFCEE))
#define SRCP4                  (*((uword volatile *) 0xFCF0))
#define DSTP4                  (*((uword volatile *) 0xFCF2))
#define SRCP5                  (*((uword volatile *) 0xFCF4))
#define DSTP5                  (*((uword volatile *) 0xFCF6))
#define SRCP6                  (*((uword volatile *) 0xFCF8))
#define DSTP6                  (*((uword volatile *) 0xFCFA))
#define SRCP7                  (*((uword volatile *) 0xFCFC))
#define DSTP7                  (*((uword volatile *) 0xFCFE))

// A/D Converter End of Conversion Interrupt Control Register
#define ADCIC                  (*((uword volatile *) 0xFF98))
#define ADCIC_ADCIE                    ((T_Reg16 *) 0xFF98)->bit6
#define ADCIC_ADCIR                    ((T_Reg16 *) 0xFF98)->bit7

// A/D Converter Control Register
#define ADCON                  (*((uword volatile *) 0xFFA0))
#define ADCON_ADBSY                    ((T_Reg16 *) 0xFFA0)->bit8
#define ADCON_ADCIN                    ((T_Reg16 *) 0xFFA0)->bit10
#define ADCON_ADCRQ                    ((T_Reg16 *) 0xFFA0)->bit11
#define ADCON_ADST                     ((T_Reg16 *) 0xFFA0)->bit7
#define ADCON_ADWR                     ((T_Reg16 *) 0xFFA0)->bit9
#define ADCON_ADX                      ((T_Reg16 *) 0xFFA0)->bit6

// A/D Converter Result Register
#define ADDAT                  (*((uword volatile *) 0xFEA0))

// A/D Converter 2 Result Register
#define ADDAT2                 (*((uword volatile *) 0xF0A0))
#define ADDAT2_CHX                      ((T_Reg16 *) 0xF0A0)->bit11

// Address Select Register 1
#define ADDRSEL1               (*((uword volatile *) 0xFE18))

// Address Select Register 2
#define ADDRSEL2               (*((uword volatile *) 0xFE1A))

// Address Select Register 3
#define ADDRSEL3               (*((uword volatile *) 0xFE1C))

// Address Select Register 4
#define ADDRSEL4               (*((uword volatile *) 0xFE1E))

// A/D Converter Overrun Error Interrupt Control Register
#define ADEIC                  (*((uword volatile *) 0xFF9A))
#define ADEIC_ADEIE                    ((T_Reg16 *) 0xFF9A)->bit6
#define ADEIC_ADEIR                    ((T_Reg16 *) 0xFF9A)->bit7

// Bus Configuration Register 0
#define BUSCON0                (*((uword volatile *) 0xFF0C))
#define BUSCON0_ALECTL0                  ((T_Reg16 *) 0xFF0C)->bit9
#define BUSCON0_BSWC0                    ((T_Reg16 *) 0xFF0C)->bit11
#define BUSCON0_BUSACT0                  ((T_Reg16 *) 0xFF0C)->bit10
#define BUSCON0_CSREN0                   ((T_Reg16 *) 0xFF0C)->bit14
#define BUSCON0_CSWEN0                   ((T_Reg16 *) 0xFF0C)->bit15
#define BUSCON0_EWEN0                    ((T_Reg16 *) 0xFF0C)->bit8
#define BUSCON0_MTTC0                    ((T_Reg16 *) 0xFF0C)->bit5
#define BUSCON0_RDYEN0                   ((T_Reg16 *) 0xFF0C)->bit12
#define BUSCON0_RWDC0                    ((T_Reg16 *) 0xFF0C)->bit4

// Bus Configuration Register 1
#define BUSCON1                (*((uword volatile *) 0xFF14))
#define BUSCON1_ALECTL1                  ((T_Reg16 *) 0xFF14)->bit9
#define BUSCON1_BSWC1                    ((T_Reg16 *) 0xFF14)->bit11
#define BUSCON1_BUSACT1                  ((T_Reg16 *) 0xFF14)->bit10
#define BUSCON1_CSREN1                   ((T_Reg16 *) 0xFF14)->bit14
#define BUSCON1_CSWEN1                   ((T_Reg16 *) 0xFF14)->bit15
#define BUSCON1_EWEN1                    ((T_Reg16 *) 0xFF14)->bit8
#define BUSCON1_MTTC1                    ((T_Reg16 *) 0xFF14)->bit5
#define BUSCON1_RDYEN1                   ((T_Reg16 *) 0xFF14)->bit12
#define BUSCON1_RWDC1                    ((T_Reg16 *) 0xFF14)->bit4

// Bus Configuration Register 2
#define BUSCON2                (*((uword volatile *) 0xFF16))
#define BUSCON2_ALECTL2                  ((T_Reg16 *) 0xFF16)->bit9
#define BUSCON2_BSWC2                    ((T_Reg16 *) 0xFF16)->bit11
#define BUSCON2_BUSACT2                  ((T_Reg16 *) 0xFF16)->bit10
#define BUSCON2_CSREN2                   ((T_Reg16 *) 0xFF16)->bit14
#define BUSCON2_CSWEN2                   ((T_Reg16 *) 0xFF16)->bit15
#define BUSCON2_EWEN2                    ((T_Reg16 *) 0xFF16)->bit8
#define BUSCON2_MTTC2                    ((T_Reg16 *) 0xFF16)->bit5
#define BUSCON2_RDYEN2                   ((T_Reg16 *) 0xFF16)->bit12
#define BUSCON2_RWDC2                    ((T_Reg16 *) 0xFF16)->bit4

// Bus Configuration Register 3
#define BUSCON3                (*((uword volatile *) 0xFF18))
#define BUSCON3_ALECTL3                  ((T_Reg16 *) 0xFF18)->bit9
#define BUSCON3_BSWC3                    ((T_Reg16 *) 0xFF18)->bit11
#define BUSCON3_BUSACT3                  ((T_Reg16 *) 0xFF18)->bit10
#define BUSCON3_CSREN3                   ((T_Reg16 *) 0xFF18)->bit14
#define BUSCON3_CSWEN3                   ((T_Reg16 *) 0xFF18)->bit15
#define BUSCON3_EWEN3                    ((T_Reg16 *) 0xFF18)->bit8
#define BUSCON3_MTTC3                    ((T_Reg16 *) 0xFF18)->bit5
#define BUSCON3_RDYEN3                   ((T_Reg16 *) 0xFF18)->bit12
#define BUSCON3_RWDC3                    ((T_Reg16 *) 0xFF18)->bit4

// Bus Configuration Register 4
#define BUSCON4                (*((uword volatile *) 0xFF1A))
#define BUSCON4_ALECTL4                  ((T_Reg16 *) 0xFF1A)->bit9
#define BUSCON4_BSWC4                    ((T_Reg16 *) 0xFF1A)->bit11
#define BUSCON4_BUSACT4                  ((T_Reg16 *) 0xFF1A)->bit10
#define BUSCON4_CSREN4                   ((T_Reg16 *) 0xFF1A)->bit14
#define BUSCON4_CSWEN4                   ((T_Reg16 *) 0xFF1A)->bit15
#define BUSCON4_EWEN4                    ((T_Reg16 *) 0xFF1A)->bit8
#define BUSCON4_MTTC4                    ((T_Reg16 *) 0xFF1A)->bit5
#define BUSCON4_RDYEN4                   ((T_Reg16 *) 0xFF1A)->bit12
#define BUSCON4_RWDC4                    ((T_Reg16 *) 0xFF1A)->bit4

// CAN1 Bit Timing Register
#define C1BTR                  (*((uword volatile *) 0xEF04))

// CAN1 Control / Status Register
#define C1CSR                  (*((uword volatile *) 0xEF00))

// CAN1 Global Mask Short
#define C1GMS                  (*((uword volatile *) 0xEF06))

// CAN1 Lower Arbitration Register 1
#define C1LAR1                 (*((uword volatile *) 0xEF14))

// CAN1 Lower Arbitration Register 10
#define C1LAR10                (*((uword volatile *) 0xEFA4))

// CAN1 Lower Arbitration Register 11
#define C1LAR11                (*((uword volatile *) 0xEFB4))

// CAN1 Lower Arbitration Register 12
#define C1LAR12                (*((uword volatile *) 0xEFC4))

// CAN1 Lower Arbitration Register 13
#define C1LAR13                (*((uword volatile *) 0xEFD4))

// CAN1 Lower Arbitration Register 14
#define C1LAR14                (*((uword volatile *) 0xEFE4))

// CAN1 Lower Arbitration Register 15
#define C1LAR15                (*((uword volatile *) 0xEFF4))

// CAN1 Lower Arbitration Register 2
#define C1LAR2                 (*((uword volatile *) 0xEF24))

// CAN1 Lower Arbitration Register 3
#define C1LAR3                 (*((uword volatile *) 0xEF34))

// CAN1 Lower Arbitration Register 4
#define C1LAR4                 (*((uword volatile *) 0xEF44))

// CAN1 Lower Arbitration Register 5
#define C1LAR5                 (*((uword volatile *) 0xEF54))

// CAN1 Lower Arbitration Register 6
#define C1LAR6                 (*((uword volatile *) 0xEF64))

// CAN1 Lower Arbitration Register 7
#define C1LAR7                 (*((uword volatile *) 0xEF74))

// CAN1 Lower Arbitration Register 8
#define C1LAR8                 (*((uword volatile *) 0xEF84))

// CAN1 Lower Arbitration Register 9
#define C1LAR9                 (*((uword volatile *) 0xEF94))

// CAN1 Lower Global Mask Long
#define C1LGML                 (*((uword volatile *) 0xEF0A))

// CAN1 Lower Mask of Last Message
#define C1LMLM                 (*((uword volatile *) 0xEF0E))

// CAN1 Message Configuratiom Register 1
#define C1MCFG1                (*((uword volatile *) 0xEF16))

// CAN1 Message Configuratiom Register 10
#define C1MCFG10               (*((uword volatile *) 0xEFA6))

// CAN1 Message Configuratiom Register 11
#define C1MCFG11               (*((uword volatile *) 0xEFB6))

// CAN1 Message Configuratiom Register 12
#define C1MCFG12               (*((uword volatile *) 0xEFC6))

// CAN1 Message Configuratiom Register 13
#define C1MCFG13               (*((uword volatile *) 0xEFD6))

// CAN1 Message Configuratiom Register 14
#define C1MCFG14               (*((uword volatile *) 0xEFE6))

// CAN1 Message Configuratiom Register 15
#define C1MCFG15               (*((uword volatile *) 0xEFF6))

// CAN1 Message Configuratiom Register 2
#define C1MCFG2                (*((uword volatile *) 0xEF26))

// CAN1 Message Configuratiom Register 3
#define C1MCFG3                (*((uword volatile *) 0xEF36))

// CAN1 Message Configuratiom Register 4
#define C1MCFG4                (*((uword volatile *) 0xEF46))

// CAN1 Message Configuratiom Register 5
#define C1MCFG5                (*((uword volatile *) 0xEF56))

// CAN1 Message Configuratiom Register 6
#define C1MCFG6                (*((uword volatile *) 0xEF66))

// CAN1 Message Configuratiom Register 7
#define C1MCFG7                (*((uword volatile *) 0xEF76))

// CAN1 Message Configuratiom Register 8
#define C1MCFG8                (*((uword volatile *) 0xEF86))

// CAN1 Message Configuratiom Register 9
#define C1MCFG9                (*((uword volatile *) 0xEF96))

// CAN1 Message Control Register 1
#define C1MCR1                 (*((uword volatile *) 0xEF10))

// CAN1 Message Control Register 10
#define C1MCR10                (*((uword volatile *) 0xEFA0))

// CAN1 Message Control Register 11
#define C1MCR11                (*((uword volatile *) 0xEFB0))

// CAN1 Message Control Register 12
#define C1MCR12                (*((uword volatile *) 0xEFC0))

// CAN1 Message Control Register 13
#define C1MCR13                (*((uword volatile *) 0xEFD0))

// CAN1 Message Control Register 14
#define C1MCR14                (*((uword volatile *) 0xEFE0))

// CAN1 Message Control Register 15
#define C1MCR15                (*((uword volatile *) 0xEFF0))

// CAN1 Message Control Register 2
#define C1MCR2                 (*((uword volatile *) 0xEF20))

// CAN1 Message Control Register 3
#define C1MCR3                 (*((uword volatile *) 0xEF30))

// CAN1 Message Control Register 4
#define C1MCR4                 (*((uword volatile *) 0xEF40))

// CAN1 Message Control Register 5
#define C1MCR5                 (*((uword volatile *) 0xEF50))

// CAN1 Message Control Register 6
#define C1MCR6                 (*((uword volatile *) 0xEF60))

// CAN1 Message Control Register 7
#define C1MCR7                 (*((uword volatile *) 0xEF70))

// CAN1 Message Control Register 8
#define C1MCR8                 (*((uword volatile *) 0xEF80))

// CAN1 Message Control Register 9
#define C1MCR9                 (*((uword volatile *) 0xEF90))

// CAN1 Port Control and Interrupt Register
#define C1PCIR                 (*((uword volatile *) 0xEF02))

// CAN1 Upper Arbitration Register 1
#define C1UAR1                 (*((uword volatile *) 0xEF12))

// CAN1 Upper Arbitration Register 10
#define C1UAR10                (*((uword volatile *) 0xEFA2))

// CAN1 Upper Arbitration Register 11
#define C1UAR11                (*((uword volatile *) 0xEFB2))

// CAN1 Upper Arbitration Register 12
#define C1UAR12                (*((uword volatile *) 0xEFC2))

// CAN1 Upper Arbitration Register 13
#define C1UAR13                (*((uword volatile *) 0xEFD2))

// CAN1 Upper Arbitration Register 14
#define C1UAR14                (*((uword volatile *) 0xEFE2))

// CAN1 Upper Arbitration Register 15
#define C1UAR15                (*((uword volatile *) 0xEFF2))

// CAN1 Upper Arbitration Register 2
#define C1UAR2                 (*((uword volatile *) 0xEF22))

// CAN1 Upper Arbitration Register 3
#define C1UAR3                 (*((uword volatile *) 0xEF32))

// CAN1 Upper Arbitration Register 4
#define C1UAR4                 (*((uword volatile *) 0xEF42))

// CAN1 Upper Arbitration Register 5
#define C1UAR5                 (*((uword volatile *) 0xEF52))

// CAN1 Upper Arbitration Register 6
#define C1UAR6                 (*((uword volatile *) 0xEF62))

// CAN1 Upper Arbitration Register 7
#define C1UAR7                 (*((uword volatile *) 0xEF72))

// CAN1 Upper Arbitration Register 8
#define C1UAR8                 (*((uword volatile *) 0xEF82))

// CAN1 Upper Arbitration Register 9
#define C1UAR9                 (*((uword volatile *) 0xEF92))

// CAN1 Upper Global Mask Long
#define C1UGML                 (*((uword volatile *) 0xEF08))

// CAN1 Upper Mask of Last Message
#define C1UMLM                 (*((uword volatile *) 0xEF0C))

// CAN2 Bit Timing Register
#define C2BTR                  (*((uword volatile *) 0xEE04))

// CAN2 Control / Status Register
#define C2CSR                  (*((uword volatile *) 0xEE00))

// CAN2 Global Mask Short
#define C2GMS                  (*((uword volatile *) 0xEE06))

// CAN2 Lower Arbitration Register 1
#define C2LAR1                 (*((uword volatile *) 0xEE14))

// CAN2 Lower Arbitration Register 10
#define C2LAR10                (*((uword volatile *) 0xEEA4))

// CAN2 Lower Arbitration Register 11
#define C2LAR11                (*((uword volatile *) 0xEEB4))

// CAN2 Lower Arbitration Register 12
#define C2LAR12                (*((uword volatile *) 0xEEC4))

// CAN2 Lower Arbitration Register 13
#define C2LAR13                (*((uword volatile *) 0xEED4))

// CAN2 Lower Arbitration Register 14
#define C2LAR14                (*((uword volatile *) 0xEEE4))

// CAN2 Lower Arbitration Register 15
#define C2LAR15                (*((uword volatile *) 0xEEF4))

// CAN2 Lower Arbitration Register 2
#define C2LAR2                 (*((uword volatile *) 0xEE24))

// CAN2 Lower Arbitration Register 3
#define C2LAR3                 (*((uword volatile *) 0xEE34))

// CAN2 Lower Arbitration Register 4
#define C2LAR4                 (*((uword volatile *) 0xEE44))

// CAN2 Lower Arbitration Register 5
#define C2LAR5                 (*((uword volatile *) 0xEE54))

// CAN2 Lower Arbitration Register 6
#define C2LAR6                 (*((uword volatile *) 0xEE64))

// CAN2 Lower Arbitration Register 7
#define C2LAR7                 (*((uword volatile *) 0xEE74))

// CAN2 Lower Arbitration Register 8
#define C2LAR8                 (*((uword volatile *) 0xEE84))

// CAN2 Lower Arbitration Register 9
#define C2LAR9                 (*((uword volatile *) 0xEE94))

// CAN2 Lower Global Mask Long
#define C2LGML                 (*((uword volatile *) 0xEE0A))

// CAN2 Lower Mask of Last Message
#define C2LMLM                 (*((uword volatile *) 0xEE0E))

// CAN2 Message Configuratiom Register 1
#define C2MCFG1                (*((uword volatile *) 0xEE16))

// CAN2 Message Configuratiom Register 10
#define C2MCFG10               (*((uword volatile *) 0xEEA6))

// CAN2 Message Configuratiom Register 11
#define C2MCFG11               (*((uword volatile *) 0xEEB6))

// CAN2 Message Configuratiom Register 12
#define C2MCFG12               (*((uword volatile *) 0xEEC6))

// CAN2 Message Configuratiom Register 13
#define C2MCFG13               (*((uword volatile *) 0xEED6))

// CAN2 Message Configuratiom Register 14
#define C2MCFG14               (*((uword volatile *) 0xEEE6))

// CAN2 Message Configuratiom Register 15
#define C2MCFG15               (*((uword volatile *) 0xEEF6))

// CAN2 Message Configuratiom Register 2
#define C2MCFG2                (*((uword volatile *) 0xEE26))

// CAN2 Message Configuratiom Register 3
#define C2MCFG3                (*((uword volatile *) 0xEE36))

// CAN2 Message Configuratiom Register 4
#define C2MCFG4                (*((uword volatile *) 0xEE46))

// CAN2 Message Configuratiom Register 5
#define C2MCFG5                (*((uword volatile *) 0xEE56))

// CAN2 Message Configuratiom Register 6
#define C2MCFG6                (*((uword volatile *) 0xEE66))

// CAN2 Message Configuratiom Register 7
#define C2MCFG7                (*((uword volatile *) 0xEE76))

// CAN2 Message Configuratiom Register 8
#define C2MCFG8                (*((uword volatile *) 0xEE86))

// CAN2 Message Configuratiom Register 9
#define C2MCFG9                (*((uword volatile *) 0xEE96))

// CAN2 Message Control Register 1
#define C2MCR1                 (*((uword volatile *) 0xEE10))

// CAN2 Message Control Register 10
#define C2MCR10                (*((uword volatile *) 0xEEA0))

// CAN2 Message Control Register 11
#define C2MCR11                (*((uword volatile *) 0xEEB0))

// CAN2 Message Control Register 12
#define C2MCR12                (*((uword volatile *) 0xEEC0))

// CAN2 Message Control Register 13
#define C2MCR13                (*((uword volatile *) 0xEED0))

// CAN2 Message Control Register 14
#define C2MCR14                (*((uword volatile *) 0xEEE0))

// CAN2 Message Control Register 15
#define C2MCR15                (*((uword volatile *) 0xEEF0))

// CAN2 Message Control Register 2
#define C2MCR2                 (*((uword volatile *) 0xEE20))

// CAN2 Message Control Register 3
#define C2MCR3                 (*((uword volatile *) 0xEE30))

// CAN2 Message Control Register 4
#define C2MCR4                 (*((uword volatile *) 0xEE40))

// CAN2 Message Control Register 5
#define C2MCR5                 (*((uword volatile *) 0xEE50))

// CAN2 Message Control Register 6
#define C2MCR6                 (*((uword volatile *) 0xEE60))

// CAN2 Message Control Register 7
#define C2MCR7                 (*((uword volatile *) 0xEE70))

// CAN2 Message Control Register 8
#define C2MCR8                 (*((uword volatile *) 0xEE80))

// CAN2 Message Control Register 9
#define C2MCR9                 (*((uword volatile *) 0xEE90))

// CAN2 Port Control and Interrupt Register
#define C2PCIR                 (*((uword volatile *) 0xEE02))

// CAN2 Upper Arbitration Register 1
#define C2UAR1                 (*((uword volatile *) 0xEE12))

// CAN2 Upper Arbitration Register 10
#define C2UAR10                (*((uword volatile *) 0xEEA2))

// CAN2 Upper Arbitration Register 11
#define C2UAR11                (*((uword volatile *) 0xEEB2))

// CAN2 Upper Arbitration Register 12
#define C2UAR12                (*((uword volatile *) 0xEEC2))

// CAN2 Upper Arbitration Register 13
#define C2UAR13                (*((uword volatile *) 0xEED2))

// CAN2 Upper Arbitration Register 14
#define C2UAR14                (*((uword volatile *) 0xEEE2))

// CAN2 Upper Arbitration Register 15
#define C2UAR15                (*((uword volatile *) 0xEEF2))

// CAN2 Upper Arbitration Register 2
#define C2UAR2                 (*((uword volatile *) 0xEE22))

// CAN2 Upper Arbitration Register 3
#define C2UAR3                 (*((uword volatile *) 0xEE32))

// CAN2 Upper Arbitration Register 4
#define C2UAR4                 (*((uword volatile *) 0xEE42))

// CAN2 Upper Arbitration Register 5
#define C2UAR5                 (*((uword volatile *) 0xEE52))

// CAN2 Upper Arbitration Register 6
#define C2UAR6                 (*((uword volatile *) 0xEE62))

// CAN2 Upper Arbitration Register 7
#define C2UAR7                 (*((uword volatile *) 0xEE72))

// CAN2 Upper Arbitration Register 8
#define C2UAR8                 (*((uword volatile *) 0xEE82))

// CAN2 Upper Arbitration Register 9
#define C2UAR9                 (*((uword volatile *) 0xEE92))

// CAN2 Upper Global Mask Long
#define C2UGML                 (*((uword volatile *) 0xEE08))

// CAN2 Upper Mask of Last Message
#define C2UMLM                 (*((uword volatile *) 0xEE0C))

// GPT12 Capture/Reload Register
#define CAPREL                 (*((uword volatile *) 0xFE4A))

// CAPCOM Register 0
#define CC0                    (*((uword volatile *) 0xFE80))

// Capture/Compare Register 0 Interrupt Control Register
#define CC0IC                  (*((uword volatile *) 0xFF78))
#define CC0IC_CC0IE                    ((T_Reg16 *) 0xFF78)->bit6
#define CC0IC_CC0IR                    ((T_Reg16 *) 0xFF78)->bit7

// CAPCOM Register 1
#define CC1                    (*((uword volatile *) 0xFE82))

// CAPCOM Register 10
#define CC10                   (*((uword volatile *) 0xFE94))

// Capture/Compare Register 10 Interrupt Control Register
#define CC10IC                 (*((uword volatile *) 0xFF8C))
#define CC10IC_CC10IE                   ((T_Reg16 *) 0xFF8C)->bit6
#define CC10IC_CC10IR                   ((T_Reg16 *) 0xFF8C)->bit7

// CAPCOM Register 11
#define CC11                   (*((uword volatile *) 0xFE96))

// Capture/Compare Register 11 Interrupt Control Register
#define CC11IC                 (*((uword volatile *) 0xFF8E))
#define CC11IC_CC11IE                   ((T_Reg16 *) 0xFF8E)->bit6
#define CC11IC_CC11IR                   ((T_Reg16 *) 0xFF8E)->bit7

// CAPCOM Register 12
#define CC12                   (*((uword volatile *) 0xFE98))

// Capture/Compare Register 12 Interrupt Control Register
#define CC12IC                 (*((uword volatile *) 0xFF90))
#define CC12IC_CC12IE                   ((T_Reg16 *) 0xFF90)->bit6
#define CC12IC_CC12IR                   ((T_Reg16 *) 0xFF90)->bit7

// CAPCOM Register 13
#define CC13                   (*((uword volatile *) 0xFE9A))

// Capture/Compare Register 13 Interrupt Control Register
#define CC13IC                 (*((uword volatile *) 0xFF92))
#define CC13IC_CC13IE                   ((T_Reg16 *) 0xFF92)->bit6
#define CC13IC_CC13IR                   ((T_Reg16 *) 0xFF92)->bit7

// CAPCOM Register 14
#define CC14                   (*((uword volatile *) 0xFE9C))

// Capture/Compare Register 14 Interrupt Control Register
#define CC14IC                 (*((uword volatile *) 0xFF94))
#define CC14IC_CC14IE                   ((T_Reg16 *) 0xFF94)->bit6
#define CC14IC_CC14IR                   ((T_Reg16 *) 0xFF94)->bit7

// CAPCOM Register 15
#define CC15                   (*((uword volatile *) 0xFE9E))

// Capture/Compare Register 15 Interrupt Control Register
#define CC15IC                 (*((uword volatile *) 0xFF96))
#define CC15IC_CC15IE                   ((T_Reg16 *) 0xFF96)->bit6
#define CC15IC_CC15IR                   ((T_Reg16 *) 0xFF96)->bit7

// CAPCOM Register 16
#define CC16                   (*((uword volatile *) 0xFE60))

// Capture/Compare Register 16 Interrupt Control Register
#define CC16IC                 (*((uword volatile *) 0xF160))
#define CC16IC_CC16IE                   ((T_Reg16 *) 0xF160)->bit6
#define CC16IC_CC16IR                   ((T_Reg16 *) 0xF160)->bit7

// CAPCOM Register 17
#define CC17                   (*((uword volatile *) 0xFE62))

// Capture/Compare Register 17 Interrupt Control Register
#define CC17IC                 (*((uword volatile *) 0xF162))
#define CC17IC_CC17IE                   ((T_Reg16 *) 0xF162)->bit6
#define CC17IC_CC17IR                   ((T_Reg16 *) 0xF162)->bit7

// CAPCOM Register 18
#define CC18                   (*((uword volatile *) 0xFE64))

// Capture/Compare Register 18 Interrupt Control Register
#define CC18IC                 (*((uword volatile *) 0xF164))
#define CC18IC_CC18IE                   ((T_Reg16 *) 0xF164)->bit6
#define CC18IC_CC18IR                   ((T_Reg16 *) 0xF164)->bit7

// CAPCOM Register 19
#define CC19                   (*((uword volatile *) 0xFE66))

// Capture/Compare Register 19 Interrupt Control Register
#define CC19IC                 (*((uword volatile *) 0xF166))
#define CC19IC_CC19IE                   ((T_Reg16 *) 0xF166)->bit6
#define CC19IC_CC19IR                   ((T_Reg16 *) 0xF166)->bit7

// Capture/Compare Register 1 Interrupt Control Register
#define CC1IC                  (*((uword volatile *) 0xFF7A))
#define CC1IC_CC1IE                    ((T_Reg16 *) 0xFF7A)->bit6
#define CC1IC_CC1IR                    ((T_Reg16 *) 0xFF7A)->bit7

// CAPCOM Register 2
#define CC2                    (*((uword volatile *) 0xFE84))

// CAPCOM Register 20
#define CC20                   (*((uword volatile *) 0xFE68))

// Capture/Compare Register 20 Interrupt Control Register
#define CC20IC                 (*((uword volatile *) 0xF168))
#define CC20IC_CC20IE                   ((T_Reg16 *) 0xF168)->bit6
#define CC20IC_CC20IR                   ((T_Reg16 *) 0xF168)->bit7

// CAPCOM Register 21
#define CC21                   (*((uword volatile *) 0xFE6A))

// Capture/Compare Register 21 Interrupt Control Register
#define CC21IC                 (*((uword volatile *) 0xF16A))
#define CC21IC_CC21IE                   ((T_Reg16 *) 0xF16A)->bit6
#define CC21IC_CC21IR                   ((T_Reg16 *) 0xF16A)->bit7

// CAPCOM Register 22
#define CC22                   (*((uword volatile *) 0xFE6C))

// Capture/Compare Register 22 Interrupt Control Register
#define CC22IC                 (*((uword volatile *) 0xF16C))
#define CC22IC_CC22IE                   ((T_Reg16 *) 0xF16C)->bit6
#define CC22IC_CC22IR                   ((T_Reg16 *) 0xF16C)->bit7

// CAPCOM Register 23
#define CC23                   (*((uword volatile *) 0xFE6E))

// Capture/Compare Register 23 Interrupt Control Register
#define CC23IC                 (*((uword volatile *) 0xF16E))
#define CC23IC_CC23IE                   ((T_Reg16 *) 0xF16E)->bit6
#define CC23IC_CC23IR                   ((T_Reg16 *) 0xF16E)->bit7

// CAPCOM Register 24
#define CC24                   (*((uword volatile *) 0xFE70))

// Capture/Compare Register 24 Interrupt Control Register
#define CC24IC                 (*((uword volatile *) 0xF170))
#define CC24IC_CC24IE                   ((T_Reg16 *) 0xF170)->bit6
#define CC24IC_CC24IR                   ((T_Reg16 *) 0xF170)->bit7

// CAPCOM Register 25
#define CC25                   (*((uword volatile *) 0xFE72))

// Capture/Compare Register 25 Interrupt Control Register
#define CC25IC                 (*((uword volatile *) 0xF172))
#define CC25IC_CC25IE                   ((T_Reg16 *) 0xF172)->bit6
#define CC25IC_CC25IR                   ((T_Reg16 *) 0xF172)->bit7

// CAPCOM Register 26
#define CC26                   (*((uword volatile *) 0xFE74))

// Capture/Compare Register 26 Interrupt Control Register
#define CC26IC                 (*((uword volatile *) 0xF174))
#define CC26IC_CC26IE                   ((T_Reg16 *) 0xF174)->bit6
#define CC26IC_CC26IR                   ((T_Reg16 *) 0xF174)->bit7

// CAPCOM Register 27
#define CC27                   (*((uword volatile *) 0xFE76))

// Capture/Compare Register 27 Interrupt Control Register
#define CC27IC                 (*((uword volatile *) 0xF176))
#define CC27IC_CC27IE                   ((T_Reg16 *) 0xF176)->bit6
#define CC27IC_CC27IR                   ((T_Reg16 *) 0xF176)->bit7

// CAPCOM Register 28
#define CC28                   (*((uword volatile *) 0xFE78))

// Capture/Compare Register 28 Interrupt Control Register
#define CC28IC                 (*((uword volatile *) 0xF178))
#define CC28IC_CC28IE                   ((T_Reg16 *) 0xF178)->bit6
#define CC28IC_CC28IR                   ((T_Reg16 *) 0xF178)->bit7

// CAPCOM Register 29
#define CC29                   (*((uword volatile *) 0xFE7A))

// Capture/Compare Register 29 Interrupt Control Register
#define CC29IC                 (*((uword volatile *) 0xF184))
#define CC29IC_CC29IE                   ((T_Reg16 *) 0xF184)->bit6
#define CC29IC_CC29IR                   ((T_Reg16 *) 0xF184)->bit7

// Capture/Compare Register 2 Interrupt Control Register
#define CC2IC                  (*((uword volatile *) 0xFF7C))
#define CC2IC_CC2IE                    ((T_Reg16 *) 0xFF7C)->bit6
#define CC2IC_CC2IR                    ((T_Reg16 *) 0xFF7C)->bit7

// CAPCOM Register 3
#define CC3                    (*((uword volatile *) 0xFE86))

// CAPCOM Register 30
#define CC30                   (*((uword volatile *) 0xFE7C))

// Capture/Compare Register 30 Interrupt Control Register
#define CC30IC                 (*((uword volatile *) 0xF18C))
#define CC30IC_CC30IE                   ((T_Reg16 *) 0xF18C)->bit6
#define CC30IC_CC30IR                   ((T_Reg16 *) 0xF18C)->bit7

// CAPCOM Register 31
#define CC31                   (*((uword volatile *) 0xFE7E))

// Capture/Compare Register 31 Interrupt Control Register
#define CC31IC                 (*((uword volatile *) 0xF194))
#define CC31IC_CC31IE                   ((T_Reg16 *) 0xF194)->bit6
#define CC31IC_CC31IR                   ((T_Reg16 *) 0xF194)->bit7

// Capture/Compare Register 3 Interrupt Control Register
#define CC3IC                  (*((uword volatile *) 0xFF7E))
#define CC3IC_CC3IE                    ((T_Reg16 *) 0xFF7E)->bit6
#define CC3IC_CC3IR                    ((T_Reg16 *) 0xFF7E)->bit7

// CAPCOM Register 4
#define CC4                    (*((uword volatile *) 0xFE88))

// Capture/Compare Register 4 Interrupt Control Register
#define CC4IC                  (*((uword volatile *) 0xFF80))
#define CC4IC_CC4IE                    ((T_Reg16 *) 0xFF80)->bit6
#define CC4IC_CC4IR                    ((T_Reg16 *) 0xFF80)->bit7

// CAPCOM Register 5
#define CC5                    (*((uword volatile *) 0xFE8A))

// Capture/Compare Register 5 Interrupt Control Register
#define CC5IC                  (*((uword volatile *) 0xFF82))
#define CC5IC_CC5IE                    ((T_Reg16 *) 0xFF82)->bit6
#define CC5IC_CC5IR                    ((T_Reg16 *) 0xFF82)->bit7

// CAPCOM Register 6
#define CC6                    (*((uword volatile *) 0xFE8C))

// Capture/Compare Register 6 Interrupt Control Register
#define CC6IC                  (*((uword volatile *) 0xFF84))
#define CC6IC_CC6IE                    ((T_Reg16 *) 0xFF84)->bit6
#define CC6IC_CC6IR                    ((T_Reg16 *) 0xFF84)->bit7

// CAPCOM Register 7
#define CC7                    (*((uword volatile *) 0xFE8E))

// Capture/Compare Register 7 Interrupt Control Register
#define CC7IC                  (*((uword volatile *) 0xFF86))
#define CC7IC_CC7IE                    ((T_Reg16 *) 0xFF86)->bit6
#define CC7IC_CC7IR                    ((T_Reg16 *) 0xFF86)->bit7

// CAPCOM Register 8
#define CC8                    (*((uword volatile *) 0xFE90))

// Capture/Compare Register 8 Interrupt Control Register
#define CC8IC                  (*((uword volatile *) 0xFF88))
#define CC8IC_CC8IE                    ((T_Reg16 *) 0xFF88)->bit6
#define CC8IC_CC8IR                    ((T_Reg16 *) 0xFF88)->bit7

// CAPCOM Register 9
#define CC9                    (*((uword volatile *) 0xFE92))

// Capture/Compare Register 9 Interrupt Control Register
#define CC9IC                  (*((uword volatile *) 0xFF8A))
#define CC9IC_CC9IE                    ((T_Reg16 *) 0xFF8A)->bit6
#define CC9IC_CC9IR                    ((T_Reg16 *) 0xFF8A)->bit7

// CAPCOM Mode Control Register 0
#define CCM0                   (*((uword volatile *) 0xFF52))
#define CCM0_ACC0                     ((T_Reg16 *) 0xFF52)->bit3
#define CCM0_ACC1                     ((T_Reg16 *) 0xFF52)->bit7
#define CCM0_ACC2                     ((T_Reg16 *) 0xFF52)->bit11
#define CCM0_ACC3                     ((T_Reg16 *) 0xFF52)->bit15

// CAPCOM Mode Control Register 1
#define CCM1                   (*((uword volatile *) 0xFF54))
#define CCM1_ACC4                     ((T_Reg16 *) 0xFF54)->bit3
#define CCM1_ACC5                     ((T_Reg16 *) 0xFF54)->bit7
#define CCM1_ACC6                     ((T_Reg16 *) 0xFF54)->bit11
#define CCM1_ACC7                     ((T_Reg16 *) 0xFF54)->bit15

// CAPCOM Mode Control Register 2
#define CCM2                   (*((uword volatile *) 0xFF56))
#define CCM2_ACC10                    ((T_Reg16 *) 0xFF56)->bit11
#define CCM2_ACC11                    ((T_Reg16 *) 0xFF56)->bit15
#define CCM2_ACC8                     ((T_Reg16 *) 0xFF56)->bit3
#define CCM2_ACC9                     ((T_Reg16 *) 0xFF56)->bit7

// CAPCOM Mode Control Register 3
#define CCM3                   (*((uword volatile *) 0xFF58))
#define CCM3_ACC12                    ((T_Reg16 *) 0xFF58)->bit3
#define CCM3_ACC13                    ((T_Reg16 *) 0xFF58)->bit7
#define CCM3_ACC14                    ((T_Reg16 *) 0xFF58)->bit11
#define CCM3_ACC15                    ((T_Reg16 *) 0xFF58)->bit15

// CAPCOM Mode Control Register 4
#define CCM4                   (*((uword volatile *) 0xFF22))
#define CCM4_ACC16                    ((T_Reg16 *) 0xFF22)->bit3
#define CCM4_ACC17                    ((T_Reg16 *) 0xFF22)->bit7
#define CCM4_ACC18                    ((T_Reg16 *) 0xFF22)->bit11
#define CCM4_ACC19                    ((T_Reg16 *) 0xFF22)->bit15

// CAPCOM Mode Control Register 5
#define CCM5                   (*((uword volatile *) 0xFF24))
#define CCM5_ACC20                    ((T_Reg16 *) 0xFF24)->bit3
#define CCM5_ACC21                    ((T_Reg16 *) 0xFF24)->bit7
#define CCM5_ACC22                    ((T_Reg16 *) 0xFF24)->bit11
#define CCM5_ACC23                    ((T_Reg16 *) 0xFF24)->bit15

// CAPCOM Mode Control Register 6
#define CCM6                   (*((uword volatile *) 0xFF26))
#define CCM6_ACC24                    ((T_Reg16 *) 0xFF26)->bit3
#define CCM6_ACC25                    ((T_Reg16 *) 0xFF26)->bit7
#define CCM6_ACC26                    ((T_Reg16 *) 0xFF26)->bit11
#define CCM6_ACC27                    ((T_Reg16 *) 0xFF26)->bit15

// CAPCOM Mode Control Register 7
#define CCM7                   (*((uword volatile *) 0xFF28))
#define CCM7_ACC28                    ((T_Reg16 *) 0xFF28)->bit3
#define CCM7_ACC29                    ((T_Reg16 *) 0xFF28)->bit7
#define CCM7_ACC30                    ((T_Reg16 *) 0xFF28)->bit11
#define CCM7_ACC31                    ((T_Reg16 *) 0xFF28)->bit15

// CPU Contex Pointer Register
#define CP                     (*((uword volatile *) 0xFE10))

// GPT2 CAPREL Interrupt Control Register
#define CRIC                   (*((uword volatile *) 0xFF6A))
#define CRIC_CRIE                     ((T_Reg16 *) 0xFF6A)->bit6
#define CRIC_CRIR                     ((T_Reg16 *) 0xFF6A)->bit7

// CPU Code Segment Point Register
#define CSP                    (*((uword volatile *) 0xFE08))

// Port 0 High Direction Control Register
#define DP0H                   (*((uword volatile *) 0xF102))
#define DP0H_DP0H_0                   ((T_Reg16 *) 0xF102)->bit0
#define DP0H_DP0H_1                   ((T_Reg16 *) 0xF102)->bit1
#define DP0H_DP0H_2                   ((T_Reg16 *) 0xF102)->bit2
#define DP0H_DP0H_3                   ((T_Reg16 *) 0xF102)->bit3
#define DP0H_DP0H_4                   ((T_Reg16 *) 0xF102)->bit4
#define DP0H_DP0H_5                   ((T_Reg16 *) 0xF102)->bit5
#define DP0H_DP0H_6                   ((T_Reg16 *) 0xF102)->bit6
#define DP0H_DP0H_7                   ((T_Reg16 *) 0xF102)->bit7

// Port 0 Low Direction Control Register
#define DP0L                   (*((uword volatile *) 0xF100))
#define DP0L_DP0L_0                   ((T_Reg16 *) 0xF100)->bit0
#define DP0L_DP0L_1                   ((T_Reg16 *) 0xF100)->bit1
#define DP0L_DP0L_2                   ((T_Reg16 *) 0xF100)->bit2
#define DP0L_DP0L_3                   ((T_Reg16 *) 0xF100)->bit3
#define DP0L_DP0L_4                   ((T_Reg16 *) 0xF100)->bit4
#define DP0L_DP0L_5                   ((T_Reg16 *) 0xF100)->bit5
#define DP0L_DP0L_6                   ((T_Reg16 *) 0xF100)->bit6
#define DP0L_DP0L_7                   ((T_Reg16 *) 0xF100)->bit7

// Port 1 High Direction Control Register
#define DP1H                   (*((uword volatile *) 0xF106))
#define DP1H_DP1H_0                   ((T_Reg16 *) 0xF106)->bit0
#define DP1H_DP1H_1                   ((T_Reg16 *) 0xF106)->bit1
#define DP1H_DP1H_2                   ((T_Reg16 *) 0xF106)->bit2
#define DP1H_DP1H_3                   ((T_Reg16 *) 0xF106)->bit3
#define DP1H_DP1H_4                   ((T_Reg16 *) 0xF106)->bit4
#define DP1H_DP1H_5                   ((T_Reg16 *) 0xF106)->bit5
#define DP1H_DP1H_6                   ((T_Reg16 *) 0xF106)->bit6
#define DP1H_DP1H_7                   ((T_Reg16 *) 0xF106)->bit7

// Port 1 Low Direction Control Register
#define DP1L                   (*((uword volatile *) 0xF104))
#define DP1L_DP1L_0                   ((T_Reg16 *) 0xF104)->bit0
#define DP1L_DP1L_1                   ((T_Reg16 *) 0xF104)->bit1
#define DP1L_DP1L_2                   ((T_Reg16 *) 0xF104)->bit2
#define DP1L_DP1L_3                   ((T_Reg16 *) 0xF104)->bit3
#define DP1L_DP1L_4                   ((T_Reg16 *) 0xF104)->bit4
#define DP1L_DP1L_5                   ((T_Reg16 *) 0xF104)->bit5
#define DP1L_DP1L_6                   ((T_Reg16 *) 0xF104)->bit6
#define DP1L_DP1L_7                   ((T_Reg16 *) 0xF104)->bit7

// Port 2 Direction Control Register
#define DP2                    (*((uword volatile *) 0xFFC2))
#define DP2_DP2_0                    ((T_Reg16 *) 0xFFC2)->bit0
#define DP2_DP2_1                    ((T_Reg16 *) 0xFFC2)->bit1
#define DP2_DP2_10                   ((T_Reg16 *) 0xFFC2)->bit10
#define DP2_DP2_11                   ((T_Reg16 *) 0xFFC2)->bit11
#define DP2_DP2_12                   ((T_Reg16 *) 0xFFC2)->bit12
#define DP2_DP2_13                   ((T_Reg16 *) 0xFFC2)->bit13
#define DP2_DP2_14                   ((T_Reg16 *) 0xFFC2)->bit14
#define DP2_DP2_15                   ((T_Reg16 *) 0xFFC2)->bit15
#define DP2_DP2_2                    ((T_Reg16 *) 0xFFC2)->bit2
#define DP2_DP2_3                    ((T_Reg16 *) 0xFFC2)->bit3
#define DP2_DP2_4                    ((T_Reg16 *) 0xFFC2)->bit4
#define DP2_DP2_5                    ((T_Reg16 *) 0xFFC2)->bit5
#define DP2_DP2_6                    ((T_Reg16 *) 0xFFC2)->bit6
#define DP2_DP2_7                    ((T_Reg16 *) 0xFFC2)->bit7
#define DP2_DP2_8                    ((T_Reg16 *) 0xFFC2)->bit8
#define DP2_DP2_9                    ((T_Reg16 *) 0xFFC2)->bit9

// Port 3 Direction Control Register
#define DP3                    (*((uword volatile *) 0xFFC6))
#define DP3_DP3_0                    ((T_Reg16 *) 0xFFC6)->bit0
#define DP3_DP3_1                    ((T_Reg16 *) 0xFFC6)->bit1
#define DP3_DP3_10                   ((T_Reg16 *) 0xFFC6)->bit10
#define DP3_DP3_11                   ((T_Reg16 *) 0xFFC6)->bit11
#define DP3_DP3_12                   ((T_Reg16 *) 0xFFC6)->bit12
#define DP3_DP3_13                   ((T_Reg16 *) 0xFFC6)->bit13
#define DP3_DP3_15                   ((T_Reg16 *) 0xFFC6)->bit15
#define DP3_DP3_2                    ((T_Reg16 *) 0xFFC6)->bit2
#define DP3_DP3_3                    ((T_Reg16 *) 0xFFC6)->bit3
#define DP3_DP3_4                    ((T_Reg16 *) 0xFFC6)->bit4
#define DP3_DP3_5                    ((T_Reg16 *) 0xFFC6)->bit5
#define DP3_DP3_6                    ((T_Reg16 *) 0xFFC6)->bit6
#define DP3_DP3_7                    ((T_Reg16 *) 0xFFC6)->bit7
#define DP3_DP3_8                    ((T_Reg16 *) 0xFFC6)->bit8
#define DP3_DP3_9                    ((T_Reg16 *) 0xFFC6)->bit9

// Port 4 Direction Control Register
#define DP4                    (*((uword volatile *) 0xFFCA))
#define DP4_DP4_0                    ((T_Reg16 *) 0xFFCA)->bit0
#define DP4_DP4_1                    ((T_Reg16 *) 0xFFCA)->bit1
#define DP4_DP4_2                    ((T_Reg16 *) 0xFFCA)->bit2
#define DP4_DP4_3                    ((T_Reg16 *) 0xFFCA)->bit3
#define DP4_DP4_4                    ((T_Reg16 *) 0xFFCA)->bit4
#define DP4_DP4_5                    ((T_Reg16 *) 0xFFCA)->bit5
#define DP4_DP4_6                    ((T_Reg16 *) 0xFFCA)->bit6
#define DP4_DP4_7                    ((T_Reg16 *) 0xFFCA)->bit7

// Port 6 Direction Control Register
#define DP6                    (*((uword volatile *) 0xFFCE))
#define DP6_DP6_0                    ((T_Reg16 *) 0xFFCE)->bit0
#define DP6_DP6_1                    ((T_Reg16 *) 0xFFCE)->bit1
#define DP6_DP6_2                    ((T_Reg16 *) 0xFFCE)->bit2
#define DP6_DP6_3                    ((T_Reg16 *) 0xFFCE)->bit3
#define DP6_DP6_4                    ((T_Reg16 *) 0xFFCE)->bit4
#define DP6_DP6_5                    ((T_Reg16 *) 0xFFCE)->bit5
#define DP6_DP6_6                    ((T_Reg16 *) 0xFFCE)->bit6
#define DP6_DP6_7                    ((T_Reg16 *) 0xFFCE)->bit7

// Port 7 Direction Control Register
#define DP7                    (*((uword volatile *) 0xFFD2))
#define DP7_DP7_0                    ((T_Reg16 *) 0xFFD2)->bit0
#define DP7_DP7_1                    ((T_Reg16 *) 0xFFD2)->bit1
#define DP7_DP7_2                    ((T_Reg16 *) 0xFFD2)->bit2
#define DP7_DP7_3                    ((T_Reg16 *) 0xFFD2)->bit3
#define DP7_DP7_4                    ((T_Reg16 *) 0xFFD2)->bit4
#define DP7_DP7_5                    ((T_Reg16 *) 0xFFD2)->bit5
#define DP7_DP7_6                    ((T_Reg16 *) 0xFFD2)->bit6
#define DP7_DP7_7                    ((T_Reg16 *) 0xFFD2)->bit7

// Port 8 Direction Control Register
#define DP8                    (*((uword volatile *) 0xFFD6))
#define DP8_DP8_0                    ((T_Reg16 *) 0xFFD6)->bit0
#define DP8_DP8_1                    ((T_Reg16 *) 0xFFD6)->bit1
#define DP8_DP8_2                    ((T_Reg16 *) 0xFFD6)->bit2
#define DP8_DP8_3                    ((T_Reg16 *) 0xFFD6)->bit3
#define DP8_DP8_4                    ((T_Reg16 *) 0xFFD6)->bit4
#define DP8_DP8_5                    ((T_Reg16 *) 0xFFD6)->bit5
#define DP8_DP8_6                    ((T_Reg16 *) 0xFFD6)->bit6
#define DP8_DP8_7                    ((T_Reg16 *) 0xFFD6)->bit7

// CPU Data Page Pointer 0 Register (10 bits)
#define DPP0                   (*((uword volatile *) 0xFE00))

// CPU Data Page Pointer 1 Register (10 bits)
#define DPP1                   (*((uword volatile *) 0xFE02))

// CPU Data Page Pointer 2 Register (10 bits)
#define DPP2                   (*((uword volatile *) 0xFE04))

// CPU Data Page Pointer 3 Register (10 bits)
#define DPP3                   (*((uword volatile *) 0xFE06))

// External Interrupt Control Register
#define EXICON                 (*((uword volatile *) 0xF1C0))

// External Interrupt Select Register
#define EXISEL                 (*((uword volatile *) 0xF1DA))

// Frequency Output Control Register
#define FOCON                  (*((uword volatile *) 0xFFAA))
#define FOCON_FOEN                     ((T_Reg16 *) 0xFFAA)->bit15
#define FOCON_FOSS                     ((T_Reg16 *) 0xFFAA)->bit14
#define FOCON_FOTL                     ((T_Reg16 *) 0xFFAA)->bit6

// Identifier
#define IDCHIP                 (*((uword volatile *) 0xF07C))

// Identifier
#define IDMANUF                (*((uword volatile *) 0xF07E))

// Identifier
#define IDMEM                  (*((uword volatile *) 0xF07A))

// Identifier
#define IDMEM2                 (*((uword volatile *) 0xF076))

// Identifier
#define IDPROG                 (*((uword volatile *) 0xF078))

// Interrupt Sub Node Control Register
#define ISNC                   (*((uword volatile *) 0xF1DE))
#define ISNC_PLLIE                    ((T_Reg16 *) 0xF1DE)->bit3
#define ISNC_PLLIR                    ((T_Reg16 *) 0xF1DE)->bit2
#define ISNC_RTCIE                    ((T_Reg16 *) 0xF1DE)->bit1
#define ISNC_RTCIR                    ((T_Reg16 *) 0xF1DE)->bit0

// CPU Multiply Divide Control Register
#define MDC                    (*((uword volatile *) 0xFF0E))
#define MDC_MDRIU                    ((T_Reg16 *) 0xFF0E)->bit4

// CPU Multiply Divide Register - High Word
#define MDH                    (*((uword volatile *) 0xFE0C))

// CPU Multiply Divide Register - Low Word
#define MDL                    (*((uword volatile *) 0xFE0E))

// Port 2 Open Drain Control Register
#define ODP2                   (*((uword volatile *) 0xF1C2))
#define ODP2_ODP2_0                   ((T_Reg16 *) 0xF1C2)->bit0
#define ODP2_ODP2_1                   ((T_Reg16 *) 0xF1C2)->bit1
#define ODP2_ODP2_10                  ((T_Reg16 *) 0xF1C2)->bit10
#define ODP2_ODP2_11                  ((T_Reg16 *) 0xF1C2)->bit11
#define ODP2_ODP2_12                  ((T_Reg16 *) 0xF1C2)->bit12
#define ODP2_ODP2_13                  ((T_Reg16 *) 0xF1C2)->bit13
#define ODP2_ODP2_14                  ((T_Reg16 *) 0xF1C2)->bit14
#define ODP2_ODP2_15                  ((T_Reg16 *) 0xF1C2)->bit15
#define ODP2_ODP2_2                   ((T_Reg16 *) 0xF1C2)->bit2
#define ODP2_ODP2_3                   ((T_Reg16 *) 0xF1C2)->bit3
#define ODP2_ODP2_4                   ((T_Reg16 *) 0xF1C2)->bit4
#define ODP2_ODP2_5                   ((T_Reg16 *) 0xF1C2)->bit5
#define ODP2_ODP2_6                   ((T_Reg16 *) 0xF1C2)->bit6
#define ODP2_ODP2_7                   ((T_Reg16 *) 0xF1C2)->bit7
#define ODP2_ODP2_8                   ((T_Reg16 *) 0xF1C2)->bit8
#define ODP2_ODP2_9                   ((T_Reg16 *) 0xF1C2)->bit9

// Port 3 Open Drain Control Register
#define ODP3                   (*((uword volatile *) 0xF1C6))
#define ODP3_ODP3_0                   ((T_Reg16 *) 0xF1C6)->bit0
#define ODP3_ODP3_1                   ((T_Reg16 *) 0xF1C6)->bit1
#define ODP3_ODP3_10                  ((T_Reg16 *) 0xF1C6)->bit10
#define ODP3_ODP3_11                  ((T_Reg16 *) 0xF1C6)->bit11
#define ODP3_ODP3_13                  ((T_Reg16 *) 0xF1C6)->bit13
#define ODP3_ODP3_2                   ((T_Reg16 *) 0xF1C6)->bit2
#define ODP3_ODP3_3                   ((T_Reg16 *) 0xF1C6)->bit3
#define ODP3_ODP3_4                   ((T_Reg16 *) 0xF1C6)->bit4
#define ODP3_ODP3_5                   ((T_Reg16 *) 0xF1C6)->bit5
#define ODP3_ODP3_6                   ((T_Reg16 *) 0xF1C6)->bit6
#define ODP3_ODP3_7                   ((T_Reg16 *) 0xF1C6)->bit7
#define ODP3_ODP3_8                   ((T_Reg16 *) 0xF1C6)->bit8
#define ODP3_ODP3_9                   ((T_Reg16 *) 0xF1C6)->bit9

// Port 4 Open Drain Control Register
#define ODP4                   (*((uword volatile *) 0xF1CA))
#define ODP4_ODP4_0                   ((T_Reg16 *) 0xF1CA)->bit0
#define ODP4_ODP4_1                   ((T_Reg16 *) 0xF1CA)->bit1
#define ODP4_ODP4_2                   ((T_Reg16 *) 0xF1CA)->bit2
#define ODP4_ODP4_3                   ((T_Reg16 *) 0xF1CA)->bit3
#define ODP4_ODP4_4                   ((T_Reg16 *) 0xF1CA)->bit4
#define ODP4_ODP4_5                   ((T_Reg16 *) 0xF1CA)->bit5
#define ODP4_ODP4_6                   ((T_Reg16 *) 0xF1CA)->bit6
#define ODP4_ODP4_7                   ((T_Reg16 *) 0xF1CA)->bit7

// Port 6 Open Drain Control Register
#define ODP6                   (*((uword volatile *) 0xF1CE))
#define ODP6_ODP6_0                   ((T_Reg16 *) 0xF1CE)->bit0
#define ODP6_ODP6_1                   ((T_Reg16 *) 0xF1CE)->bit1
#define ODP6_ODP6_2                   ((T_Reg16 *) 0xF1CE)->bit2
#define ODP6_ODP6_3                   ((T_Reg16 *) 0xF1CE)->bit3
#define ODP6_ODP6_4                   ((T_Reg16 *) 0xF1CE)->bit4
#define ODP6_ODP6_5                   ((T_Reg16 *) 0xF1CE)->bit5
#define ODP6_ODP6_6                   ((T_Reg16 *) 0xF1CE)->bit6
#define ODP6_ODP6_7                   ((T_Reg16 *) 0xF1CE)->bit7

// Port 7 Open Drain Control Register
#define ODP7                   (*((uword volatile *) 0xF1D2))
#define ODP7_ODP7_0                   ((T_Reg16 *) 0xF1D2)->bit0
#define ODP7_ODP7_1                   ((T_Reg16 *) 0xF1D2)->bit1
#define ODP7_ODP7_2                   ((T_Reg16 *) 0xF1D2)->bit2
#define ODP7_ODP7_3                   ((T_Reg16 *) 0xF1D2)->bit3
#define ODP7_ODP7_4                   ((T_Reg16 *) 0xF1D2)->bit4
#define ODP7_ODP7_5                   ((T_Reg16 *) 0xF1D2)->bit5
#define ODP7_ODP7_6                   ((T_Reg16 *) 0xF1D2)->bit6
#define ODP7_ODP7_7                   ((T_Reg16 *) 0xF1D2)->bit7

// Port 8 Open Drain Control Register
#define ODP8                   (*((uword volatile *) 0xF1D6))
#define ODP8_ODP8_0                   ((T_Reg16 *) 0xF1D6)->bit0
#define ODP8_ODP8_1                   ((T_Reg16 *) 0xF1D6)->bit1
#define ODP8_ODP8_2                   ((T_Reg16 *) 0xF1D6)->bit2
#define ODP8_ODP8_3                   ((T_Reg16 *) 0xF1D6)->bit3
#define ODP8_ODP8_4                   ((T_Reg16 *) 0xF1D6)->bit4
#define ODP8_ODP8_5                   ((T_Reg16 *) 0xF1D6)->bit5
#define ODP8_ODP8_6                   ((T_Reg16 *) 0xF1D6)->bit6
#define ODP8_ODP8_7                   ((T_Reg16 *) 0xF1D6)->bit7

// Constant Value 1's Register
#define ONES                   (*((uword volatile *) 0xFF1E))

// Port 0 High Register (Upper half)
#define P0H                    (*((uword volatile *) 0xFF02))
#define P0H_P0H_0                    ((T_Reg16 *) 0xFF02)->bit0
#define P0H_P0H_1                    ((T_Reg16 *) 0xFF02)->bit1
#define P0H_P0H_2                    ((T_Reg16 *) 0xFF02)->bit2
#define P0H_P0H_3                    ((T_Reg16 *) 0xFF02)->bit3
#define P0H_P0H_4                    ((T_Reg16 *) 0xFF02)->bit4
#define P0H_P0H_5                    ((T_Reg16 *) 0xFF02)->bit5
#define P0H_P0H_6                    ((T_Reg16 *) 0xFF02)->bit6
#define P0H_P0H_7                    ((T_Reg16 *) 0xFF02)->bit7

// Port 0 Low Register (Lower half)
#define P0L                    (*((uword volatile *) 0xFF00))
#define P0L_P0L_0                    ((T_Reg16 *) 0xFF00)->bit0
#define P0L_P0L_1                    ((T_Reg16 *) 0xFF00)->bit1
#define P0L_P0L_2                    ((T_Reg16 *) 0xFF00)->bit2
#define P0L_P0L_3                    ((T_Reg16 *) 0xFF00)->bit3
#define P0L_P0L_4                    ((T_Reg16 *) 0xFF00)->bit4
#define P0L_P0L_5                    ((T_Reg16 *) 0xFF00)->bit5
#define P0L_P0L_6                    ((T_Reg16 *) 0xFF00)->bit6
#define P0L_P0L_7                    ((T_Reg16 *) 0xFF00)->bit7

// Port 1 Digital Input Disable Register
#define P1DIDIS                (*((uword volatile *) 0xFEA4))

// Port 1 High Register (Upper half)
#define P1H                    (*((uword volatile *) 0xFF06))
#define P1H_P1H_0                    ((T_Reg16 *) 0xFF06)->bit0
#define P1H_P1H_1                    ((T_Reg16 *) 0xFF06)->bit1
#define P1H_P1H_2                    ((T_Reg16 *) 0xFF06)->bit2
#define P1H_P1H_3                    ((T_Reg16 *) 0xFF06)->bit3
#define P1H_P1H_4                    ((T_Reg16 *) 0xFF06)->bit4
#define P1H_P1H_5                    ((T_Reg16 *) 0xFF06)->bit5
#define P1H_P1H_6                    ((T_Reg16 *) 0xFF06)->bit6
#define P1H_P1H_7                    ((T_Reg16 *) 0xFF06)->bit7

// Port 1 Low Register (Lower half)
#define P1L                    (*((uword volatile *) 0xFF04))
#define P1L_P1L_0                    ((T_Reg16 *) 0xFF04)->bit0
#define P1L_P1L_1                    ((T_Reg16 *) 0xFF04)->bit1
#define P1L_P1L_2                    ((T_Reg16 *) 0xFF04)->bit2
#define P1L_P1L_3                    ((T_Reg16 *) 0xFF04)->bit3
#define P1L_P1L_4                    ((T_Reg16 *) 0xFF04)->bit4
#define P1L_P1L_5                    ((T_Reg16 *) 0xFF04)->bit5
#define P1L_P1L_6                    ((T_Reg16 *) 0xFF04)->bit6
#define P1L_P1L_7                    ((T_Reg16 *) 0xFF04)->bit7

// Port 2 Register (16 bits)
#define P2                     (*((uword volatile *) 0xFFC0))
#define P2_P2_0                     ((T_Reg16 *) 0xFFC0)->bit0
#define P2_P2_1                     ((T_Reg16 *) 0xFFC0)->bit1
#define P2_P2_10                    ((T_Reg16 *) 0xFFC0)->bit10
#define P2_P2_11                    ((T_Reg16 *) 0xFFC0)->bit11
#define P2_P2_12                    ((T_Reg16 *) 0xFFC0)->bit12
#define P2_P2_13                    ((T_Reg16 *) 0xFFC0)->bit13
#define P2_P2_14                    ((T_Reg16 *) 0xFFC0)->bit14
#define P2_P2_15                    ((T_Reg16 *) 0xFFC0)->bit15
#define P2_P2_2                     ((T_Reg16 *) 0xFFC0)->bit2
#define P2_P2_3                     ((T_Reg16 *) 0xFFC0)->bit3
#define P2_P2_4                     ((T_Reg16 *) 0xFFC0)->bit4
#define P2_P2_5                     ((T_Reg16 *) 0xFFC0)->bit5
#define P2_P2_6                     ((T_Reg16 *) 0xFFC0)->bit6
#define P2_P2_7                     ((T_Reg16 *) 0xFFC0)->bit7
#define P2_P2_8                     ((T_Reg16 *) 0xFFC0)->bit8
#define P2_P2_9                     ((T_Reg16 *) 0xFFC0)->bit9

// Port 3 Register
#define P3                     (*((uword volatile *) 0xFFC4))
#define P3_P3_0                     ((T_Reg16 *) 0xFFC4)->bit0
#define P3_P3_1                     ((T_Reg16 *) 0xFFC4)->bit1
#define P3_P3_10                    ((T_Reg16 *) 0xFFC4)->bit10
#define P3_P3_11                    ((T_Reg16 *) 0xFFC4)->bit11
#define P3_P3_12                    ((T_Reg16 *) 0xFFC4)->bit12
#define P3_P3_13                    ((T_Reg16 *) 0xFFC4)->bit13
#define P3_P3_15                    ((T_Reg16 *) 0xFFC4)->bit15
#define P3_P3_2                     ((T_Reg16 *) 0xFFC4)->bit2
#define P3_P3_3                     ((T_Reg16 *) 0xFFC4)->bit3
#define P3_P3_4                     ((T_Reg16 *) 0xFFC4)->bit4
#define P3_P3_5                     ((T_Reg16 *) 0xFFC4)->bit5
#define P3_P3_6                     ((T_Reg16 *) 0xFFC4)->bit6
#define P3_P3_7                     ((T_Reg16 *) 0xFFC4)->bit7
#define P3_P3_8                     ((T_Reg16 *) 0xFFC4)->bit8
#define P3_P3_9                     ((T_Reg16 *) 0xFFC4)->bit9

// Port 4 Register (8 bits)
#define P4                     (*((uword volatile *) 0xFFC8))
#define P4_P4_0                     ((T_Reg16 *) 0xFFC8)->bit0
#define P4_P4_1                     ((T_Reg16 *) 0xFFC8)->bit1
#define P4_P4_2                     ((T_Reg16 *) 0xFFC8)->bit2
#define P4_P4_3                     ((T_Reg16 *) 0xFFC8)->bit3
#define P4_P4_4                     ((T_Reg16 *) 0xFFC8)->bit4
#define P4_P4_5                     ((T_Reg16 *) 0xFFC8)->bit5
#define P4_P4_6                     ((T_Reg16 *) 0xFFC8)->bit6
#define P4_P4_7                     ((T_Reg16 *) 0xFFC8)->bit7

// Port 5 Register (16 bits)
#define P5                     (*((uword volatile *) 0xFFA2))
#define P5_P5_0                     ((T_Reg16 *) 0xFFA2)->bit0
#define P5_P5_1                     ((T_Reg16 *) 0xFFA2)->bit1
#define P5_P5_10                    ((T_Reg16 *) 0xFFA2)->bit10
#define P5_P5_11                    ((T_Reg16 *) 0xFFA2)->bit11
#define P5_P5_12                    ((T_Reg16 *) 0xFFA2)->bit12
#define P5_P5_13                    ((T_Reg16 *) 0xFFA2)->bit13
#define P5_P5_14                    ((T_Reg16 *) 0xFFA2)->bit14
#define P5_P5_15                    ((T_Reg16 *) 0xFFA2)->bit15
#define P5_P5_2                     ((T_Reg16 *) 0xFFA2)->bit2
#define P5_P5_3                     ((T_Reg16 *) 0xFFA2)->bit3
#define P5_P5_4                     ((T_Reg16 *) 0xFFA2)->bit4
#define P5_P5_5                     ((T_Reg16 *) 0xFFA2)->bit5
#define P5_P5_6                     ((T_Reg16 *) 0xFFA2)->bit6
#define P5_P5_7                     ((T_Reg16 *) 0xFFA2)->bit7
#define P5_P5_8                     ((T_Reg16 *) 0xFFA2)->bit8
#define P5_P5_9                     ((T_Reg16 *) 0xFFA2)->bit9

// Port 5 Digital Input Disable Register
#define P5DIDIS                (*((uword volatile *) 0xFFA4))
#define P5DIDIS_P5D_0                    ((T_Reg16 *) 0xFFA4)->bit0
#define P5DIDIS_P5D_1                    ((T_Reg16 *) 0xFFA4)->bit1
#define P5DIDIS_P5D_10                   ((T_Reg16 *) 0xFFA4)->bit10
#define P5DIDIS_P5D_11                   ((T_Reg16 *) 0xFFA4)->bit11
#define P5DIDIS_P5D_12                   ((T_Reg16 *) 0xFFA4)->bit12
#define P5DIDIS_P5D_13                   ((T_Reg16 *) 0xFFA4)->bit13
#define P5DIDIS_P5D_14                   ((T_Reg16 *) 0xFFA4)->bit14
#define P5DIDIS_P5D_15                   ((T_Reg16 *) 0xFFA4)->bit15
#define P5DIDIS_P5D_2                    ((T_Reg16 *) 0xFFA4)->bit2
#define P5DIDIS_P5D_3                    ((T_Reg16 *) 0xFFA4)->bit3
#define P5DIDIS_P5D_4                    ((T_Reg16 *) 0xFFA4)->bit4
#define P5DIDIS_P5D_5                    ((T_Reg16 *) 0xFFA4)->bit5
#define P5DIDIS_P5D_6                    ((T_Reg16 *) 0xFFA4)->bit6
#define P5DIDIS_P5D_7                    ((T_Reg16 *) 0xFFA4)->bit7
#define P5DIDIS_P5D_8                    ((T_Reg16 *) 0xFFA4)->bit8
#define P5DIDIS_P5D_9                    ((T_Reg16 *) 0xFFA4)->bit9

// Port 6 Register (8 bits)
#define P6                     (*((uword volatile *) 0xFFCC))
#define P6_P6_0                     ((T_Reg16 *) 0xFFCC)->bit0
#define P6_P6_1                     ((T_Reg16 *) 0xFFCC)->bit1
#define P6_P6_2                     ((T_Reg16 *) 0xFFCC)->bit2
#define P6_P6_3                     ((T_Reg16 *) 0xFFCC)->bit3
#define P6_P6_4                     ((T_Reg16 *) 0xFFCC)->bit4
#define P6_P6_5                     ((T_Reg16 *) 0xFFCC)->bit5
#define P6_P6_6                     ((T_Reg16 *) 0xFFCC)->bit6
#define P6_P6_7                     ((T_Reg16 *) 0xFFCC)->bit7

// Port 7 Register (8 bits)
#define P7                     (*((uword volatile *) 0xFFD0))
#define P7_P7_0                     ((T_Reg16 *) 0xFFD0)->bit0
#define P7_P7_1                     ((T_Reg16 *) 0xFFD0)->bit1
#define P7_P7_2                     ((T_Reg16 *) 0xFFD0)->bit2
#define P7_P7_3                     ((T_Reg16 *) 0xFFD0)->bit3
#define P7_P7_4                     ((T_Reg16 *) 0xFFD0)->bit4
#define P7_P7_5                     ((T_Reg16 *) 0xFFD0)->bit5
#define P7_P7_6                     ((T_Reg16 *) 0xFFD0)->bit6
#define P7_P7_7                     ((T_Reg16 *) 0xFFD0)->bit7

// Port 8 Register (8 bits)
#define P8                     (*((uword volatile *) 0xFFD4))
#define P8_P8_0                     ((T_Reg16 *) 0xFFD4)->bit0
#define P8_P8_1                     ((T_Reg16 *) 0xFFD4)->bit1
#define P8_P8_2                     ((T_Reg16 *) 0xFFD4)->bit2
#define P8_P8_3                     ((T_Reg16 *) 0xFFD4)->bit3
#define P8_P8_4                     ((T_Reg16 *) 0xFFD4)->bit4
#define P8_P8_5                     ((T_Reg16 *) 0xFFD4)->bit5
#define P8_P8_6                     ((T_Reg16 *) 0xFFD4)->bit6
#define P8_P8_7                     ((T_Reg16 *) 0xFFD4)->bit7

// PEC Channel 0 Control Register
#define PECC0                  (*((uword volatile *) 0xFEC0))

// PEC Channel 1 Control Register
#define PECC1                  (*((uword volatile *) 0xFEC2))

// PEC Channel 2 Control Register
#define PECC2                  (*((uword volatile *) 0xFEC4))

// PEC Channel 3 Control Register
#define PECC3                  (*((uword volatile *) 0xFEC6))

// PEC Channel 4 Control Register
#define PECC4                  (*((uword volatile *) 0xFEC8))

// PEC Channel 5 Control Register
#define PECC5                  (*((uword volatile *) 0xFECA))

// PEC Channel 6 Control Register
#define PECC6                  (*((uword volatile *) 0xFECC))

// PEC Channel 7 Control Register
#define PECC7                  (*((uword volatile *) 0xFECE))

// Port Input Threshold Control Register
#define PICON                  (*((uword volatile *) 0xF1C4))
#define PICON_P2HIN                    ((T_Reg16 *) 0xF1C4)->bit1
#define PICON_P2LIN                    ((T_Reg16 *) 0xF1C4)->bit0
#define PICON_P3HIN                    ((T_Reg16 *) 0xF1C4)->bit3
#define PICON_P3LIN                    ((T_Reg16 *) 0xF1C4)->bit2
#define PICON_P6LIN                    ((T_Reg16 *) 0xF1C4)->bit5
#define PICON_P7LIN                    ((T_Reg16 *) 0xF1C4)->bit6
#define PICON_P8LIN                    ((T_Reg16 *) 0xF1C4)->bit7

// Port P0H Output Control Register
#define POCON0H                (*((uword volatile *) 0xF082))

// Port P0L Output Control Register
#define POCON0L                (*((uword volatile *) 0xF080))

// Port P1H Output Control Register
#define POCON1H                (*((uword volatile *) 0xF086))

// Port P1L Output Control Register
#define POCON1L                (*((uword volatile *) 0xF084))

// Port P2 Output Control Register
#define POCON2                 (*((uword volatile *) 0xF088))

// Dedicated Pin Output Control Register
#define POCON20                (*((uword volatile *) 0xF0AA))

// Port P3 Output Control Register
#define POCON3                 (*((uword volatile *) 0xF08A))

// Port P4 Output Control Register
#define POCON4                 (*((uword volatile *) 0xF08C))

// Port P6 Output Control Register
#define POCON6                 (*((uword volatile *) 0xF08E))

// Port P7 Output Control Register
#define POCON7                 (*((uword volatile *) 0xF090))

// Port P8 Output Control Register
#define POCON8                 (*((uword volatile *) 0xF092))

// PWM Module Period Register 0
#define PP0                    (*((uword volatile *) 0xF038))

// PWM Module Period Register 1
#define PP1                    (*((uword volatile *) 0xF03A))

// PWM Module Period Register 2
#define PP2                    (*((uword volatile *) 0xF03C))

// PWM Module Period Register 3
#define PP3                    (*((uword volatile *) 0xF03E))

// CPU Program Status Word
#define PSW                    (*((uword volatile *) 0xFF10))
#define PSW_C                        ((T_Reg16 *) 0xFF10)->bit1
#define PSW_E                        ((T_Reg16 *) 0xFF10)->bit4
#define PSW_HLDEN                    ((T_Reg16 *) 0xFF10)->bit10
#define PSW_IEN                      ((T_Reg16 *) 0xFF10)->bit11
#define PSW_MULIP                    ((T_Reg16 *) 0xFF10)->bit5
#define PSW_N                        ((T_Reg16 *) 0xFF10)->bit0
#define PSW_USR0                     ((T_Reg16 *) 0xFF10)->bit6
#define PSW_V                        ((T_Reg16 *) 0xFF10)->bit2
#define PSW_Z                        ((T_Reg16 *) 0xFF10)->bit3

// PWM Module Up/Down Counter 0
#define PT0                    (*((uword volatile *) 0xF030))

// PWM Module Up/Down Counter 1
#define PT1                    (*((uword volatile *) 0xF032))

// PWM Module Up/Down Counter 2
#define PT2                    (*((uword volatile *) 0xF034))

// PWM Module Up/Down Counter 3
#define PT3                    (*((uword volatile *) 0xF036))

// Port Temperature Compensation Register
#define PTCR                   (*((uword volatile *) 0xF0AE))
#define PTCR_TCD                      ((T_Reg16 *) 0xF0AE)->bit3
#define PTCR_TCS                      ((T_Reg16 *) 0xF0AE)->bit7

// PWM Module Pulse Width Register 0
#define PW0                    (*((uword volatile *) 0xFE30))

// PWM Module Pulse Width Register 1
#define PW1                    (*((uword volatile *) 0xFE32))

// PWM Module Pulse Width Register 2
#define PW2                    (*((uword volatile *) 0xFE34))

// PWM Module Pulse Width Register 3
#define PW3                    (*((uword volatile *) 0xFE36))

// PWM Control Register 0
#define PWMCON0                (*((uword volatile *) 0xFF30))
#define PWMCON0_PIE0                     ((T_Reg16 *) 0xFF30)->bit8
#define PWMCON0_PIE1                     ((T_Reg16 *) 0xFF30)->bit9
#define PWMCON0_PIE2                     ((T_Reg16 *) 0xFF30)->bit10
#define PWMCON0_PIE3                     ((T_Reg16 *) 0xFF30)->bit11
#define PWMCON0_PIR0                     ((T_Reg16 *) 0xFF30)->bit12
#define PWMCON0_PIR1                     ((T_Reg16 *) 0xFF30)->bit13
#define PWMCON0_PIR2                     ((T_Reg16 *) 0xFF30)->bit14
#define PWMCON0_PIR3                     ((T_Reg16 *) 0xFF30)->bit15
#define PWMCON0_PTI0                     ((T_Reg16 *) 0xFF30)->bit4
#define PWMCON0_PTI1                     ((T_Reg16 *) 0xFF30)->bit5
#define PWMCON0_PTI2                     ((T_Reg16 *) 0xFF30)->bit6
#define PWMCON0_PTI3                     ((T_Reg16 *) 0xFF30)->bit7
#define PWMCON0_PTR0                     ((T_Reg16 *) 0xFF30)->bit0
#define PWMCON0_PTR1                     ((T_Reg16 *) 0xFF30)->bit1
#define PWMCON0_PTR2                     ((T_Reg16 *) 0xFF30)->bit2
#define PWMCON0_PTR3                     ((T_Reg16 *) 0xFF30)->bit3

// PWM Control Register 1
#define PWMCON1                (*((uword volatile *) 0xFF32))
#define PWMCON1_PB01                     ((T_Reg16 *) 0xFF32)->bit12
#define PWMCON1_PEN0                     ((T_Reg16 *) 0xFF32)->bit0
#define PWMCON1_PEN1                     ((T_Reg16 *) 0xFF32)->bit1
#define PWMCON1_PEN2                     ((T_Reg16 *) 0xFF32)->bit2
#define PWMCON1_PEN3                     ((T_Reg16 *) 0xFF32)->bit3
#define PWMCON1_PM0                      ((T_Reg16 *) 0xFF32)->bit4
#define PWMCON1_PM1                      ((T_Reg16 *) 0xFF32)->bit5
#define PWMCON1_PM2                      ((T_Reg16 *) 0xFF32)->bit6
#define PWMCON1_PM3                      ((T_Reg16 *) 0xFF32)->bit7
#define PWMCON1_PS2                      ((T_Reg16 *) 0xFF32)->bit14
#define PWMCON1_PS3                      ((T_Reg16 *) 0xFF32)->bit15

// PWM Interrupt Control Register
#define PWMIC                  (*((uword volatile *) 0xF17E))
#define PWMIC_PWMIE                    ((T_Reg16 *) 0xF17E)->bit6
#define PWMIC_PWMIR                    ((T_Reg16 *) 0xF17E)->bit7

// System Startup Configuration Register (RO)
#define RP0H                   (*((uword volatile *) 0xF108))
#define RP0H_WRC                      ((T_Reg16 *) 0xF108)->bit0

// RTC Timer Register High
#define RTCH                   (*((uword volatile *) 0xF0D6))

// RTC Timer Register Low
#define RTCL                   (*((uword volatile *) 0xF0D4))

// Serial Channel 0 Baud Rate Timer Reload Register
#define S0BG                   (*((uword volatile *) 0xFEB4))

// Serial Channel 0 Control Register
#define S0CON                  (*((uword volatile *) 0xFFB0))
#define S0CON_S0BRS                    ((T_Reg16 *) 0xFFB0)->bit13
#define S0CON_S0FE                     ((T_Reg16 *) 0xFFB0)->bit9
#define S0CON_S0FEN                    ((T_Reg16 *) 0xFFB0)->bit6
#define S0CON_S0LB                     ((T_Reg16 *) 0xFFB0)->bit14
#define S0CON_S0ODD                    ((T_Reg16 *) 0xFFB0)->bit12
#define S0CON_S0OE                     ((T_Reg16 *) 0xFFB0)->bit10
#define S0CON_S0OEN                    ((T_Reg16 *) 0xFFB0)->bit7
#define S0CON_S0PE                     ((T_Reg16 *) 0xFFB0)->bit8
#define S0CON_S0PEN                    ((T_Reg16 *) 0xFFB0)->bit5
#define S0CON_S0R                      ((T_Reg16 *) 0xFFB0)->bit15
#define S0CON_S0REN                    ((T_Reg16 *) 0xFFB0)->bit4
#define S0CON_S0STP                    ((T_Reg16 *) 0xFFB0)->bit3

// Serial Channel 0 Error Interrupt Control Register
#define S0EIC                  (*((uword volatile *) 0xFF70))
#define S0EIC_S0EIE                    ((T_Reg16 *) 0xFF70)->bit6
#define S0EIC_S0EIR                    ((T_Reg16 *) 0xFF70)->bit7

// Serial Channel 0 Receive Buffer Register
#define S0RBUF                 (*((uword volatile *) 0xFEB2))

// Serial Channel 0 Receive Interrupt Control Register
#define S0RIC                  (*((uword volatile *) 0xFF6E))
#define S0RIC_S0RIE                    ((T_Reg16 *) 0xFF6E)->bit6
#define S0RIC_S0RIR                    ((T_Reg16 *) 0xFF6E)->bit7

// Serial Channel 0 Transmit Buffer Interrupt Control Register
#define S0TBIC                 (*((uword volatile *) 0xF19C))
#define S0TBIC_S0TBIE                   ((T_Reg16 *) 0xF19C)->bit6
#define S0TBIC_S0TBIR                   ((T_Reg16 *) 0xF19C)->bit7

// Serial Channel 0 Transmit Buffer Register
#define S0TBUF                 (*((uword volatile *) 0xFEB0))

// Serial Channel 0 Transmit Interrupt Control Register
#define S0TIC                  (*((uword volatile *) 0xFF6C))
#define S0TIC_S0TIE                    ((T_Reg16 *) 0xFF6C)->bit6
#define S0TIC_S0TIR                    ((T_Reg16 *) 0xFF6C)->bit7

// CPU System Stack Pointer Register
#define SP                     (*((uword volatile *) 0xFE12))

// SSC Baudrate Register
#define SSCBR                  (*((uword volatile *) 0xF0B4))

// SSC Control Register
#define SSCCON                 (*((uword volatile *) 0xFFB2))
#define SSCCON_SSCAREN_BSY              ((T_Reg16 *) 0xFFB2)->bit12
#define SSCCON_SSCBEN_BE                ((T_Reg16 *) 0xFFB2)->bit11
#define SSCCON_SSCEN                    ((T_Reg16 *) 0xFFB2)->bit15
#define SSCCON_SSCHB                    ((T_Reg16 *) 0xFFB2)->bit4
#define SSCCON_SSCMS                    ((T_Reg16 *) 0xFFB2)->bit14
#define SSCCON_SSCPEN_PE                ((T_Reg16 *) 0xFFB2)->bit10
#define SSCCON_SSCPH                    ((T_Reg16 *) 0xFFB2)->bit5
#define SSCCON_SSCPO                    ((T_Reg16 *) 0xFFB2)->bit6
#define SSCCON_SSCREN_RE                ((T_Reg16 *) 0xFFB2)->bit9
#define SSCCON_SSCTEN_TE                ((T_Reg16 *) 0xFFB2)->bit8

// SSC Error Interrupt Control Register
#define SSCEIC                 (*((uword volatile *) 0xFF76))
#define SSCEIC_SSCEIE                   ((T_Reg16 *) 0xFF76)->bit6
#define SSCEIC_SSCEIR                   ((T_Reg16 *) 0xFF76)->bit7

// SSC Receive Buffer
#define SSCRB                  (*((uword volatile *) 0xF0B2))

// SSC Receive Interrupt Control Register
#define SSCRIC                 (*((uword volatile *) 0xFF74))
#define SSCRIC_SSCRIE                   ((T_Reg16 *) 0xFF74)->bit6
#define SSCRIC_SSCRIR                   ((T_Reg16 *) 0xFF74)->bit7

// SSC Transmit Buffer
#define SSCTB                  (*((uword volatile *) 0xF0B0))

// SSC Transmit Interrupt Control Register
#define SSCTIC                 (*((uword volatile *) 0xFF72))
#define SSCTIC_SSCTIE                   ((T_Reg16 *) 0xFF72)->bit6
#define SSCTIC_SSCTIR                   ((T_Reg16 *) 0xFF72)->bit7

// CPU Stack Overflow Pointer Register
#define STKOV                  (*((uword volatile *) 0xFE14))

// CPU Stack Underflow Pointer Register
#define STKUN                  (*((uword volatile *) 0xFE16))

// CPU System Configuration Register
#define SYSCON                 (*((uword volatile *) 0xFF12))
#define SYSCON_BDRSTEN                  ((T_Reg16 *) 0xFF12)->bit3
#define SYSCON_BYTDIS                   ((T_Reg16 *) 0xFF12)->bit9
#define SYSCON_CLKEN                    ((T_Reg16 *) 0xFF12)->bit8
#define SYSCON_CSCFG                    ((T_Reg16 *) 0xFF12)->bit6
#define SYSCON_OWDDIS                   ((T_Reg16 *) 0xFF12)->bit4
#define SYSCON_ROMEN                    ((T_Reg16 *) 0xFF12)->bit10
#define SYSCON_ROMS1                    ((T_Reg16 *) 0xFF12)->bit12
#define SYSCON_SGTDIS                   ((T_Reg16 *) 0xFF12)->bit11
#define SYSCON_VISIBLE                  ((T_Reg16 *) 0xFF12)->bit1
#define SYSCON_WRCFG                    ((T_Reg16 *) 0xFF12)->bit7
#define SYSCON_XPEN                     ((T_Reg16 *) 0xFF12)->bit2
#define SYSCON_XPER_SHARE               ((T_Reg16 *) 0xFF12)->bit0

// CPU System Configuration Register 1
#define SYSCON1                (*((uword volatile *) 0xF1DC))

// CPU System Configuration Register 2
#define SYSCON2                (*((uword volatile *) 0xF1D0))
#define SYSCON2_2                        ((T_Reg16 *) 0xF1D0)->bit2
#define SYSCON2_CLKLOCK                  ((T_Reg16 *) 0xF1D0)->bit15
#define SYSCON2_RCS                      ((T_Reg16 *) 0xF1D0)->bit6
#define SYSCON2_SCS                      ((T_Reg16 *) 0xF1D0)->bit7

// CPU System Configuration Register 3
#define SYSCON3                (*((uword volatile *) 0xF1D4))
#define SYSCON3_ADCDIS                   ((T_Reg16 *) 0xF1D4)->bit0
#define SYSCON3_ASC0DIS                  ((T_Reg16 *) 0xF1D4)->bit1
#define SYSCON3_CAN1DIS                  ((T_Reg16 *) 0xF1D4)->bit13
#define SYSCON3_CAN2DIS                  ((T_Reg16 *) 0xF1D4)->bit14
#define SYSCON3_CC1DIS                   ((T_Reg16 *) 0xF1D4)->bit6
#define SYSCON3_CC2DIS                   ((T_Reg16 *) 0xF1D4)->bit7
#define SYSCON3_DFMDIS                   ((T_Reg16 *) 0xF1D4)->bit4
#define SYSCON3_GPTDIS                   ((T_Reg16 *) 0xF1D4)->bit3
#define SYSCON3_PCDDIS                   ((T_Reg16 *) 0xF1D4)->bit15
#define SYSCON3_PFMDIS                   ((T_Reg16 *) 0xF1D4)->bit5
#define SYSCON3_PWMDIS                   ((T_Reg16 *) 0xF1D4)->bit9
#define SYSCON3_SSCDIS                   ((T_Reg16 *) 0xF1D4)->bit2

// CAPCOM Timer 0 Register
#define T0                     (*((uword volatile *) 0xFE50))

// CAPCOM Timer 0 and Timer 1 Control Register
#define T01CON                 (*((uword volatile *) 0xFF50))
#define T01CON_T0M                      ((T_Reg16 *) 0xFF50)->bit3
#define T01CON_T0R                      ((T_Reg16 *) 0xFF50)->bit6
#define T01CON_T1M                      ((T_Reg16 *) 0xFF50)->bit11
#define T01CON_T1R                      ((T_Reg16 *) 0xFF50)->bit14

// CAPCOM Timer 0 Interrupt Control Register
#define T0IC                   (*((uword volatile *) 0xFF9C))
#define T0IC_T0IE                     ((T_Reg16 *) 0xFF9C)->bit6
#define T0IC_T0IR                     ((T_Reg16 *) 0xFF9C)->bit7

// CAPCOM Timer 0 Reload Register
#define T0REL                  (*((uword volatile *) 0xFE54))

// CAPCOM Timer 1 Register
#define T1                     (*((uword volatile *) 0xFE52))

// RTC Timer 14 Register
#define T14                    (*((uword volatile *) 0xF0D2))

// RTC Timer 14 Reload Register
#define T14REL                 (*((uword volatile *) 0xF0D0))

// CAPCOM Timer 1 Interrupt Control Register
#define T1IC                   (*((uword volatile *) 0xFF9E))
#define T1IC_T1IE                     ((T_Reg16 *) 0xFF9E)->bit6
#define T1IC_T1IR                     ((T_Reg16 *) 0xFF9E)->bit7

// CAPCOM Timer 1 Reload Register
#define T1REL                  (*((uword volatile *) 0xFE56))

// GPT1 Timer 2 Register
#define T2                     (*((uword volatile *) 0xFE40))

// GPT1 Timer 2 Control Register
#define T2CON                  (*((uword volatile *) 0xFF40))
#define T2CON_T2R                      ((T_Reg16 *) 0xFF40)->bit6
#define T2CON_T2UD                     ((T_Reg16 *) 0xFF40)->bit7
#define T2CON_T2UDE                    ((T_Reg16 *) 0xFF40)->bit8

// GPT1 Timer 2 Interrupt Control Register
#define T2IC                   (*((uword volatile *) 0xFF60))
#define T2IC_T2IE                     ((T_Reg16 *) 0xFF60)->bit6
#define T2IC_T2IR                     ((T_Reg16 *) 0xFF60)->bit7

// GPT1 Timer 3 Register
#define T3                     (*((uword volatile *) 0xFE42))

// GPT1 Timer 3 Control Register
#define T3CON                  (*((uword volatile *) 0xFF42))
#define T3CON_T3OE                     ((T_Reg16 *) 0xFF42)->bit9
#define T3CON_T3OTL                    ((T_Reg16 *) 0xFF42)->bit10
#define T3CON_T3R                      ((T_Reg16 *) 0xFF42)->bit6
#define T3CON_T3UD                     ((T_Reg16 *) 0xFF42)->bit7
#define T3CON_T3UDE                    ((T_Reg16 *) 0xFF42)->bit8

// GPT1 Timer 3 Interrupt Control Register
#define T3IC                   (*((uword volatile *) 0xFF62))
#define T3IC_T3IE                     ((T_Reg16 *) 0xFF62)->bit6
#define T3IC_T3IR                     ((T_Reg16 *) 0xFF62)->bit7

// GPT1 Timer 4 Register
#define T4                     (*((uword volatile *) 0xFE44))

// GPT1 Timer 4 Control Register
#define T4CON                  (*((uword volatile *) 0xFF44))
#define T4CON_T4R                      ((T_Reg16 *) 0xFF44)->bit6
#define T4CON_T4UD                     ((T_Reg16 *) 0xFF44)->bit7
#define T4CON_T4UDE                    ((T_Reg16 *) 0xFF44)->bit8

// GPT1 Timer 4 Interrupt Control Register
#define T4IC                   (*((uword volatile *) 0xFF64))
#define T4IC_T4IE                     ((T_Reg16 *) 0xFF64)->bit6
#define T4IC_T4IR                     ((T_Reg16 *) 0xFF64)->bit7

// GPT2 Timer 5 Register
#define T5                     (*((uword volatile *) 0xFE46))

// GPT2 Timer 5 Control Register
#define T5CON                  (*((uword volatile *) 0xFF46))
#define T5CON_CT3                      ((T_Reg16 *) 0xFF46)->bit10
#define T5CON_T5CLR                    ((T_Reg16 *) 0xFF46)->bit14
#define T5CON_T5R                      ((T_Reg16 *) 0xFF46)->bit6
#define T5CON_T5SC                     ((T_Reg16 *) 0xFF46)->bit15
#define T5CON_T5UD                     ((T_Reg16 *) 0xFF46)->bit7
#define T5CON_T5UDE                    ((T_Reg16 *) 0xFF46)->bit8

// GPT2 Timer 5 Interrupt Control Register
#define T5IC                   (*((uword volatile *) 0xFF66))
#define T5IC_T5IE                     ((T_Reg16 *) 0xFF66)->bit6
#define T5IC_T5IR                     ((T_Reg16 *) 0xFF66)->bit7

// GPT2 Timer 6 Register
#define T6                     (*((uword volatile *) 0xFE48))

// GPT2 Timer 6 Control Register
#define T6CON                  (*((uword volatile *) 0xFF48))
#define T6CON_T6OE                     ((T_Reg16 *) 0xFF48)->bit9
#define T6CON_T6OTL                    ((T_Reg16 *) 0xFF48)->bit10
#define T6CON_T6R                      ((T_Reg16 *) 0xFF48)->bit6
#define T6CON_T6SR                     ((T_Reg16 *) 0xFF48)->bit15
#define T6CON_T6UD                     ((T_Reg16 *) 0xFF48)->bit7
#define T6CON_T6UDE                    ((T_Reg16 *) 0xFF48)->bit8

// GPT2 Timer 6 Interrupt Control Register
#define T6IC                   (*((uword volatile *) 0xFF68))
#define T6IC_T6IE                     ((T_Reg16 *) 0xFF68)->bit6
#define T6IC_T6IR                     ((T_Reg16 *) 0xFF68)->bit7

// CAPCOM Timer 7 Register
#define T7                     (*((uword volatile *) 0xF050))

// CAPCOM Timer 7 and Timer 8 Control Register
#define T78CON                 (*((uword volatile *) 0xFF20))
#define T78CON_T7M                      ((T_Reg16 *) 0xFF20)->bit3
#define T78CON_T7R                      ((T_Reg16 *) 0xFF20)->bit6
#define T78CON_T8M                      ((T_Reg16 *) 0xFF20)->bit11
#define T78CON_T8R                      ((T_Reg16 *) 0xFF20)->bit14

// CAPCOM Timer 7 Interrupt Control Register
#define T7IC                   (*((uword volatile *) 0xF17A))
#define T7IC_T7IE                     ((T_Reg16 *) 0xF17A)->bit6
#define T7IC_T7IR                     ((T_Reg16 *) 0xF17A)->bit7

// CAPCOM Timer 7 Reload Register
#define T7REL                  (*((uword volatile *) 0xF054))

// CAPCOM Timer 8 Register
#define T8                     (*((uword volatile *) 0xF052))

// CAPCOM Timer 8 Interrupt Control Register
#define T8IC                   (*((uword volatile *) 0xF17C))
#define T8IC_T8IE                     ((T_Reg16 *) 0xF17C)->bit6
#define T8IC_T8IR                     ((T_Reg16 *) 0xF17C)->bit7

// CAPCOM Timer 8 Reload Register
#define T8REL                  (*((uword volatile *) 0xF056))

// Trap Flag Register
#define TFR                    (*((uword volatile *) 0xFFAC))
#define TFR_ILLBUS                   ((T_Reg16 *) 0xFFAC)->bit0
#define TFR_ILLINA                   ((T_Reg16 *) 0xFFAC)->bit1
#define TFR_ILLOPA                   ((T_Reg16 *) 0xFFAC)->bit2
#define TFR_NMI                      ((T_Reg16 *) 0xFFAC)->bit15
#define TFR_PRTFLT                   ((T_Reg16 *) 0xFFAC)->bit3
#define TFR_STKOF                    ((T_Reg16 *) 0xFFAC)->bit14
#define TFR_STKUF                    ((T_Reg16 *) 0xFFAC)->bit13
#define TFR_UNDOPC                   ((T_Reg16 *) 0xFFAC)->bit7

// Watchdog Timer Register (RO)
#define WDT                    (*((uword volatile *) 0xFEAE))

// Watchdog Timer Control Register
#define WDTCON                 (*((uword volatile *) 0xFFAE))
#define WDTCON_LHWR                     ((T_Reg16 *) 0xFFAE)->bit4
#define WDTCON_SHWR                     ((T_Reg16 *) 0xFFAE)->bit3
#define WDTCON_SWR                      ((T_Reg16 *) 0xFFAE)->bit2
#define WDTCON_WDTIN                    ((T_Reg16 *) 0xFFAE)->bit0
#define WDTCON_WDTPRE                   ((T_Reg16 *) 0xFFAE)->bit7
#define WDTCON_WDTR                     ((T_Reg16 *) 0xFFAE)->bit1

// XBUS Address Select Register (DataFlash)
#define XADRS5                 (*((uword volatile *) 0xF01C))

// CAN1 Module Interrupt Control Register
#define XP0IC                  (*((uword volatile *) 0xF186))
#define XP0IC_XP0IE                    ((T_Reg16 *) 0xF186)->bit6
#define XP0IC_XP0IR                    ((T_Reg16 *) 0xF186)->bit7

// CAN2 Module Interrupt Control Register
#define XP1IC                  (*((uword volatile *) 0xF18E))
#define XP1IC_XP1IE                    ((T_Reg16 *) 0xF18E)->bit6
#define XP1IC_XP1IR                    ((T_Reg16 *) 0xF18E)->bit7

// Flash Termination Interrupt Control Register
#define XP2IC                  (*((uword volatile *) 0xF196))
#define XP2IC_XP2IE                    ((T_Reg16 *) 0xF196)->bit6
#define XP2IC_XP2IR                    ((T_Reg16 *) 0xF196)->bit7

// RTC/PLL Interrupt Control Register
#define XP3IC                  (*((uword volatile *) 0xF19E))
#define XP3IC_XP3IE                    ((T_Reg16 *) 0xF19E)->bit6
#define XP3IC_XP3IR                    ((T_Reg16 *) 0xF19E)->bit7

// X-Peripheral Control Register
#define XPERCON                (*((uword volatile *) 0xF024))
#define XPERCON_XPER0                    ((T_Reg16 *) 0xF024)->bit0
#define XPERCON_XPER1                    ((T_Reg16 *) 0xF024)->bit1
#define XPERCON_XPER10                   ((T_Reg16 *) 0xF024)->bit10
#define XPERCON_XPER11                   ((T_Reg16 *) 0xF024)->bit11
#define XPERCON_XPER12                   ((T_Reg16 *) 0xF024)->bit12
#define XPERCON_XPER13                   ((T_Reg16 *) 0xF024)->bit13
#define XPERCON_XPER14                   ((T_Reg16 *) 0xF024)->bit14
#define XPERCON_XPER15                   ((T_Reg16 *) 0xF024)->bit15
#define XPERCON_XPER2                    ((T_Reg16 *) 0xF024)->bit2
#define XPERCON_XPER3                    ((T_Reg16 *) 0xF024)->bit3
#define XPERCON_XPER4                    ((T_Reg16 *) 0xF024)->bit4
#define XPERCON_XPER5                    ((T_Reg16 *) 0xF024)->bit5
#define XPERCON_XPER6                    ((T_Reg16 *) 0xF024)->bit6
#define XPERCON_XPER7                    ((T_Reg16 *) 0xF024)->bit7
#define XPERCON_XPER8                    ((T_Reg16 *) 0xF024)->bit8
#define XPERCON_XPER9                    ((T_Reg16 *) 0xF024)->bit9

// Constant Value 0's Register
#define ZEROS                  (*((uword volatile *) 0xFF1C))


//****************************************************************************
// @Typedefs
//****************************************************************************

typedef unsigned char  ubyte;    // 1 byte unsigned; prefix: ub 
typedef signed char    sbyte;    // 1 byte signed;   prefix: sb 
typedef unsigned int   uword;    // 2 byte unsigned; prefix: uw 
typedef signed int     sword;    // 2 byte signed;   prefix: sw 
typedef unsigned long  ulong;    // 4 byte unsigned; prefix: ul 
typedef signed long    slong;    // 4 byte signed;   prefix: sl 

typedef volatile struct
{
  unsigned int    bit0      : 1;
  unsigned int    bit1      : 1;
  unsigned int    bit2      : 1;
  unsigned int    bit3      : 1;
  unsigned int    bit4      : 1;
  unsigned int    bit5      : 1;
  unsigned int    bit6      : 1;
  unsigned int    bit7      : 1;
  unsigned int    bit8      : 1;
  unsigned int    bit9      : 1;
  unsigned int    bit10     : 1;
  unsigned int    bit11     : 1;
  unsigned int    bit12     : 1;
  unsigned int    bit13     : 1;
  unsigned int    bit14     : 1;
  unsigned int    bit15     : 1;
}  T_Reg16;

// USER CODE BEGIN (MAIN_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************



// USER CODE BEGIN (MAIN_Header,8)

// USER CODE END


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

// USER CODE BEGIN (MAIN_Header,9)

// USER CODE END


//****************************************************************************
// @Project Includes
//****************************************************************************

#include <Intrins.h>

#include  "IO.H"
#include  "ASC0.H"
#include  "GPT1.H"

// USER CODE BEGIN (MAIN_Header,10)

// USER CODE END


#endif  // ifndef _MAIN_H_
