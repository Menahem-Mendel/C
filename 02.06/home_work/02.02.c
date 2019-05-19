#include <stdio.h>
#define MAXLINE 1000

int get_line(char *, int);
void copy(char *, char *);

int main()
{
    int length, max_line;
    char line[MAXLINE], longest[MAXLINE];

    max_line = 0;
    while ((length = get_line(line, MAXLINE)) > 0)
    {
        if (length > max_line)
        {
            max_line = length;
            copy(longest, line);
        }
    }
    if (max_line > 0)
        printf("%s", longest);
    return 0;
}

int get_line(char string[], int limit)
{
    int index, input;

    for (index = 0; index < limit - 1; ++index)
    {
        input = getchar();
        if (input == EOF)
            break;
        if (input == '\n')
            break;
        string[index] = input;
    }

    if (input == '\n')
    {
        string[index] = input;
        ++index;
    }

    string[index] = '\0';
    return index;
}

void copy(char to[], char from[])
{
    for (int index = 0; (to[index] = from[index]) != '\0'; ++index)
        ;
}
