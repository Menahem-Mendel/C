// this program needs to output
// fahrenheit converted form the celsius

#include <stdio.h>

#define LOWER 0
#define UPPER 100
#define STEP 20

int main()
{
	int fahrenheit,
		celsius;

    celsius = LOWER;
    printf("-----table-----\n");
    while (celsius <= UPPER)
    {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%3d\t%6d\n", celsius, fahrenheit);
        celsius += STEP;
    }
    return 0;
}
