#include <stdio.h>
void squezze(char *, char *);

int main()
{
    int index;
    char string1[20] = "hello, world";
    char string2[20] = "h";

    squezze(string1, string2);

    printf("%s", string1);
    return 0;
}

void squezze(char string1[], char string2[])
{
    int index, j;
    index = j = 0;

    for (; index < 19; ++index)
        if (string1[j] == string2[index])
            string1[j++] = '0';

    string1[j] = '\0';
}