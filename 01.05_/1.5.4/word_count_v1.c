/*
    подсчет цифр, 
    символов пустого пространства, 
    остальных
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int input,
        n_line,
        n_word,
        n_char,
        state;

    state = OUT;
    n_line = n_char = n_word = 0;

    while ((input = getchar()) != EOF)
    {
        ++n_char;

        if (input == '\n')
            ++n_line;

        if (input == ' ' || input == '\n' || input == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++n_word;
        }
    }

    printf("lines\t%10d\nwords\t%10d\ncharacters%8d\n", n_line, n_word, n_char);
    return 0;
}
