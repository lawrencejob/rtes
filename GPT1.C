#include "MAIN.H"

void GPT1_vInit(void)
{

  T3CON          =  0x0000;      // load timer 3 control register
  T3             =  0x0000;      // load timer 3 register

  T2CON          =  0x0086;      // load timer 2 control register
  T2             =  0x9896;      // load timer 2 register

  T4CON          =  0x0000;      // load timer 4 control register
  T4             =  0x0000;      // load timer 4 register

  T2IC           =  0x006A;     

  T2CON_T2R      =  0;           // timer 2 run bit is set

} 

void GPT1_viTmr2(void) interrupt T2INT 	{
	
	// this has been moved to the other board

}
