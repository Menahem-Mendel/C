// this program needs to output
// fahrenheit converted form the celsius

#include <stdio.h>

int main()
{
	int fahrenheit,
		celsius,
		lower,
		upper,
		step;

	lower = 0;
	upper = 300;
	step = 20;

	fahrenheit = lower;
	while (fahrenheit <= upper)
	{
		celsius = 5 * (fahrenheit - 32) / 9;
		printf("%d\t%d\n", fahrenheit, celsius);
		fahrenheit += step;
	}
	return 0;
}
