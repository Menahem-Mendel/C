#include <stdio.h>
void squezze(char *, char *);

int main()
{
    int index;
    char string1[20] = "hello, world\0";
    char string2[20] = "h\0";

    squezze(string1, string2);

    printf("%s", string1);
    return 0;
}

void squezze(char string1[], char string2[])
{
    int index, j;

    for (index = j = 0; index < 19; index++)
        if (string1[j] != string2[index])
            string1[j++] = string1[index];

    string1[j] = '\0';
}