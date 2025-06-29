#include "crc.h"

uint16_t crc16(char* pData, int length)
{
	uint8_t i;
	uint16_t wCrc = 0xffff;
	while (length--) {
		wCrc ^= *(unsigned char *)pData++ << 8;
		for (i=0; i < 8; i++)
			wCrc = wCrc & 0x8000 ? (wCrc << 1) ^ 0x1021 : wCrc << 1;
	}
	return wCrc & 0xffff;
}

uint8_t calculateBCC(uint32_t serial)
{
	return ((serial >> 24) & 0xff) ^ ((serial >> 16) & 0xff) ^ ((serial >> 8) & 0xff) ^ (serial & 0xff);
}