#include "MAIN.H"


char ready_to_transmit = 0, input_ready = -1;

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
  ///  - loopback mode is enabled
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
  ///  - transmit service request node configuration:
  ///  - transmit interrupt priority level (ILVL) = 7
  ///  - transmit interrupt group level (GLVL) = 1

  S0TIC          =  0x005D;     

  ///  - transmit buffer service request node configuration:
  ///  - transmit buffer interrupt priority level (ILVL) = 8
  ///  - transmit buffer interrupt group level (GLVL) = 1

  S0TBIC         =  0x0061;     

  ///  - receive service request node configuration:
  ///  - receive interrupt priority level (ILVL) = 9
  ///  - receive interrupt group level (GLVL) = 1

  S0RIC          =  0x0065;     


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
// @Date          05/12/2014
//
//****************************************************************************

// USER CODE BEGIN (SendData,1)

// USER CODE END

void ASC0_vSendData(uword uwData)
{
	ready_to_transmit = -01;
	S0TBUF  = uwData;   //  load transmit buffer register

} //  End of function ASC0_vSendData


uword ASC0_uwGetData(void)
{
  input_ready = -1;
  return(S0RBUF);     // return receive buffer register

} //  End of function ASC0_uwGetData


//****************************************************************************
// @Function      void ASC0_viTx(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the transmit interrupt service routine for the 
//                ASC0. It is called when the sending of data is terminated 
//                (S0TIR is set). 
//                Please note that you have to add application specific code 
//                to this function.
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


void ASC0_viTx(void) interrupt S0TINT
{



} //  End of function ASC0_viTx


//****************************************************************************
// @Function      void ASC0_viRx(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the receive interrupt service routine for the ASC0. 
//                It is called if a byte has been received via ASC0 (S0RIR is 
//                set). 
//                Please note that you have to add application specific code 
//                to this function.
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

// USER CODE BEGIN (Rx,1)

// USER CODE END




//****************************************************************************
// @Function      void ASC0_viTxBuf(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the transmit buffer interrupt service routine for 
//                the ASC0. It is called if the content of the TX-buffer has 
//                been loaded into the TX-shift register.
//                Please note that you have to add application specific code 
//                to this function.
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

// USER CODE BEGIN (TxBuf,1)

// USER CODE END

void ASC0_viTxBuf(void) interrupt S0TBINT
{
	ready_to_transmit = 0x00;	
  

} //  End of function ASC0_viTxBuf

extern char ASC0_cReadyToTransmit(void) {
	return ready_to_transmit;
}


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
// @Date          05/12/2014
//
//****************************************************************************

// USER CODE BEGIN (ReceiverOn,1)

// USER CODE END

void ASC0_vReceiverOn(void)
{
  S0CON_S0REN = 1;               // enable the receiver

} //  End of function ASC0_vReceiverOn



extern char ASC0_cReadyToReceive(void) {
	return input_ready;
}

void ASC0_viRx(void) interrupt S0RINT
{
	input_ready = 0;
	IO_vWritePort(P2, S0RBUF);

} //  End of function ASC0_viRx



// USER CODE BEGIN (ASC0_General,10)

// USER CODE END

