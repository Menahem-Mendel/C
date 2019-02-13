#include <stdio.h>
void squezze(char *, int);

int main()
{
    int input;
    char string[20] = "hello, world";

    for (input = 'a'; input >= 'a' && input <= 'z'; input++)
        squezze(string, input);

    printf("%s", string);
    return 0;
}

void squezze(char string[], int symbols)
{
    int index, j;

    for (index = j = 0; string[index] != '\0'; ++index)
        if (string[index] != symbols)
            string[j++] = string[index];

    string[j] = '\0';
}