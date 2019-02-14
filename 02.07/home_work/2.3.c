#include <stdio.h>

#define YES 1
#define NO 0

int htoi(char string[]);

int main(void)
{
    char hex[5] = "0xff";

    printf("%s = %d", hex, htoi(hex));
    return 0;
}

int htoi(char string[])
{
    int hex, index, in, number;
    index = number = 0;
    in = YES;

    if (string[index] == '0')
    {
        index++;
        if (string[index] == 'x' || string[index] == 'X')
            index++;
    }

    for (; in == YES; ++index)
    {
        if (string[index] >= '0' && string[index] <= '9')
            hex = string[index] - '0';
        else if (string[index] >= 'a' && string[index] <= 'f')
            hex = string[index] - 'a' + 10;
        else if (string[index] >= 'A' && string[index] <= 'F')
            hex = string[index] - 'A' + 10;
        else
            in = NO;

        if (in == YES)
            number = 16 * number + hex;
    }
    return number;
}