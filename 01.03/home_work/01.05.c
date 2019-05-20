/*
    доработайте программу преобразования температур так, 
    чтобы она выводила таблицу в обратном порядке, т.е. от 300 градусов до нуля
*/

#include <stdio.h>

int main()
{
    int fahrenheit;

    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20)
        printf("%3d\t%6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
    return 0;
}
