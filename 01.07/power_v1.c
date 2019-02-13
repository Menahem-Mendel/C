#include <stdio.h>
#define MAXLINE 1000

int power(int, int);

int main()
{
    int index;

    for (index = 0; index < 10; ++index)
        printf("%d %d %d\n", index, power(2, index), power(-3, index));
    return 0;
}

int power(int x, int y)
{
    int index, power;

    power = 1;
    for (index = 1; index <= y; ++index)
        power *= x;
    return power;
}