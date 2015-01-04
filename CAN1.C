#include "MAIN.H"
#include "GPT1.H"

void CAN1_vInit(void)
{
 

  ///  -----------------------------------------------------------------------
  ///  ------------ CAN1 Control/Status Register --------------
  ///  -----------------------------------------------------------------------
  ///  - start the initialization of the CAN1 Modul

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

  CAN1_OBJ[0].Data[0]  =  0x00;  // set data byte 0
  CAN1_OBJ[0].Data[1]  =  0x00;  // set data byte 1
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

  CAN1_OBJ[1].Data[0]  =  0x00;  // set data byte 0
  CAN1_OBJ[1].Data[1]  =  0x00;  // set data byte 1
  CAN1_OBJ[1].Data[2]  =  0x00;  // set data byte 2
  CAN1_OBJ[1].Data[3]  =  0x00;  // set data byte 3
  CAN1_OBJ[1].Data[4]  =  0x00;  // set data byte 4
  CAN1_OBJ[1].Data[5]  =  0x00;  // set data byte 5
  CAN1_OBJ[1].Data[6]  =  0x00;  // set data byte 6
  CAN1_OBJ[1].Data[7]  =  0x00;  // set data byte 7

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 3 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 3 is not valid
  CAN1_OBJ[2].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 4 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 4 is not valid
  CAN1_OBJ[3].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 5 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 5 is not valid
  CAN1_OBJ[4].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 6 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 6 is not valid
  CAN1_OBJ[5].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 7 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 7 is not valid
  CAN1_OBJ[6].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 8 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 8 is not valid
  CAN1_OBJ[7].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 9 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 9 is not valid
  CAN1_OBJ[8].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 10 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 10 is not valid
  CAN1_OBJ[9].MCR  =  0x5555;    // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 11 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 11 is not valid
  CAN1_OBJ[10].MCR  =  0x5555;   // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 12 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 12 is not valid
  CAN1_OBJ[11].MCR  =  0x5555;   // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 13 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 13 is not valid
  CAN1_OBJ[12].MCR  =  0x5555;   // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 14 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 14 is not valid
  CAN1_OBJ[13].MCR  =  0x5555;   // set CAN1 message control register

  ///  -----------------------------------------------------------------------
  ///  ---------------- Configure Message Object 15 --------------------------
  ///  -----------------------------------------------------------------------
  ///  - message object 15 is not valid
  CAN1_OBJ[14].MCR  =  0x5555;   // set CAN1 message control register

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


void CAN1_viCAN1(void) interrupt XP0INT
{
	unsigned int to_return = 0;
	uword uwIntID;
	//IO_vWritePort(P2,0xFFFF);
	uwIntID = C1PCIR & 0x00ff;
	//while (uwIntID = C1PCIR & 0x00ff){
		switch (uwIntID & 0x00ff){
			case 4: // Message Object 1 Interrupt
				CAN1_OBJ[1].MCR = 0xfffd; // reset INTPN
				if ((CAN1_OBJ[1].MCR & 0x0300) == 0x0200) // if NEWDAT set
				{
					
					if ((CAN1_OBJ[1].MCR & 0x0c00) == 0x0800) // if MSGLST set
					{
						// Indicates that the CAN1 controller has stored a new
						// message into this object, while NEWDAT was still set,
						// ie. the previously stored message is lost.
						CAN1_OBJ[1].MCR = 0xf7ff; // reset MSGLST
						IO_vWritePort(P2,0x8181);
					}
					/*else (COMMENTING OUT BECAUSE WE DON'T WANT ANY MESSAGES TO GET LOST BECAUSE THE PASS_THE_PARCEL ALGORITHM BREAKS)
					{*/
					
						// The CAN1 controller has stored a new message
						// into this object.
						// Write your code here!!!!

						switch (CAN1_OBJ[1].Data[0])
						{
							case 1: //set brightness
								GPT1_setBrightness(CAN1_OBJ[1].Data[1]);
								break;
							case 2:
								GPT1_setAnimation(CAN1_OBJ[1].Data[1]);
								break;
							case 3:
								CAN1_OBJ[0].Data[1] = GPT1_getBrightness();
								CAN1_OBJ[0].Data[0] = 0x04;
								CAN1_vTransmit(1);
								break;
							default:
								break;
						}
					CAN1_OBJ[1].MCR = 0xfdff; // reset NEWDAT
				}
			break;
			default:
			break;
		}
}




void CAN1_vGetMsgObj(ubyte ubObjNr, TCAN1_Obj *pstObj)
{
  ubyte i;
  ulong v;

  pstObj->ubMsgCfg = CAN1_OBJ[ubObjNr-1].MCFG;

  v = 0;
  if(CAN1_OBJ[ubObjNr - 1].MCFG & 0x04)  // extended identifier
  {
    v += (CAN1_OBJ[ubObjNr - 1].LAR & 0xf800) >> 11;  // ID  4.. 0
    v += (CAN1_OBJ[ubObjNr - 1].LAR & 0x00ff) <<  5;  // ID 12.. 5
    v += (ulong)(CAN1_OBJ[ubObjNr - 1].UAR & 0xff00) <<  5;  // ID 13..20
    v += (ulong)(CAN1_OBJ[ubObjNr - 1].UAR & 0x00ff) << 21;  // ID 21..28
  }
  else                              // standard identifier 
  {
    v += (CAN1_OBJ[ubObjNr - 1].UAR & 0xe000) >> 13;  // ID 18..20
    v += (CAN1_OBJ[ubObjNr - 1].UAR & 0x00ff) <<  3;  // ID 21..28
  }
  pstObj->ulArbitr = v;

  for(i = 0; i < (CAN1_OBJ[ubObjNr - 1].MCFG & 0xf0) >> 4; i++)
  {
    pstObj->ubData[i] = CAN1_OBJ[ubObjNr - 1].Data[i];
  }

  pstObj->ubUser = CAN1_OBJ[ubObjNr - 1].Customer;

  if(ubObjNr < 15 || (CAN1_OBJ[ubObjNr - 1].MCR & 0x000c) != 0x0008)
  {
    CAN1_OBJ[ubObjNr - 1].MCR = 0xfdff;  // reset NEWDAT
  }
}


//****************************************************************************
// @Function      ubyte CAN1_ubRequestMsgObj(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   If a TRANSMIT OBJECT is to be reconfigured it must first be 
//                accessed. The access to the transmit object is exclusive. 
//                This function checks whether the choosen message object is 
//                still executing a transmit request, or if the object can be 
//                accessed exclusively.
//                After the message object is reserved, it can be 
//                reconfigured by using the function CAN1_vConfigMsgObj or 
//                CAN1_vLoadData.
//                Both functions enable access to the object for the CAN1 
//                controller. 
//                By calling the function CAN1_vTransmit transfering of data 
//                is started.
//
//----------------------------------------------------------------------------
// @Returnvalue   0 message object is busy (a transfer is active), else 1
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (1-14)
//
//----------------------------------------------------------------------------
// @Date          28/12/2014
//
//****************************************************************************

// USER CODE BEGIN (RequestMsgObj,1)

// USER CODE END

ubyte CAN1_ubRequestMsgObj(ubyte ubObjNr)
{
  ubyte ubReturn;

  ubReturn = 0;
  if((CAN1_OBJ[ubObjNr - 1].MCR & 0x3000) == 0x1000)  // if reset TXRQ 
  {
    CAN1_OBJ[ubObjNr - 1].MCR = 0xfbff;               // set CPUUPD 
    ubReturn = 1;
  }
  return(ubReturn);
}


//****************************************************************************
// @Function      void CAN1_vTransmit(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function triggers the CAN1 controller to send the 
//                selected message.
//                If the selected message object is a TRANSMIT OBJECT then 
//                this function triggers the sending of a data frame. If 
//                however the selected message object is a RECEIVE OBJECT 
//                this function triggers the sending of a remote frame.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (1-14)
//
//----------------------------------------------------------------------------
// @Date          28/12/2014
//
//****************************************************************************

// USER CODE BEGIN (Transmit,1)

// USER CODE END

void CAN1_vTransmit(ubyte ubObjNr)
{
  CAN1_OBJ[ubObjNr - 1].MCR = 0xe7ff;  // set TXRQ,reset CPUUPD
}


//****************************************************************************
// @Function      void CAN1_vLoadData(ubyte ubObjNr, ubyte *pubData) 
//
//----------------------------------------------------------------------------
// @Description   If a hardware TRANSMIT OBJECT has to be loaded with data 
//                but not with a new identifier, this function may be used 
//                instead of the function CAN1_vConfigMsgObj. The message 
//                object should be accessed by calling the function 
//                CAN1_ubRequestMsgObj before calling this function. This 
//                prevents the CAN1 controller from working with invalid data.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be configured (1-15)
// @Parameters    *pubData: 
//                Pointer on a data buffer
//
//----------------------------------------------------------------------------
// @Date          28/12/2014
//
//****************************************************************************

// USER CODE BEGIN (LoadData,1)

// USER CODE END

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


//****************************************************************************
// @Function      void CAN1_vReleaseObj(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function resets the NEWDAT flag of the selected 
//                RECEIVE OBJECT, so that the CAN1 controller have access to 
//                it. This function must be called if the function 
//                CAN1_ubNewData detects, that new data are present in the 
//                message object and the actual data have been read by 
//                calling the function CAN1_vGetMsgObj. 
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (1-15)
//
//----------------------------------------------------------------------------
// @Date          28/12/2014
//
//****************************************************************************

void CAN1_vReleaseObj(ubyte ubObjNr)
{
  CAN1_OBJ[ubObjNr - 1].MCR = 0xfdff;     // reset NEWDAT
}

