// this program needs to output
// fahrenheit converted form the celsius

#include <stdio.h>

int main()
{
    int fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 20;

    celsius = lower;
    printf("    table\n");
    while (celsius <= upper)
    {
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%3d\t%6d\n", celsius, fahrenheit);
        celsius += step;
    }
    return 0;
}
