#ifndef _CAN1_H_
#define _CAN1_H_

typedef struct
{
   ubyte ubMsgCfg;   // 8-bit Message Configuration Register
   ulong ulArbitr;   // standard (11-bit)/extended (29-bit) identifier
   ubyte ubData[8];  // 8-bit Data Bytes
   ubyte ubUser;     // for application specific states
}TCAN1_Obj;

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

// interrupt vectors from DAvE
#define XP0INT    0x40

void CAN1_SendShort(unsigned char opcode, unsigned char operand);

#endif  // ifndef _CAN1_H_
