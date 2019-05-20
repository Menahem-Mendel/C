/*
	вавод таблицы температур по фаренгейту и цельсию
	перевод из цельсия в фаренгейт
*/

#include <stdio.h>

int main()
{
    float fahrenheit, // фаренгейт
        celsius;      // цельсий

    int lower, // нижняя граница температур
        upper, // верхняя граница температур
        step;  // величина шага

    lower = 0;
    upper = 100;
    step = 20;
    celsius = (float)lower;

    while (celsius <= upper)
    {
        fahrenheit = celsius * 9.0f / 5.0f + 32.0f;
        printf("%3.0f\t%6.1f\n", celsius, fahrenheit);
        celsius += step;
    }
    return 0;
}
