/*
    напишите программу для вывода входного потока по одному слову в строке
*/

#include <stdio.h>

int main()
{
    int input;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ')
            putchar('\n');
        else
            putchar(input);
    }
    return 0;
}
