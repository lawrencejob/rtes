#include "MAIN.H"

void IO_vInit(void)
{

  PTCR           =  0x0000;      // load port temperature control register
  PICON          =  0x0000;      // load input configuration register

  P0H            =  0x0000;      // load data register
  POCON0H        =  0x0000;      // load output control register
  DP0H           =  0x0000;      // load direction register
  P0L            =  0x0000;      // load data register
  POCON0L        =  0x0000;      // load output control register
  DP0L           =  0x0000;      // load direction register
  P1H            =  0x0000;      // load data register
  POCON1H        =  0x0000;      // load output control register
  DP1H           =  0x0000;      // load direction register
  P1L            =  0x0000;      // load data register
  POCON1L        =  0x0000;      // load output control register
  DP1L           =  0x0000;      // load direction register
	// open drain, port 2 as output
  ODP2           =  0xFFFF;      // load open-drain register
  P2             =  0x0000;      // load data register
  POCON2         =  0x0000;      // load output control register
  DP2            =  0xFFFF;      // load direction register


  ODP3           =  0x0000;      // load open-drain register
  P3             =  0x0000;      // load data register
  POCON3         =  0x0000;      // load output control register
  DP3            =  0x0000;      // load direction register

  ODP4           =  0x0000;      // load open-drain register
  P4             =  0x0000;      // load data register
  POCON4         =  0x0000;      // load output control register
  DP4            =  0x0000;      // load direction register

  P5             =  0x0000;      // load data register

  ODP6           =  0x0000;      // load open-drain register
  P6             =  0x0000;      // load data register
  POCON6         =  0x0000;      // load output control register
  DP6            =  0x0000;      // load direction register

  ODP7           =  0x0000;      // load open-drain register
  P7             =  0x0000;      // load data register
  POCON7         =  0x0000;      // load output control register
  DP7            =  0x0000;      // load direction register

  ODP8           =  0x0000;      // load open-drain register
  P8             =  0x0000;      // load data register
  POCON8         =  0x0000;      // load output control register
  DP8            =  0x0000;      // load direction register

} 
