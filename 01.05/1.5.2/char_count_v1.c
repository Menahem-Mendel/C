#include <stdio.h>

int main()
{
    long num_char;

    num_char = 0;
    while (getchar() != EOF)
        ++num_char;
    printf("%ld\n", num_char);
    return 0;
}
