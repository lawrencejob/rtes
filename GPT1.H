//****************************************************************************
// @Module        General Purpose Timer Unit (GPT1)
// @Filename      GPT1.H
// @Project       FullLab.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains all function prototypes and macros for 
//                the GPT1 module.
//
//----------------------------------------------------------------------------
// @Date          05/12/2014 16:17:25
//
//****************************************************************************

// USER CODE BEGIN (GPT1_Header,1)

// USER CODE END



#ifndef _GPT1_H_
#define _GPT1_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (GPT1_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (GPT1_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

//   This parameter identifies GPT1 timer 2
#define GPT1_TIMER_2 T2

//   This parameter identifies GPT1 timer 3
#define GPT1_TIMER_3 T3

//   This parameter identifies GPT1 timer 4
#define GPT1_TIMER_4 T4

// USER CODE BEGIN (GPT1_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (GPT1_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (GPT1_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (GPT1_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************


void GPT1_vInit(void);

#define GPT1_vLoadTmr(TimerNr, Value) TimerNr = Value

extern unsigned char GPT1_getBrightness(void);
extern void GPT1_setBrightness(unsigned char brightness_in);
extern void GPT1_setAnimation(unsigned char anim);

#define T2INT 0x22

#endif  // ifndef _GPT1_H_
