// this program needs to output
// celsius converted form the fahrenheit

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fahrenheit;

    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit += STEP)
        printf("%3d\t%6.1f\n", fahrenheit, (5.0f / 9.0f) * (fahrenheit - 32.0f));
    return 0;
}
