#include <stdio.h>

int main()
{
    int input, num_line;
    
    num_line = 0;
    while ((input = getchar()) != EOF)
        if (input == '\n')
            ++num_line;
    printf("%d\n", num_line);
    return 0;
}
