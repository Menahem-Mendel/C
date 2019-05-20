/*
	подсчет символов во входном потоке
*/

#include <stdio.h>

int main()
{
    double n_char;

    for (n_char = 0.0; getchar() != EOF; ++n_char)
        ;

    printf("%.0f\n", n_char);
    return 0;
}
