#include "MAIN.H"
#include <string.h>

char transmitBuffer[1023];

void resetEmulator(void) {
	// send a few spaces in order to enhance compatibility with non-terminal emulators or those that do not support the clear-screen command
	sendString("\r\n\t\r\n\t");

	// wait until can send 
	while(ASC0_cReadyToTransmit() == -1){}

	// send byte '27', special command
	ASC0_vSendData(27);

	// send rest of special command to reset screen
	sendString("[2J");

	// wait until can send
	while(ASC0_cReadyToTransmit() == -1){}

	// send special command
	ASC0_vSendData(27);

	// send rest of special command to move cursor
	sendString("[H");
}

void sendString(char *msg) {
	unsigned char oi;

	// for every characer in the message
	for(oi = 0;oi<strlen(msg);oi++) {
		// while we're not ready to transmit, wait
		while(ASC0_cReadyToTransmit() == -1){}

		// send a single character
		ASC0_vSendData(msg[oi]);		
	}
}

// send a new line to the terminal emulator
void sendNL(void) {
	// \r - carriage return
	// \n - new line
	// \t - tab
	sendString("\r\n\t");
}

// pause the program flow and wait for a character
int waitForCharInput(void) {
	int in;

	// wait for the abstraction layer to tell us that an input is ready
	while(ASC0_cReadyToReceive() == -1) {}
	
	// put the new data into the buffer
	in = ASC0_uwGetData();

	// DEBUG: flash the LEDs to confirm reception
	IO_vWritePort(P2, 0xFFFF);
	
	// return the received word
	return in;
}

// pause the program flow and wait for a directional input or abort signal
int waitForDirectionInput(void) {
	// instantiate a buffer
	int in;

	// instantiate a flag to use to exit the otherwise indefinite loop - not used yet
	char loop_break = 0;

	// discard all inputs other than ABCD or enter or exit
	// ... this is because terminal emulators send these commands as a sequence of
	// command bytes starting with special symbols like '[[J' that we're not interested in
	while(loop_break == 0){
		
		// wait for the input and store it in a buffer
		in = waitForCharInput();

		// if it's one of the inputs we care about, end the function
		if(in == 'A' || in == 'B' || in == 'C' || in == 'D' || in == 0xD || in == 0xA) return in;
	}

	// not used yet
	return in;
}