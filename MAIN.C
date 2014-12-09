#include "MAIN.H"
#include "ASC0.H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void homeScreen(void);
int waitForCharInput(void);
void drawBrightnessScreen(void);
void sendNL(void);

#define BRIGHTNESS_INCREMENT 5
#define BRIGHTNESS_MAX 100

void MAIN_vInit(void)
{


  //   initializes the Parallel Ports
  IO_vInit();

  //   initializes the Asynchronous/Synchronous Serial Interface (ASC0)
  ASC0_vInit();			  

  //   initializes the General Purpose Timer Unit (GPT1)
  GPT1_vInit();


  //   initializes the General Purpose Timer Unit (GPT1)
  //GPT1_vInit();
  //   globally enable interrupts
  PSW_IEN        =  1;          


} //  End of function MAIN_vInit




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

void sendString(char *msg);
void menu_chooseBrightness(void);
void menu_chooseAnimation(void);
void resetEmulator(void);
int waitForDirectionInput(void);
void setColour(char foreground, char background);
char transmitBuffer[1023];

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
	/*sendString("BRIGHTNESS SELECT");
	brightness = (waitForCharInput()-48)*10;

	sendString("\r\n\t\r\n\tYou chose ");
	//sendString(brightness);
	GPT1_setBrightness(brightness);*/
	
	resetEmulator();
	//setColour(6, 7);

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
				if(GPT1_getBrightness()+5 <= BRIGHTNESS_MAX)
					GPT1_setBrightness(GPT1_getBrightness()+BRIGHTNESS_INCREMENT);
			break;
			case 'D':
			case 'd':
				loop_break = 0;
				if(GPT1_getBrightness() >= BRIGHTNESS_INCREMENT)
					GPT1_setBrightness(GPT1_getBrightness() - BRIGHTNESS_INCREMENT);
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
	for (c=0; c<GPT1_getBrightness(); c+=BRIGHTNESS_INCREMENT){
		sendString("=");
	}
	for(c=BRIGHTNESS_MAX; c>GPT1_getBrightness(); c-= BRIGHTNESS_INCREMENT) {
	 	sendString(" ");
	}
	sendString(" ] ");

	sprintf(percentage, "%d", GPT1_getBrightness());
	sendString(percentage);
	sendString("% ");

	
	return;
}

void menu_chooseAnimation(void) {
	sendString("ANIMATION SELECT");
}

void setColour(char foreground, char background){
	ASC0_vSendData(27);
	sendString("[3");
	ASC0_vSendData(foreground);
	ASC0_vSendData(27);
	sendString("[4");
	ASC0_vSendData(background);

}

void resetEmulator(void) {
	sendString("\r\n\t\r\n\t");
	while(ASC0_cReadyToTransmit() == -1){}
	ASC0_vSendData(27);
	sendString("[2J");
	while(ASC0_cReadyToTransmit() == -1){}
	ASC0_vSendData(27);
	sendString("[H");

	/*sendNL();
	sendString("---------------");
	sendNL();*/
}

void sendString(char *msg) {
	unsigned char oi;
	for(oi = 0;oi<strlen(msg);oi++) {
		while(ASC0_cReadyToTransmit() == -1){}
		ASC0_vSendData(msg[oi]);		
	}
}

void sendNL(void) {
	sendString("\r\n\t");
}

int waitForCharInput(void) {
	int in;
	while(ASC0_cReadyToReceive() == -1) {}
	//ASC0_vSendData('x');
	in = ASC0_uwGetData();
	IO_vWritePort(P2, 0xFFFF);
	
	return in;
}

int waitForDirectionInput(void) {
	int in;
	char loop_break = 0;
	while(loop_break == 0){
		in = waitForCharInput();
		if(in == 'A' || in == 'B' || in == 'C' || in == 'D' || in == 0xD || in == 0xA) return in;
	}
	return in;
}

