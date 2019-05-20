/*
	модифицируйте программу пруобоазования температур так, 
	чтобы она выводила заголовок над таблицей
*/

#include <stdio.h>

int main()
{
	float fahrenheit, // фаренгейт
		celsius;	  // цельсий

	int lower, // нижняя граница температур
		upper, // верхняя граница температур
		step;  // величина шага

	lower = 0;
	upper = 300;
	step = 20;
	fahrenheit = (float)lower;

	printf("-----title-----\n");
	while (fahrenheit <= upper)
	{
		celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);
		printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
		fahrenheit += step;
	}
	return 0;
}
