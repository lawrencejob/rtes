//****************************************************************************
// @Module        Asynchronous/Synchronous Serial Interface (ASC0)
// @Filename      ASC0.H
// @Project       project.dav
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
// @Date          30/12/2014 13:29:10
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
ubyte ASC0_ubTxDataReady(void);
void ASC0_vReceiverOn(void);


// USER CODE BEGIN (ASC0_Header,8)

// USER CODE END


//****************************************************************************
// @Macro         ASC0_ubTxBufFree() 
//
//----------------------------------------------------------------------------
// @Description   This macro can be used for checking the status of the 
//                transmit buffer register (S0TBUF). The TX-Buffer may only 
//                be written to if it is empty, this implies that the 
//                previous content of the TX buffer have been loaded into the 
//                TX-shift register.
//
//----------------------------------------------------------------------------
// @Returnvalue   0 if buffer is not empty, else 1
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

#define ASC0_ubTxBufFree() S0TBIC_S0TBIR


//****************************************************************************
// @Macro         ASC0_ubRxDataReady() 
//
//----------------------------------------------------------------------------
// @Description   This macro can be used for calling the status of the ASC0 
//                receiver interrupt flag (S0RIR). This is to recognize that 
//                the ASC0 received a byte. If a byte has been received, the 
//                function ASC0_uwGetData must be called.
//
//----------------------------------------------------------------------------
// @Returnvalue   0 receive data is invalid, else 1
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

#define ASC0_ubRxDataReady() S0RIC_S0RIR


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
// @Date          30/12/2014
//
//****************************************************************************

#define ASC0_vReceiverOff() S0CON_S0REN = 0


//****************************************************************************
// @Interrupt Vectors
//****************************************************************************


// USER CODE BEGIN (ASC0_Header,9)

// USER CODE END


#endif  // ifndef _ASC0_H_
