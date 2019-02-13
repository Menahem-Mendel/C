#include <stdio.h>

int main()
{
    int input, num_line, num_tab, num_space;

    num_line = num_tab = num_space = 0;
    while ((input = getchar()) != EOF)
    {
        if (input == '\n')
            ++num_line;
        if (input == ' ')
            ++num_space;
        if (input == '\t')
            ++num_tab;
    }
    printf("%d, %d, %d\n", num_line, num_space, num_tab);
    return 0;
}
