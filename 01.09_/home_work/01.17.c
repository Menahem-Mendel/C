/*
    напишите программу для вывода всех строк входного потока, имеющих длину более 80 символов
*/

#include <stdio.h>

#define MAXLENGTH 1000

int getstring(char[], int);

int main()
{
    int length;
    char string[MAXLENGTH];

    while ((length = getstring(string, MAXLENGTH)) >= 80)
        printf("%s", string);
    return 0;
}

int getstring(char string[], int limit)
{
    int input,
        index;

    for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
        string[index] = input;

    if (input == '\n')
        string[index++] = input;

    string[index] = '\0';
    return index;
}
