#include <stdio.h>
#include <limits.h>

int main()
{
    signed int a = INT_MAX;
    signed int b = INT_MIN;
    unsigned int c = UINT_MAX;
    signed long d = LONG_MAX;
    signed long e = LONG_MIN;
    unsigned long f = ULONG_MAX;
    signed short g = SHRT_MAX;
    signed short h = SHRT_MIN;
    unsigned short i = USHRT_MAX;
    signed char j = CHAR_MAX;
    signed char k = CHAR_MIN;
    unsigned char l = UCHAR_MAX;

    printf("max int = %25d,\nmin int = %25d,\nmax unsigned int = %16u,\nmax long = %24d,\nmin long = %24d,\nmax unsigned long = %15u,\nmax short = %18d,\nmin long = %19d,\nmax unsigned short = %9u,\nmax short = %16d,\nmin short = %16d,\nmax unsigned char = %8u.", a, b, c, d, e, f, g, h, i, j, k, l);

    return 0;
}
/*
    printf("min char %d\n",-(char)((unsigned char) ~0 >> 1) - 1);
    printf("max char %d\n",(char) ((unsigned char) ~0 >> 1));

    printf("min short %d\n",-(short)((unsigned short)~0 >>1) -1);
    printf("max short %d\n",(short)((unsigned short)~0 >> 1));

    printf("min int %d\n",-(int)((unsigned int)~0 >> 1) -1);
    printf("max int %d\n",(int)((unsigned int)~0 >> 1));

    printf("min long %ld\n",-(long)((unsigned long)~0 >>1) -1);
    printf("max long %ld\n",(long)((unsigned long)~0 >> 1));

    printf("max unsigned char %d\n",(unsigned char)~0);
    printf("max unsigned short %d\n",(unsigned short)~0);
    printf("max unsigned int %u\n",(unsigned int)~0);
    printf("max unsigned long %lu\n",(unsigned long)~0);
    */