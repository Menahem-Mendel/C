#include <stdio.h>

int main()
{
    double num_char;

    for (num_char = 0; getchar() != EOF; ++num_char)
        ;
    printf("%.0f\n", num_char);
    return 0;
}
