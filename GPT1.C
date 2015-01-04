#include "MAIN.H"
#include <stdlib.h>

void GPT1_vInit(void)
{
 
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

  T4CON          =  0x0086;      // load timer 4 control register
  T4             =  0x9896;      // load timer 4 register

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
  T4IC           =  0x0067;     

  T2CON_T2R      =  1;           // timer 2 run bit is set
  T4CON_T4R      =  1;           // timer 4 run bit is set

} 


unsigned int leds; //16 bits on C167
unsigned char LED_ITERATOR = 0;
unsigned char brightness = 0;
unsigned int counter = 0;
unsigned char selected_animation = 0;

unsigned int animations[4][32] = {
	{0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA,0x5555,0xAAAA},
	{0x8000,0x4000,0x2000,0x1000,0x0800,0x0400,0x0200,0x0100,0x0080,0x0040,0x0020,0x0010,0x0008,0x0004,0x0002,0x0001,0x0001,0x0002,0x0004,0x0008,0x0010,0x0020,0x0040,0x0080,0x0100,0x0200,0x0400,0x0800,0x1000,0x2000,0x4000,0x8000},
	{0x0100,0x0010,0x0002,0x4000,0x8000,0x0001,0x0080,0x0400,0x8000,0x1000,0x0020,0x0800,0x0008,0x0040,0x2000,0x0200,0x0001,0x0010,0x0080,0x0100,0x0010,0x0002,0x4000,0x8000,0x0001,0x0080,0x0400,0x8000,0x1000,0x0020,0x0800,0x0008}
};

unsigned int current_frame = 0x5555;
unsigned char current_frame_counter = 0;

extern unsigned char GPT1_getBrightness(void){
	return brightness;
}

extern void GPT1_setBrightness(unsigned char brightness_in) {
	brightness = brightness_in;
}

void GPT1_viTmr2(void) interrupt T2INT 	{
	
	// increment the LED iterator; when it's too high, reset it
	if(LED_ITERATOR++ > 99) LED_ITERATOR = 0;

	// set the value of P2 (to output to the LEDs) to current frame OR off, depending on where we are in the duty cycle
	IO_vWritePort(P2, (LED_ITERATOR>brightness)?(0xFFFF):(~current_frame));

	// reset the timer
	GPT1_TIMER_2 = 0x1;

}
void GPT1_viTmr4(void) interrupt 0x24 	{
	if(current_frame_counter++>=31) current_frame_counter = 0;
	current_frame = animations[selected_animation][current_frame_counter];
	GPT1_TIMER_4 = 0x0FF0;

}

extern void GPT1_setAnimation(unsigned char anim) {
	selected_animation = anim;
}
