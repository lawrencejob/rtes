#ifndef _ASC0_H_
#define _ASC0_H_

// prototypes to expose functions
void ASC0_vInit(void);
void ASC0_vSendData(uword uwData);
uword ASC0_uwGetData(void);
void ASC0_vReceiverOn(void);

// define helper function, by Dave
#define ASC0_vReceiverOff() S0CON_S0REN = 0
char ASC0_cReadyToTransmit(void);
char ASC0_cReadyToReceive(void);

// interrupt vectors by dave
#define S0TINT    0x2A
#define S0RINT    0x2B
#define S0TBINT    0x47

#endif  // ifndef _ASC0_H_