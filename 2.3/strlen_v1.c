#include <stdio.h>

int strlen(char *);

int main()
{
    char string[20] = "hello, world";

    printf("%d", strlen(string));
    return 0;
}

int strlen(char string[])
{
    int index;

    index = 0;
    while (string[index] != '\0')
        ++index;
    return index;
}