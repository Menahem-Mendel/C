/*
	вавод таблицы температур по фаренгейту и цельсию
	перевод из фаренгейта в цельсий
*/

#include <stdio.h>

int main()
{
    int fahrenheit;

    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20)
        printf("%3d\t%6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32.0));
    return 0;
}
