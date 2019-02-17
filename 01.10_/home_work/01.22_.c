#include <stdio.h>

#define MAXLINE 1000

int get_line(char[], int);
void fold(char[], int);

int main()
{
    int length;
    char line[MAXLINE];

    while ((length = get_line(line, MAXLINE)) > 0)
        fold(line, length);

    return 0;
}

int get_line(char string[], int limit)
{
    int input, index;

    for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; index++)
        string[index] = input;

    if (input == '\n')
        string[index++] = input;

    string[index] = '\0';

    return index;
}

void fold(char string[], int index)
{
    int i, j;
    for (i = index - 50, j = 0; i < index - 1; index++, j++)
        string[j] = string[i];
}
