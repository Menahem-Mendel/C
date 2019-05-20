/*
	напишите программу для подсчета пробелов, 
	знаков табуляции и символов конца строки
*/

#include <stdio.h>

int main()
{
	int input,
		n_line,
		n_tab,
		n_space;

	n_line = n_tab = n_space = 0;

	while ((input = getchar()) != EOF)
		if (input == '\n')
			++n_line;
		else if (input == ' ')
			++n_space;
		else if (input == '\t')
			++n_tab;

	printf("%d\t%d\t%d\n", n_line, n_space, n_tab);
	return 0;
}
