/*
	вавод таблицы температур по фаренгейту и цельсию
	перевод из фаренгейта в цельсий
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
    upper = 300;
    step = 20;
    fahrenheit = (float)lower;

    while (fahrenheit <= upper)
    {
        celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);
        printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }
    return 0;
}
