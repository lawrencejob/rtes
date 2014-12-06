//****************************************************************************
// @Module        General Purpose Timer Unit (GPT1)
// @Filename      GPT1.C
// @Project       FullLab.dav
//----------------------------------------------------------------------------
// @Controller    Infineon C167CS-L
//
// @Compiler      Keil
//
// @Codegenerator 2.2
//
// @Description   This file contains functions that use the GPT1 module.
//
//----------------------------------------------------------------------------
// @Date          05/12/2014 16:17:25
//
//****************************************************************************

// USER CODE BEGIN (GPT1_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.H"

// USER CODE BEGIN (GPT1_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (GPT1_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (GPT1_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (GPT1_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (GPT1_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (GPT1_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (GPT1_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (GPT1_General,9)

// USER CODE END


//****************************************************************************
// @Function      void GPT1_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the GPT1 function 
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
// @Date          05/12/2014
//
//****************************************************************************

// USER CODE BEGIN (Init,1)

// USER CODE END

void GPT1_vInit(void)
{
  // USER CODE BEGIN (Init,2)

  // USER CODE END

  ///  -----------------------------------------------------------------------
  ///  Configuration of the GPT1 Core Timer 3:
  ///  -----------------------------------------------------------------------
  ///  - timer 3 works in timer mode
  ///  - maximum input frequency for timer 3 is 2.5 MHz
  ///  - prescaler factor is 8
  ///  - up/down control bit is reset
  ///  - external up/down control is disabled
  ///  - alternate output function T3OUT (P3.3) is disabled
  ///  - timer 3 output toggle latch (T3OTL) is set to 0
  ///  - timer 3 run bit is reset

  T3CON          =  0x0000;      // load timer 3 control register
  T3             =  0x0000;      // load timer 3 register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the GPT1 Core Timer 2:
  ///  -----------------------------------------------------------------------
  ///  - timer 2 works in timer mode
  ///  - maximum input frequency for timer 2 is 2.5 MHz
  ///  - prescaler factor is 512
  ///  - up/down control bit is set
  ///  - external up/down control is disabled

  T2CON          =  0x0086;      // load timer 2 control register
  T2             =  0x9896;      // load timer 2 register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the GPT1 Core Timer 4:
  ///  -----------------------------------------------------------------------
  ///  - timer 4 works in timer mode
  ///  - maximum input frequency for timer 4 is 2.5 MHz
  ///  - prescaler factor is 8
  ///  - up/down control bit is reset
  ///  - external up/down control is disabled
  ///  - timer 4 run bit is reset

  T4CON          =  0x0000;      // load timer 4 control register
  T4             =  0x0000;      // load timer 4 register

  ///  -----------------------------------------------------------------------
  ///  Configuration of the used GPT1 Port Pins:
  ///  -----------------------------------------------------------------------


  ///  -----------------------------------------------------------------------
  ///  Configuration of the used GPT1 Interrupts:
  ///  -----------------------------------------------------------------------
  ///  - timer 2 service request node configuration:
  ///  - timer 2 interrupt priority level (ILVL) = 10
  ///  - timer 2 interrupt group level (GLVL) = 2

  T2IC           =  0x006A;     


  // USER CODE BEGIN (GPT1_Function,3)

  // USER CODE END

  T2CON_T2R      =  1;           // timer 2 run bit is set

} 


unsigned int leds; //16 bits on C167
unsigned char LED_ITERATOR = 0;
unsigned char brightness = 0;
unsigned int counter = 0;

extern void GPT1_setBrightness(unsigned char brightness_in) {
	brightness = brightness_in;
}

void GPT1_viTmr2(void) interrupt T2INT 	{
	
	//LED_ITERATOR++;
	if(LED_ITERATOR++ > 99){
		LED_ITERATOR = 0;
		/*counter++;
		if(counter > 100){
		 	counter = 0;
			/*brightness++;
			if(brightness > 10) brightness = 0;
		}*/
	}

	IO_vWritePort(P2, (LED_ITERATOR>brightness)?(0xFFFF):(0x0F0F));
	GPT1_TIMER_2 = 0x1;

}
