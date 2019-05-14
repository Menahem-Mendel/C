#include <stdio.h>

unsigned int setbits(unsigned int, int, int, unsigned int);

int main(void)
{
	unsigned int x = 10,
				 y = 9,
				 p = 3,
				 n = 3;

	int z = setbits(x, p, n, y);
	printf("setbits(%u = 0x%x) = (%u = 0x%X)\n", x, x, z, z);
	return 0;
}

unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
	int shift = p - n + 1,
		mask = (1 << n) - 1;
	return (x & ~(mask << shift)) | ((y & mask) << shift);
}
