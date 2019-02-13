#include <stdio.h>
#define MAXLINE 1000
#define COLUMNS 8

void entab(char *);
void copy(char *, char *);

int main()
{
    int input, index;
    char string[MAXLINE];

    for (index = 0; index < MAXLINE - 1; index++)
        string[index] = 0;

    for (index = 0; (input = getchar()) != EOF; index++)
        string[index] = input;

    entab(string);
    printf("%s", string);

    return 0;
}

void entab(char str[])
{
    char new_string[MAXLINE];
    int index1, index2, num_space, position;

    index2 = num_space = 0;
    position = 1;

    for (index1 = 0; index1 < MAXLINE - 1; index1++)
        new_string[index1] = 0;

    for (index1 = 0; str[index1] != '\0'; index1++)
    {
        if (str[index1] == '\n')
        {
            new_string[index2++] = str[index1];
            position = 1;
        }
        else if (str[index1] == '_')
        {
            for (num_space = 0; str[index1] == '_'; index1++, position++)
            {
                num_space++;
                if (position % COLUMNS == 0)
                {
                    new_string[index2++] = '\t';
                    position = num_space = 0;
                }
            }
            index1--;
            for (; num_space > 0; num_space--)
            {
                new_string[index2++] = '_';
            }
        }
        else if (str[index1] == '\t')
        {
            new_string[index2++] = str[index1];
            position = 1;
        }
        else
        {
            new_string[index2++] = str[index1];
            position++;
        }
    }

    copy(str, new_string);
}

void copy(char to[], char from[])
{
    for (int index = 0; index < MAXLINE - 1; ++index)
        to[index] = 0;

    for (int index = 0; (to[index] = from[index]) != '\0'; ++index)
        ;
}