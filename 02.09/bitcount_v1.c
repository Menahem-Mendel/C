#include <stdio.h>

unsigned int bitcount(unsigned);

int main(void)
{
	int x = 0xF994;
	int z = bitcount(x);

	printf("getbits(%u = 0x%x) = (%u = 0x%X)\n", x, x, z, z);

	return 0;
}

unsigned int bitcount(unsigned x)
{
	int b;

	for (b = 0; x != 0; x >>= 1)
		if (x & 01)
			b++;

	return b;
}