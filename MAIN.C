#include "MAIN.H"
#include "ASC0.H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void homeScreen(void);
int waitForCharInput(void);

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
char transmitBuffer[1023];

void homeScreen(void) {

	int choice;
	
	const char *message = "\r\n\tWelcome to Light'o'matic 2000. Prepare for the most gripping PWM\r\n\texperience of your life.Prepare to have your mind blown.\r\n\r\n\tA\tChoose brightness\r\n\tB\tChoose animation\r\n\t\r\n\t";
	
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
	int i;
	sendString("BRIGHTNESS SELECT");
	for(i=0;i<0xFFFF;i++){;;;;;;;;;;;;;;;;;;;}
}

void menu_chooseAnimation(void) {
	int i;
	sendString("ANIMATION SELECT");
	for(i=0;i<0xFFFF;i++){;;;;}
}

void resetEmulator(void) {
	sendString("\r\n\t\r\n\t");
	while(ASC0_cReadyToTransmit() == -1){}
	ASC0_vSendData(27);
	sendString("[2J");
	while(ASC0_cReadyToTransmit() == -1){}
	ASC0_vSendData(27);
	sendString("[H");
}

void sendString(char *msg) {
	unsigned char oi;
	for(oi = 0;oi<strlen(msg);oi++) {
		while(ASC0_cReadyToTransmit() == -1){}
		ASC0_vSendData(msg[oi]);		
	}
}

int waitForCharInput(void) {
	int in;
	while(ASC0_cReadyToReceive() == -1) {}
	ASC0_vSendData('x');
	in = ASC0_uwGetData();
	IO_vWritePort(P2, 0xFFFF);
	
	return in;
}



