#include <stdio.h>

unsigned int getbits(unsigned int, int, int);

int main(void)
{
    int x = 0xF994, p = 4, n = 3;
    int z = getbits(x, p, n);

    printf("getbits(%u = 0x%x, %d, %d) = (%u = 0x%X)\n", x, x, p, n, z, z);

    return 0;
}

unsigned int getbits(unsigned int x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}