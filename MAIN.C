#include "MAIN.H"
#include "Tools.h"
#include "ASC0.H"
#include "CAN1.H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void homeScreen(void);
void drawBrightnessScreen(void);
void drawAnimationScreen(void);
void sendCurrentBrightness(void);
void sendCurrentAnimation(void);

unsigned char current_brightness = 0, current_animation = 0;

#define BRIGHTNESS_INCREMENT 5
#define BRIGHTNESS_MAX 100
#define ANIMATION_MAX 3

void MAIN_vInit(void)
{


  //   initializes the Parallel Ports
  IO_vInit();

  //   initializes the Asynchronous/Synchronous Serial Interface (ASC0)
  ASC0_vInit();			  

  //   initializes the General Purpose Timer Unit (GPT1)
  GPT1_vInit();

  //   initializes the On-Chip CAN Interface 1 (CAN1)
  CAN1_vInit();


  //   globally enable interrupts
  PSW_IEN        =  1;          

} //  End of function MAIN_vInit

char animation_names[4][16] = {
		"Boring",
		"Nightrider",
		"Stars",
		"Extra-fun"};


void main(void)

{
	int i = 0;
	MAIN_vInit();
	IO_vWritePort(P2, 0x0F55);
	ASC0_vReceiverOn();
	while(1) {

		homeScreen();
	}


} // End of function main

void menu_chooseBrightness(void);
void menu_chooseAnimation(void);

void homeScreen(void) {

	int choice;
	
	const char *message = "\r\n\tWelcome to Light'o'matic 2000. Prepare for the most gripping PWM\r\n\texperience of your life.Prepare to have your mind blown.\r\n\r\n\tA\tChoose brightness\r\n\tB\tChoose animation\r\n\t\r\n\t";
	
	resetEmulator();

	sendNL();
	sendString(message);
	choice = waitForCharInput();
	
	resetEmulator();

	switch(choice) {
	 	case 'a':
		case 'A':
			menu_chooseBrightness();
		break;
		case 'b':
		case 'B':
			menu_chooseAnimation();
		break;
	}

	sendString("\r\n\t\r\n\t");

}

void menu_chooseBrightness(void) {
	unsigned char brightness = 0, loop_break = 0;
	int direction = 0;
	
	resetEmulator();

	sendNL();
	sendString("BRIGHTNESS SELECT:");

	sendNL();
	sendString("Use the arrow keys to select the brightness you want.");

	sendNL();
	sendString("Press enter when you're done.");
	
	sendNL();
	sendNL();

	while(loop_break==0){
		drawBrightnessScreen();
		direction = waitForDirectionInput();
		switch(direction) {
			case 'C':
			case 'c':
				loop_break = 0;
				if(current_brightness+5 <= BRIGHTNESS_MAX){
					//GPT1_setBrightness(GPT1_getBrightness()+BRIGHTNESS_INCREMENT);
					current_brightness+=BRIGHTNESS_INCREMENT;
					sendCurrentBrightness();
				}
			break;
			case 'D':
			case 'd':
				loop_break = 0;
				if(current_brightness >= BRIGHTNESS_INCREMENT){
					//GPT1_setBrightness(GPT1_getBrightness() - BRIGHTNESS_INCREMENT);
					current_brightness-=BRIGHTNESS_INCREMENT;
					sendCurrentBrightness();
				}
			break;
			default:
				loop_break = -1;
				return;
			break;
		}
	}
}

void drawBrightnessScreen(void) {
	unsigned char c;
	char percentage[3];

	ASC0_vSendData(0xD);
	sendString("\t");

	sendString("[ ");
	for (c=0; c<current_brightness; c+=BRIGHTNESS_INCREMENT){
		sendString("=");
	}
	for(c=BRIGHTNESS_MAX; c>current_brightness; c-= BRIGHTNESS_INCREMENT) {
	 	sendString(" ");
	}
	sendString(" ] ");

	sprintf(percentage, "%d", current_brightness);
	sendString(percentage);
	sendString("% ");

	
	return;
}

void menu_chooseAnimation(void) {
	unsigned char brightness = 0, loop_break = 0;
	int direction = 0;
	resetEmulator();

	sendNL();
	sendString("ANIMATION SELECT:");

	sendNL();
	sendString("Use the arrow keys to select an animation.");

	sendNL();
	sendString("Press enter when you're done.");
	
	sendNL();
	sendNL();

	while(loop_break==0){
		drawAnimationScreen();
		direction = waitForDirectionInput();
		switch(direction) {
			case 'C':
			case 'c':
				loop_break = 0;
				if(current_animation+1 <= ANIMATION_MAX){
					current_animation++;
					sendCurrentAnimation();
				}
			break;
			case 'D':
			case 'd':
				loop_break = 0;
				if(current_animation > 0){
					current_animation--;
					sendCurrentAnimation();
				}
			break;
			default:
				loop_break = -1;
				return;
			break;
		}
	}
}	

void drawAnimationScreen(void) {

	// instruct the terminal emulator to carriage return
	ASC0_vSendData(0xD);
	sendString("\t                               ");
	ASC0_vSendData(0xD);

	// send 'tab' symbol
	sendString("\t");

	sendString("< ");
	sendString(animation_names[current_animation]);
	sendString(" > ");
	
	return;
}


void sendCurrentAnimation(void) {
	CAN1_SendShort(2,current_animation);
}

void sendCurrentBrightness(void){
	// send 'current_brightness' over CAN
	CAN1_SendShort(1,current_brightness);
}

void receiveCurrentBrightness(unsigned char b) {
	current_brightness = b;
}


