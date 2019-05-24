/*
    тестирование power функциивозводения в степень
*/

#include <stdio.h>
#define MAXLINE 1000

int power(int, int);

int main()
{
    int i_n;

    for (i_n = 0; i_n < 10; ++i_n)
        printf("%d\t%3d\t%6d\n", i_n, power(2, i_n), power(-3, i_n));
    return 0;
}

// функция power возводит x в степень n
int power(int x, int n)
{
    int index,
        power;

    power = 1;

    for (index = 1; index <= n; ++index)
        power *= x;
    return power;
}
