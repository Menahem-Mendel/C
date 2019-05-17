#include <stdio.h>

int main()
{
    int input;

    while ((input = getchar()) != '~')
        if (input == EOF)
            printf("%d\n", input);
    return 0;
}
