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
    int power;

    for (power = 1; y > 0; --y)
        power *= x;
    return power;
}