#include "MAIN.H"
#include "ASC0.H"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void homeScreen(void);

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
		/*ASC0_vSendData('e');
		IO_vWritePort(P2, 0xF077);
		for(i=0; i<0xFFFF; i++){}
		IO_vWritePort(P2, 0xF055);
		for(i=0; i<0xFFFF; i++){}*/
		homeScreen();
	}
	/*char *test="tB9";
	
	int index=0;
	
	unsigned int store;
	
	MAIN_vInit();
	IO_vWritePort(P2, 0x0F);
	ASC0_vReceiverOn();
	
	while(1)
	
	{
	
		
		while(ASC0_ubRxDataReady() == 0) {} //loop till the reciever is ready
		
		ASC0_vReceiverOn();
		
		IO_vWritePort(P2, 0x7575);
		
		store=ASC0_uwGetData();
		
		IO_vWritePort(P2, store);
		
		//*comp[index]=store;
		
		ASC0_vReceiverOff();
		
		if(store==0x0061) //checks the recieved data
		
		{
		
			while(ASC0_ubTxBufFree() == 0){} //Loop till the buffer is ready
		
			IO_vWritePort(P2, 0x5555);
			
			ASC0_vSendData(test[index]);
			
		}
		
		else
		
		{
							   
			while(ASC0_ubTxBufFree() == 0){}
			
			ASC0_vSendData(test[2]);
		
		}
	
	}
	  */

} // End of function main

void sendString(char *msg);
char transmitBuffer[1023];

void homeScreen(void) {

	char choice;

	const char *message = "\r\n\tWelcome to Light'o'matic 2000. Prepare for the most gripping PWM\r\n\texperience of your life.Prepare to have your tiny, \r\n\tinsignficant mind blown.\r\n\r\n\tA\tChoose brightness\r\n\tB\tChoose animation\r\n\t\r\n\t";

	sendString(message);
	choice = waitForCharInput();
	while(1){}
}

void sendString(char *msg) {
	unsigned char oi;
	for(oi = 0;oi<strlen(msg);oi++) {
		while(ASC0_vReadyToTransmit() == -1){}
		ASC0_vSendData(msg[oi]);		
	}
}

char waitForCharInput() {
	char in;

	return in;
}

char input_ready = -1;

char 

void ASC0_viRx(void) interrupt S0RINT
{
	IO_vWritePort(P2, ASC0_uwGetData());

} //  End of function ASC0_viRx


