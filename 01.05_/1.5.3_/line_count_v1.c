/*
	подсчет строк во входном потоке
*/

#include <stdio.h>

int main()
{
    int input, n_line;

    n_line = 0;
    while ((input = getchar()) != EOF)
        if (input == '\n')
            ++n_line;
    printf("%d\n", n_line);
    return 0;
}
