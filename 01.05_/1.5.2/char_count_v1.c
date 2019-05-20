/*
	подсчет символов во входном потоке
*/

#include <stdio.h>

int main()
{
	long n_char;

	n_char = 0;

	while (getchar() != EOF)
		++n_char;

	printf("%ld\n", n_char);
	return 0;
}
