#include <stdio.h>
float converter(float celsius);

int main()
{
    float fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;
    while (fahrenheit <= upper)
    {
        printf("%3.0f\t%6.1f\n", fahrenheit, converter(fahrenheit));
        fahrenheit += step;
    }
    return 0;
}

float converter(float fahrenheit)
{
    float celsius;
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
    return celsius;
}
