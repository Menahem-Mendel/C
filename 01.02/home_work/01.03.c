// this program needs to output
// fahrenheit converted form the celsius

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	float fahrenheit,
		celsius;

	fahrenheit = LOWER;
	printf("-----table-----\n");
	while (fahrenheit <= UPPER)
	{
		celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
		printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
		fahrenheit += STEP;
	}
	return 0;
}
