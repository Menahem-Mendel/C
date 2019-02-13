#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int input, num_line, num_word, num_char, state;

    state = OUT;
    num_line = num_char = num_word = 0;
    while ((input = getchar()) != EOF)
    {
        ++num_char;
        if (input == '\n')
            ++num_line;
        if (input == ' ' || input == '\n' || input == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++num_word;
        }
    }
    printf("%d %d %d\n", num_line, num_word, num_char);
    return 0;
}
