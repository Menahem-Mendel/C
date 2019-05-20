/*
	напишите программу для вывода гистораммы длин слов во входном потоке с горизонтальными столбцами
*/

#include <stdio.h>

int main()
{
	int input,
		previous_input;

	while ((input = getchar()) != EOF)
	{
		if (input == ' ' || input == '\n' || input == '\t')
		{
			if (previous_input != ' ' && previous_input != '\t')
				putchar('\n');
		}
		else
			putchar('-');
		previous_input = input;
	}
	return 0;
}
