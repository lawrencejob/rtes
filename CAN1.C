#include "MAIN.H"
#include "Tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CAN1_vInit(void)
{

  C1CSR          =  0x0041;      // set CAN1 INIT and CCE

  ///  - input clock is divided by 2
  ///  - baudrate = 1.000 Mbaud
  ///  - there are 5 time quanta before sample point
  ///  - there are 4 time quanta after sample point
  ///  - the (re)synchronization jump width is 2 time quanta

  C1BTR          =  0x3440;      // set CAN1 bit timing register

  C1GMS          =  0xE0FF;      // set CAN1 global mask short register

  C1UGML         =  0xFFFF;      // set CAN1 upper global mask long register

  C1LGML         =  0xF8FF;      // set CAN1 lower global mask long register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 1 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 1 is valid

  CAN1_OBJ[0].MCR  =  0x5695;    // set CAN1 message control register

  ///  - message direction is transmit
  ///  - standard 11-bit identifier
  ///  - 8 valid data bytes

  CAN1_OBJ[0].MCFG  =  0x88;     // set CAN1 message configuration register
  CAN1_OBJ[0].UAR  =  0x0000;    // set CAN1 upper arbitration register
  CAN1_OBJ[0].LAR  =  0x0000;    // set CAN1 lower arbitration register

  CAN1_OBJ[0].Data[0]  =  0xF5;  // set data byte 0
  CAN1_OBJ[0].Data[1]  =  0x55;  // set data byte 1
  CAN1_OBJ[0].Data[2]  =  0x00;  // set data byte 2
  CAN1_OBJ[0].Data[3]  =  0x00;  // set data byte 3
  CAN1_OBJ[0].Data[4]  =  0x00;  // set data byte 4
  CAN1_OBJ[0].Data[5]  =  0x00;  // set data byte 5
  CAN1_OBJ[0].Data[6]  =  0x00;  // set data byte 6
  CAN1_OBJ[0].Data[7]  =  0x00;  // set data byte 7

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 2 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 2 is not valid
  CAN1_OBJ[1].MCR  =  0x5999;    // set CAN1 message control register

  ///  - message direction is RECEIVE!!!
  ///  - standard 11-bit identifier
  ///  - 8 valid data bytes

  CAN1_OBJ[1].MCFG  =  0x80;     // set CAN1 message configuration register
  CAN1_OBJ[1].UAR  =  0x0000;    // set CAN1 upper arbitration register
  CAN1_OBJ[1].LAR  =  0x0000;    // set CAN1 lower arbitration register

  CAN1_OBJ[1].Data[0]  =  0xF5;  // set data byte 0
  CAN1_OBJ[1].Data[1]  =  0x50;  // set data byte 1
  CAN1_OBJ[1].Data[2]  =  0x00;  // set data byte 2
  CAN1_OBJ[1].Data[3]  =  0x00;  // set data byte 3
  CAN1_OBJ[1].Data[4]  =  0x00;  // set data byte 4
  CAN1_OBJ[1].Data[5]  =  0x00;  // set data byte 5
  CAN1_OBJ[1].Data[6]  =  0x00;  // set data byte 6
  CAN1_OBJ[1].Data[7]  =  0x00;  // set data byte 7

  CAN1_OBJ[2].MCR  =  0x5555;
  CAN1_OBJ[3].MCR  =  0x5555;
  CAN1_OBJ[4].MCR  =  0x5555;
  CAN1_OBJ[5].MCR  =  0x5555;
  CAN1_OBJ[6].MCR  =  0x5555; 
  CAN1_OBJ[7].MCR  =  0x5555;
  CAN1_OBJ[8].MCR  =  0x5555;
  CAN1_OBJ[9].MCR  =  0x5555; 
  CAN1_OBJ[10].MCR  =  0x5555;
  CAN1_OBJ[11].MCR  =  0x5555;
  CAN1_OBJ[12].MCR  =  0x5555;
  CAN1_OBJ[13].MCR  =  0x5555;
  CAN1_OBJ[14].MCR  =  0x5555;   

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used CAN1 Timer Port Pins:
  ///  -----------------------------------------------------------------------
  ///  - P4.5 is used for CAN1 Interface Input (CAN1_RxD)
  ///  - P4.6 is used for CAN1 Interface Output (CAN1_TxD)

  DP4  = (DP4  & ~(uword)0x0040) | 0x0040;    //set direction register

  C1PCIR         = (C1PCIR & ~(uword)0x0700) | 0x0000; // set CAN1 interface 
                                                       // port controll 
                                                       // register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used CAN1 Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - CAN1 service request node configuration:
  ///  - CAN1 interrupt priority level (ILVL) = 9
  ///  - CAN1 interrupt group level (GLVL) = 2

  XP0IC          =  0x0066;     

  /// ------------ CAN1 Control/Status Register --------------
  ///  - reset CCE and INIT
  ///  - enable interrupt generation from CAN1 Modul

  C1CSR          =  0x0002;      // set CAN1 control satatus register

} //  End of function CAN1_vInit


