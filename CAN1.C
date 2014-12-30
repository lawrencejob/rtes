//****************************************************************************
// @Module        On-Chip CAN Interface 1 (CAN1)
// @Filename      CAN1.C
// @Project       project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains functions that use the CAN1 module.
//
//----------------------------------------------------------------------------
// @Date          30/12/2014 13:29:11
//
//****************************************************************************

// USER CODE BEGIN (CAN1_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (CAN1_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (CAN1_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (CAN1_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (CAN1_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN1_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN1_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (CAN1_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (CAN1_General,9)

// USER CODE END


//****************************************************************************
// @Function      void CAN1_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the CAN1 function 
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

void CAN1_vInit(void)
{
  // USER CODE BEGIN (Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  ------------ CAN1 Control/Status Register --------------
  ///  -----------------------------------------------------------------------
  ///  - start the initialization of the CAN1 Modul

  C1CSR          =  0x0041;      // set CAN1 INIT and CCE

  ///  - input clock is divided by 2
  ///  - baudrate = 100.000 kbaud
  ///  - there are 5 time quanta before sample point
  ///  - there are 4 time quanta after sample point
  ///  - the (re)synchronization jump width is 2 time quanta

  C1BTR          =  0x3449;      // set CAN1 bit timing register

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
  ///  - message object 2 is valid
  ///  - receive interrupt is enabled

  CAN1_OBJ[1].MCR  =  0x5599;    // set CAN1 message control register

  ///  - message direction is receive
  ///  - standard 11-bit identifier

  CAN1_OBJ[1].MCFG  =  0x00;     // set CAN1 message configuration register
  CAN1_OBJ[1].UAR  =  0x0000;    // set CAN1 upper arbitration register
  CAN1_OBJ[1].LAR  =  0x0000;    // set CAN1 lower arbitration register


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


  // USER CODE BEGIN (Init,3)

  // USER CODE END

  /// ------------ CAN1 Control/Status Register --------------
  ///  - reset CCE and INIT
  ///  - enable interrupt generation from CAN1 Modul

  C1CSR          =  0x0002;      // set CAN1 control satatus register



  // USER CODE BEGIN (Init,4)

  // USER CODE END

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

// USER CODE BEGIN (CAN1,1)

// USER CODE END

void CAN1_viCAN1(void) interrupt XP0INT
{

  uword uwIntID;

  // USER CODE BEGIN (CAN1,2)

  // USER CODE END

  while (uwIntID = C1PCIR & 0x00ff)
  {
    switch (uwIntID & 0x00ff)
    {

     case 4: // Message Object 2 Interrupt

              CAN1_OBJ[1].MCR = 0xfffd;                    // reset INTPND

              if ((CAN1_OBJ[1].MCR & 0x0300) == 0x0200)    // if NEWDAT set
              {

                if ((CAN1_OBJ[1].MCR & 0x0c00) == 0x0800)  // if MSGLST set
                {
                  // Indicates that the CAN1 controller has stored a new 
                  // message into this object, while NEWDAT was still set,
                  // ie. the previously stored message is lost.

                  CAN1_OBJ[1].MCR = 0xf7ff;  // reset MSGLST

                  // USER CODE BEGIN (CAN1,20)

                  // USER CODE END
                }
                else
                {
                  // The CAN1 controller has stored a new message
                  // into this object.

                  // USER CODE BEGIN (CAN1,21)

                  // USER CODE END
                }

                CAN1_OBJ[1].MCR = 0xfdff;  // reset NEWDAT
              }

              break;

      default:
              break;

    }  // end switch()

    // USER CODE BEGIN (CAN1,50)

    // USER CODE END

  }    // end while

} //  End of function CAN1_viCAN1


//****************************************************************************
// @Function      void CAN1_vGetMsgObj(ubyte ubObjNr, TCAN1_Obj *pstObj) 
//
//----------------------------------------------------------------------------
// @Description   This function fills the forwarded SW message object with 
//                the content of the chosen HW message object.
//                
//                The structure of the SW message object is defined in the 
//                header file CAN1.H (see TCAN1_Obj).
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be read (1-15)
// @Parameters    *pstObj: 
//                Pointer on a message object to be filled by this function
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (GetMsgObj,1)

// USER CODE END

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
// @Date          30/12/2014
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
// @Function      ubyte CAN1_ubNewData(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function checks whether the selected RECEIVE OBJECT 
//                has received a new message. If so the function returns the 
//                value '1'.
//
//----------------------------------------------------------------------------
// @Returnvalue   1 the message object has received a new message, else 0
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (1-15)
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (NewData,1)

// USER CODE END

ubyte CAN1_ubNewData(ubyte ubObjNr)
{
  ubyte ubReturn;

  ubReturn = 0;
  if((CAN1_OBJ[ubObjNr - 1].MCR & 0x0300) == 0x0200)  // if NEWDAT
  {
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
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (Transmit,1)

// USER CODE END

void CAN1_vTransmit(ubyte ubObjNr)
{
  CAN1_OBJ[ubObjNr - 1].MCR = 0xe7ff;  // set TXRQ,reset CPUUPD
}


//****************************************************************************
// @Function      void CAN1_vConfigMsgObj(ubyte ubObjNr, TCAN1_Obj *pstObj) 
//
//----------------------------------------------------------------------------
// @Description   This function sets up the message objects. This includes 
//                the 8 data bytes, the identifier (11- or 29-bit), the data 
//                number (0-8 bytes) and the XTD-bit. 
//                The message is not sent; for this the function 
//                CAN1_vTransmit must be called.
//                
//                The structure of the SW message object is defined in the 
//                header file CAN1.H (see TCAN1_Obj).
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object to be configured (1-15)
// @Parameters    *pstObj: 
//                Pointer on a message object
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (ConfigMsgObj,1)

// USER CODE END

void CAN1_vConfigMsgObj(ubyte ubObjNr, TCAN1_Obj *pstObj)
{
  ubyte i;
  ulong v;

  CAN1_OBJ[ubObjNr - 1].MCR = 0xfb7f;     // set CPUUPD, reset MSGVAL

  if(pstObj->ubMsgCfg & 0x04)        // extended identifier
  {
    v = 0x00000000;
    v += (pstObj->ulArbitr & 0x0000001f) << 11;  // ID  4.. 0
    v += (pstObj->ulArbitr & 0x00001fe0) >>  5;  // ID 12.. 5
    CAN1_OBJ[ubObjNr - 1].LAR  = v;

    v = 0x00000000;
    v += (pstObj->ulArbitr & 0x001fe000) >>  5;  // ID 13..20
    v += (pstObj->ulArbitr & 0x1fe00000) >> 21;  // ID 21..28
    CAN1_OBJ[ubObjNr - 1].UAR  = v;
  }
  else                               // standard identifier
  {
    CAN1_OBJ[ubObjNr - 1].LAR  = 0x00000000;

    v = 0x00000000;
    v += (pstObj->ulArbitr & 0x00000007) << 13;  // ID 18..20
    v += (pstObj->ulArbitr & 0x000007f8) >>  3;  // ID 21..28
    CAN1_OBJ[ubObjNr - 1].UAR  = v;
  }

  if(CAN1_OBJ[ubObjNr - 1].MCFG & 0x08)   // if transmit direction
  {
    CAN1_OBJ[ubObjNr - 1].MCFG = pstObj->ubMsgCfg | 0x08;

    for(i = 0; i < (pstObj->ubMsgCfg & 0xf0) >> 4;i++)
    {
      CAN1_OBJ[ubObjNr - 1].Data[i] = pstObj->ubData[i];
    }
    CAN1_OBJ[ubObjNr - 1].MCR  = 0xf6bf;  // set NEWDAT, reset CPUUPD, set MSGVAL
  }
  else                               // if receive direction
  {
    CAN1_OBJ[ubObjNr - 1].MCFG = pstObj->ubMsgCfg & 0xf7;

    CAN1_OBJ[ubObjNr - 1].MCR  = 0xf7bf;  // reset CPUUPD, set MSGVAL
  }

  CAN1_OBJ[ubObjNr - 1].Customer = pstObj->ubUser;
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
// @Date          30/12/2014
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
// @Function      ubyte CAN1_ubMsgLost(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   If a RECEIVE OBJECT receives new data before the old object 
//                has been read, the old object is lost. The CAN1 controller 
//                indicates this by setting the message lost bit (MSGLST). 
//                This function returns the status of this bit. 
//                
//                Note:
//                This function resets the message lost bit (MSGLST).
//
//----------------------------------------------------------------------------
// @Returnvalue   1 the message object has lost a message, else 0
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (1-15)
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (MsgLost,1)

// USER CODE END

ubyte CAN1_ubMsgLost(ubyte ubObjNr)
{
  bit bReturn;

  bReturn = 0;
  if((CAN1_OBJ[ubObjNr - 1].MCR & 0x0c00) == 0x0800)  // if set MSGLST 
  {
    CAN1_OBJ[ubObjNr - 1].MCR = 0xf7ff;               // reset MSGLST 
    bReturn = 1;
  }
  return(bReturn);
}


//****************************************************************************
// @Function      ubyte CAN1_ubDelMsgObj(ubyte ubObjNr) 
//
//----------------------------------------------------------------------------
// @Description   This function marks the selected message object as not 
//                valid. This means that this object cannot be sent or 
//                received. If the selected object is busy (meaning the 
//                object is transmitting a message or has received a new 
//                message) this function returns the value "0" and the object 
//                is not deleted.
//
//----------------------------------------------------------------------------
// @Returnvalue   1 the message object was deleted, else 0
//
//----------------------------------------------------------------------------
// @Parameters    ubObjNr: 
//                Number of the message object (1-15)
//
//----------------------------------------------------------------------------
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (DelMsgObj,1)

// USER CODE END

ubyte CAN1_ubDelMsgObj(ubyte ubObjNr)
{
  bit bReturn;

  bReturn = 0;
  if(!(CAN1_OBJ[ubObjNr - 1].MCR & 0xa200)) // if set RMTPND, TXRQ or NEWDAT
  {
    CAN1_OBJ[ubObjNr - 1].MCR = 0xff7f;     // reset MSGVAL
    bReturn = 1;
  }
  return(bReturn);
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
// @Date          30/12/2014
//
//****************************************************************************

// USER CODE BEGIN (ReleaseObj,1)

// USER CODE END

void CAN1_vReleaseObj(ubyte ubObjNr)
{
  CAN1_OBJ[ubObjNr - 1].MCR = 0xfdff;     // reset NEWDAT
}




// USER CODE BEGIN (CAN1_General,10)

// USER CODE END

