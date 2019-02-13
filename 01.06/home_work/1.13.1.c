#include <stdio.h>

int main()
{
    int input, index, char_count;
    int array[100];

    char_count = 0;
    for (int index = 0; index < 100; index++)
        array[index] = 0;
    index = 0;

    while ((input = getchar()) != EOF)
    {
        if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
            char_count++;
        else
        {
            array[index++] = char_count;
            char_count = 0;
        }
    }

    for (index = 0; index < 100; ++index)
    {
        if (array[index] > 0 && index > 0)
            putchar('\n');
        for (; array[index] > 0; --array[index])
            putchar('-');
    }
    return 0;
}