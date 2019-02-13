#include <stdio.h>

int main()
{
    int input, num_tab, num_backspace, num_backslash;

    num_tab = num_tab = num_backslash = 0;
    while ((input = getchar()) != EOF)
    {
        switch (input)
        {
        case '\t':
            printf("\\t");
            break;
        case '\b':
            putchar('\\');
            putchar('b');
            break;
        case '\\':
            printf("\\\\");
            break;
        default:
            putchar(input);
            break;
        }
    }
    return 0;
}