//****************************************************************************
// @Module        Asynchronous/Synchronous Serial Interface (ASC0)
// @Filename      ASC0.H
// @Project       FullLab.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains all function prototypes and macros for 
//                the ASC0 module.
//
//----------------------------------------------------------------------------
// @Date          05/12/2014 16:17:25
//
//****************************************************************************

// USER CODE BEGIN (ASC0_Header,1)

// USER CODE END



#ifndef _ASC0_H_
#define _ASC0_H_

//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (ASC0_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (ASC0_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (ASC0_Header,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (ASC0_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (ASC0_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (ASC0_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void ASC0_vInit(void);
void ASC0_vSendData(uword uwData);
uword ASC0_uwGetData(void);
void ASC0_vReceiverOn(void);


// USER CODE BEGIN (ASC0_Header,8)

// USER CODE END


//****************************************************************************
// @Macro         ASC0_vReceiverOff() 
//
//----------------------------------------------------------------------------
// @Description   This macro disables the receive function of the ASC0 
//                channel. A data that is currently being received is 
//                received to completion, including generation of the receive 
//                interrupt request.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          05/12/2014
//
//****************************************************************************

#define ASC0_vReceiverOff() S0CON_S0REN = 0
extern char ASC0_vReadyToTransmit(void);


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

#define S0TINT    0x2A
#define S0RINT    0x2B
#define S0TBINT    0x47

// USER CODE BEGIN (ASC0_Header,9)

// USER CODE END


#endif  // ifndef _ASC0_H_
