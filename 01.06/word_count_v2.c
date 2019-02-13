#include <stdio.h>

int main()
{
    int input, index, num_white_space, num_other;
    int num_digit[10];

    num_white_space = num_other = 0;
    for (index = 0; index < 10; ++index)
        num_digit[index] = 0;

    while ((input = getchar()) != EOF)
        if (input >= '0' && input <= '9')
            ++num_digit[input - '0'];
        else if (input == ' ' || input == '\n' || input == '\t')
            ++num_white_space;
        else
            ++num_other;

    printf("digits =");
    for (index = 0; index < 10; ++index)
        printf(" %d", num_digit[index]);
    printf(", white space = %d, other = %d\n", num_white_space, num_other);

    return 0;
}
