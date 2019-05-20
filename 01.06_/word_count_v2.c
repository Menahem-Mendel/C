/*
    подсчет цифр, 
    символов пустого пространства, 
    остальных
*/

#include <stdio.h>

int main()
{
	int input,
		index,
		n_whitespace,
		n_other,
		n_digits[10];

	n_whitespace = n_other = 0;

	for (index = 0; index < 10; ++index)
		n_digits[index] = 0;

	while ((input = getchar()) != EOF)
		if (input >= '0' && input <= '9')
			++n_digits[input - '0'];
		else if (input == ' ' || input == '\n' || input == '\t')
			++n_whitespace;
		else
			++n_other;

	printf("digits =");

	for (index = 0; index < 10; ++index)
		printf(" %d", n_digits[index]);

	printf(", white space = %d, other = %d\n", n_whitespace, n_other);
	return 0;
}