//****************************************************************************
// @Function      void CAN1_viCAN1(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the interrupt service routine for the CAN1 
//                controller. Depending on the configuration it is executed 
//                if:
//                - the busoff or the error warning status is reached 
//                  (EIE is set)
//                - a message has been sent or received successfully or a bus 
//                  error occurred (SIE is set)
//                - the bit INTPND (interrupt pending) in one of the message 
//                  object control-registers is set (at Tx or Rx)
//                Please note that you have to add application specific code 
//                to this function.
//

void handle_incoming(void);

void CAN1_viCAN1(void) interrupt XP0INT
{
	unsigned int to_return = 0;
	uword uwIntID;
	uwIntID = C1PCIR & 0x00ff;
	//while (uwIntID = C1PCIR & 0x00ff){
	switch (uwIntID & 0x00ff){
		case 4: // Message Object 1 Interrupt
			CAN1_OBJ[1].MCR = 0xfffd; // reset INTPN
			if ((CAN1_OBJ[1].MCR & 0x0300) == 0x0200) // if NEWDAT set
			{
				//int i;
				if ((CAN1_OBJ[1].MCR & 0x0c00) == 0x0800) // if MSGLST set
				{
					// Indicates that the CAN1 controller has stored a new
					// message into this object, while NEWDAT was still set,
					// ie. the previously stored message is lost.
					CAN1_OBJ[1].MCR = 0xf7ff; // reset MSGLST
					IO_vWritePort(P2,0x8181);
				}

				handle_incoming();										

				/*//to_return = CAN1_OBJ[1].Data[1] | CAN1_OBJ[1].Data[0] << 8;
				//IO_vWritePort(P2,~(CAN1_OBJ[1].Data[1] | CAN1_OBJ[1].Data[0] << 8));
				//to_return++;
				//CAN1_OBJ[0].Data[1] = (char)(to_return & 0xFF);
				//CAN1_OBJ[0].Data[0] = (char)((to_return & 0xFF00) >> 8);
				//for(i=0;i<0xFFFF;i++) {}
				//for(i=0;i<0xFFFF;i++) {} 
				//IO_vWritePort(P2,~(CAN1_OBJ[1].Data[1] | CAN1_OBJ[1].Data[0] << 8));
				CAN1_vTransmit(1);
				CAN1_OBJ[1].MCR = 0xfdff; // reset NEWDAT  */
			}
		break;
		default:
		break;
	}
}

#define RESPONSE_CURRENT_BRIGHTNESS 4

void handle_incoming(void) {
 	if(CAN1_OBJ[1].Data[0] == RESPONSE_CURRENT_BRIGHTNESS) {
		char out[3] = "xxx";
		// ASSERT: We know that the (or, for now, 'a') remote device is trying to tell us what the brightness is
		sendString("The brightness is: ");
		sprintf(out, "%d", CAN1_OBJ[1].Data[1]);
		sendString(out);
		receiveCurrentBrightness(CAN1_OBJ[1].Data[1]);

	}else {
		// I really hope this doesn't happen: maybe do something to indicate an error
		sendString("Received an unrecognised frame from the remote device.");
	}
}

void CAN1_vTransmit(ubyte ubObjNr)
{
  CAN1_OBJ[ubObjNr - 1].MCR = 0xe7ff;  // set TXRQ,reset CPUUPD
}

void CAN1_vLoadData(ubyte ubObjNr, ubyte *pubData)
{
  ubyte i;

  CAN1_OBJ[ubObjNr - 1].MCR = 0xfaff;  // set CPUUPD and NEWDAT

  for(i = 0; i < (CAN1_OBJ[ubObjNr - 1].MCFG & 0xf0) >> 4; i++)
  {
    CAN1_OBJ[ubObjNr - 1].Data[i] = *(pubData++);
  }

  CAN1_OBJ[ubObjNr - 1].MCR = 0xf7ff;  // reset CPUUPD
}

void CAN1_vReleaseObj(ubyte ubObjNr)
{
  CAN1_OBJ[ubObjNr - 1].MCR = 0xfdff;     // reset NEWDAT
}


extern void CAN1_SendShort(unsigned char opcode, unsigned char operand) {
	CAN1_OBJ[0].Data[0] = opcode;
	CAN1_OBJ[0].Data[1] = operand;
	CAN1_vTransmit(1);
}
