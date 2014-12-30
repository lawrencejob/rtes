//****************************************************************************
// @Module        Asynchronous/Synchronous Serial Interface (ASC0)
// @Filename      ASC0.C
// @Project       project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains functions that use the ASC0 module.
//
//----------------------------------------------------------------------------
// @Date          30/12/2014 13:29:10
//
//****************************************************************************

// USER CODE BEGIN (ASC0_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (ASC0_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (ASC0_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (ASC0_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (ASC0_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (ASC0_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (ASC0_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (ASC0_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (ASC0_General,9)

// USER CODE END


//****************************************************************************
// @Function      void ASC0_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the ASC0 function 
//                library. It is assumed that the SFRs used by this library 
//                are in its reset state. 
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

// USER CODE BEGIN (Init,1)

// USER CODE END

void ASC0_vInit(void)
{
  // USER CODE BEGIN (Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the ASC0 Baud Rate Generator:
  ///  -----------------------------------------------------------------------
  ///  - the ASC0 module clock is 20 MHz
  ///  - required baud rate = 57.600 kbaud
  ///  - real baud rate     = 56.818 kbaud
  ///  - deviation          = -1.357 %

  S0BG           =  0x000A;      // load ASC0 baud rate time reload register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the ASC0 Operation Mode:
  ///  -----------------------------------------------------------------------
  ///  - 8-bit data asychronous operation width one stop bit
  ///  - receiver is enabled

  S0CON          =  0x0011;      // load ASC0 control register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used ASC0 Port Pins:
  ///  -----------------------------------------------------------------------
  ///  - P3.10 is used for ASC Transmit Data Output (TxD0)
  ///  - P3.11 is used for ASC Receive data Input (RxD0)

  P3   = (P3   & ~(uword)0x0400) | 0x0400;    //set data register
  DP3  = (DP3  & ~(uword)0x0400) | 0x0400;    //set direction register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used ASC0 Interrupts:
  ///  -----------------------------------------------------------------------

  //   -----------------------------------------------------------------------
  //   Default Settings for Service Request Flags:
  //   -----------------------------------------------------------------------
  S0TBIC_S0TBIR  =  1;           // indicates that the transmit buffer is 
                                 // empty
  S0TIC_S0TIR    =  1;           // indicates that the transmit register is 
                                 // empty

  // USER CODE BEGIN (ASC0_Function,3)

  // USER CODE END

  S0CON         |=  0x8000;      // enable baud rate generator


} //  End of function ASC0_vInit


//****************************************************************************
// @Function      void ASC0_vSendData(uword uwData) 
//
//----------------------------------------------------------------------------
// @Description   This function writes a send data initialization word into 
//                the S0TBUF register.
//                
//                Note: 
//                In a multiprocessor system the master with this function 
//                has the possibility to send data to the selected slave. To 
//                achieve this, the 9th bit must set on zero.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    uwData: 
//                Data to be send
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (SendData,1)

// USER CODE END

void ASC0_vSendData(uword uwData)
{
  S0TBIC_S0TBIR = 0;         //  reset transmit buffer interrupt request flag
  S0TBUF  = uwData;   //  load transmit buffer register

} //  End of function ASC0_vSendData


//****************************************************************************
// @Function      uword ASC0_uwGetData(void) 
//
//----------------------------------------------------------------------------
// @Description   This function reads out the content of the S0RBUF register 
//                which contains a received data byte.
//
//----------------------------------------------------------------------------
// @Returnvalue   data that has been received
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (GetData,1)

// USER CODE END

uword ASC0_uwGetData(void)
{
  S0RIC_S0RIR = 0;          // reset receive interrupt request flag
  return(S0RBUF);     // return receive buffer register

} //  End of function ASC0_uwGetData


//****************************************************************************
// @Function      ubyte ASC0_ubTxDataReady(void) 
//
//----------------------------------------------------------------------------
// @Description   This function can be used for checking up the status of the 
//                ASC0 transmitter interrupt flags (S0TIR). This shows when 
//                the sending of a byte has terminated. By continuously 
//                polling the S0TIR bit after the function ASC0_vSendData has 
//                been called, it is possible to establish when the ASC0 has 
//                terminated its task.
//
//----------------------------------------------------------------------------
// @Returnvalue   0 if transmitter is busy, else 1
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (TxDataReady,1)

// USER CODE END

ubyte ASC0_ubTxDataReady(void)
{
  ubyte ubReturnValue;

  ubReturnValue = 0;

  if(S0TIC_S0TIR)         // if sending of data is terminated
  {
    ubReturnValue = 1;
    S0TIC_S0TIR = 0;
  }
  return(ubReturnValue);         // return receive buffer register

} //  End of function ASC0_ubTxDataReady


//****************************************************************************
// @Function      void ASC0_vReceiverOn(void) 
//
//----------------------------------------------------------------------------
// @Description   This function releases the receive function of the ASC0. 
//                After initialization this function does not need to be 
//                recalled. 
//                Note: 
//                The following function must be called everytime data is to 
//                be received in synchronous mode.
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

// USER CODE BEGIN (ReceiverOn,1)

// USER CODE END

void ASC0_vReceiverOn(void)
{
  S0CON_S0REN = 1;               // enable the receiver

} //  End of function ASC0_vReceiverOn




// USER CODE BEGIN (ASC0_General,10)

// USER CODE END

