#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// parity
int main(void)
{
	uint8_t data = 39;

	uint8_t par = 0;

	for (size_t i = 0; i < 8; i++)
	{
		par = par ^ (data & 1);
		data >>= 1;
	}

	printf("parity: %s\n", par ? "True (1)" : "False (0)");
	

	return 0;
}