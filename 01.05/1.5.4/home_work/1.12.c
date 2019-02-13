#include <stdio.h>

int main()
{
    int input;

    while ((input = getchar()) != EOF)
    {
        putchar(input);
        putchar('\n');
    }
    return 0;
}
