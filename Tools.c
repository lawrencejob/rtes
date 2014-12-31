#include "MAIN.H"
#include <string.h>

char transmitBuffer[1023];

extern void setColour(char foreground, char background){
	ASC0_vSendData(27);
	sendString("[3");
	ASC0_vSendData(foreground);
	ASC0_vSendData(27);
	sendString("[4");
	ASC0_vSendData(background);

}

extern void resetEmulator(void) {
	sendString("\r\n\t\r\n\t");
	while(ASC0_cReadyToTransmit() == -1){}
	ASC0_vSendData(27);
	sendString("[2J");
	while(ASC0_cReadyToTransmit() == -1){}
	ASC0_vSendData(27);
	sendString("[H");
}

extern void sendString(char *msg) {
	unsigned char oi;
	for(oi = 0;oi<strlen(msg);oi++) {
		while(ASC0_cReadyToTransmit() == -1){}
		ASC0_vSendData(msg[oi]);		
	}
}

extern void sendNL(void) {
	sendString("\r\n\t");
}

extern int waitForCharInput(void) {
	int in;
	while(ASC0_cReadyToReceive() == -1) {}
	//ASC0_vSendData('x');
	in = ASC0_uwGetData();
	IO_vWritePort(P2, 0xFFFF);
	
	return in;
}

extern int waitForDirectionInput(void) {
	int in;
	char loop_break = 0;
	while(loop_break == 0){
		in = waitForCharInput();
		if(in == 'A' || in == 'B' || in == 'C' || in == 'D' || in == 0xD || in == 0xA) return in;
	}
	return in;
}