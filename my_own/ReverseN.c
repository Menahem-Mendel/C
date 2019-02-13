#include <stdio.h>

unsigned long reverse1(unsigned long);
unsigned long reverse2(unsigned long);

int main()
{
    unsigned long number1, number2;
    number1 = number2 = 12345;

    printf("%lu\n", reverse1(number1));
    printf("%lu", reverse2(number2));

    return 0;
}

unsigned long reverse1(unsigned long number)
{
    static unsigned long reverse = 0;

    while (number != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + number % 10;
        number = number / 10;
    }

    return reverse;
}

unsigned long reverse2(unsigned long number)
{
    static unsigned long reverse = 0;

    if (number != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + number % 10;
        reverse2(number / 10);
    }
    else
        return 1;

    return reverse;
}