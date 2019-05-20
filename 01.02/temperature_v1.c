/*
	вавод таблицы температур по фаренгейту и цельсию
	перевод из фаренгейта в цельсий
*/

#include <stdio.h>

int main()
{
	int fahrenheit, // фаренгейт
		celsius,	// цельсий
		lower,		// нижняя граница температур
		upper,		// верхняя граница температур
		step;		// величина шага

	lower = 0;
	upper = 300;
	step = 20;
	fahrenheit = lower;

	while (fahrenheit <= upper)
	{
		celsius = 5 * (fahrenheit - 32) / 9;
		printf("%3d\t%6d\n", fahrenheit, celsius);
		fahrenheit += step;
	}
	return 0;
}
