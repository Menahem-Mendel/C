#include <stdio.h>

int main()
{
    int input, index, char_count, max_value;
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
            if (char_count > max_value)
                max_value = char_count;
            array[index++] = char_count;
            char_count = 0;
        }
    }

    for (; max_value > 0; max_value--)
    {
        for (index = 0; index < 100; ++index)
            if (array[index] == max_value)
            {
                putchar('|');
                array[index]--;
            }
            else
                putchar(' ');
        putchar('\n');
    }
    return 0;
}