//****************************************************************************
// @Module        On-Chip CAN Interface 1 (CAN1)
// @Filename      CAN1.H
// @Project       project.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains all function prototypes and macros for 
//                the CAN1 module.
//
//----------------------------------------------------------------------------
// @Date          30/12/2014 13:29:11
//
//****************************************************************************

// USER CODE BEGIN (CAN1_Header,1)

// USER CODE END



#ifndef _CAN1_H_
#define _CAN1_H_

//****************************************************************************
// @Definition of a structure for the CAN1 data
//****************************************************************************

// The following data type serves as a software message object. Each access to
// a hardware message object has to be made by forward a pointer to a software
// message object (TCAN1_Obj). The data type has the following fields:
//
// ubMsgCfg:
// this byte has the same structure as the message configuration register of a
// hardware message object. It contains the "Data Lenght Code" (DLC), the "Extended
// Identifier" (XTD) and the "Message Direction" (DIR, read only access).
//
//         7     6     5     4     3     2     1     0
//      |-----------------------------------------------|
//      |        DLC            | DIR | XTD |  0  |  0  |
//      |-----------------------------------------------|
//
// ulArbitr: 
// this field is four bytes long and contains either the 11-bit identifier 
// or the 29-bit identifier (as a HEX-Value)
//
// ubData[8]:
// 8 bytes containing the data of a frame
//
// ubUser:
// this field serves for storing application specific data. It will not be
// sended or received.
//

typedef struct
{
   ubyte ubMsgCfg;   // 8-bit Message Configuration Register
   ulong ulArbitr;   // standard (11-bit)/extended (29-bit) identifier
   ubyte ubData[8];  // 8-bit Data Bytes
   ubyte ubUser;     // for application specific states
}TCAN1_Obj;


//****************************************************************************
// @Project Includes
//****************************************************************************

// USER CODE BEGIN (CAN1_Header,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (CAN1_Header,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (CAN1_Header,4)

// USER CODE END

// Structure for a single CAN1 object
// A total of 15 such object structures exists (starting at EF10H)

struct can1_obj 
{
  uword  MCR;       // Message Control Register
  uword  UAR;       // Upper Arbitration Register
  uword  LAR;       // Lower Arbitration Register
  ubyte  MCFG;      // Message Configuration Register
  ubyte  Data[8];   // Message Data 0 .. 7
  ubyte  Customer;  // Reserved for application specific data
};

#define CAN1_OBJ ((struct can1_obj volatile *) 0xEF10)

//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (CAN1_Header,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN1_Header,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (CAN1_Header,7)

// USER CODE END


//****************************************************************************
// @Prototypes Of Global Functions
//****************************************************************************

void CAN1_vInit(void);
void CAN1_vGetMsgObj(ubyte ubObjNr, TCAN1_Obj *pstObj);
ubyte CAN1_ubRequestMsgObj(ubyte ubObjNr);
ubyte CAN1_ubNewData(ubyte ubObjNr);
void CAN1_vTransmit(ubyte ubObjNr);
void CAN1_vConfigMsgObj(ubyte ubObjNr, TCAN1_Obj *pstObj);
void CAN1_vLoadData(ubyte ubObjNr, ubyte *pubData);
ubyte CAN1_ubMsgLost(ubyte ubObjNr);
ubyte CAN1_ubDelMsgObj(ubyte ubObjNr);
void CAN1_vReleaseObj(ubyte ubObjNr);

//****************************************************************************
// @Interrupt Vectors
//****************************************************************************

#define XP0INT    0x40


// USER CODE BEGIN (CAN1_Header,8)

// USER CODE END


extern void CAN1_SendShort(unsigned char opcode, unsigned char operand);

#endif  // ifndef _CAN1_H_
