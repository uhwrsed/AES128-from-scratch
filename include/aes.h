#include <stdint.h>
#ifndef AES_H
#define AES_H

typedef struct {
	uint8_t bytes[4][4];
} aes_state;

void subBytes(aes_state *state);
void shiftRows(aes_state *state);
void mixColumns(aes_state *state);

#endif
