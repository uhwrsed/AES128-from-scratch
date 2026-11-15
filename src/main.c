#include <stdio.h>
#include "../include/aes.h"

int main(){
	aes_state state = {
    		.bytes = {
        		{0x00, 0x04, 0x08, 0x0C},
        		{0x01, 0x05, 0x09, 0x0D},
        		{0x02, 0x06, 0x0A, 0x0E},
        		{0x03, 0x07, 0x0B, 0x0F}
    		}
	};

	subBytes(&state);
	shiftRows(&state);
	mixColumns(&state);
	
	for (int row = 0; row < 4; row++){
		for (int col = 0; col < 4; col++){
			printf("%02X ", state.bytes[row][col]);
		}
		printf("\n");
	}	

	return 0;
}
