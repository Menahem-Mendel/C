/*
	напишите программу для вывода гистограммы частот, 
	с которыми встречаются во входном потоке различные символы
*/

#include <stdio.h>

int main()
{
	int input, index, max_value;
	int array[27];

	max_value = 0;
	for (index = 0; index < 27; index++)
		array[index] = 0;

	while ((input = getchar()) != EOF)
		if (input >= 'a' && input <= 'z')
			array[input - 'a']++;

		else if (input >= 'A' && input <= 'Z')
			array[input - 'A']++;

		else if (input != '\n' && input != '\t' && input != ' ')
			array[26]++;

	for (index = 0; index < 27; index++)
		if (array[index] > max_value)
			max_value = array[index];

	for (int letter = 'a'; letter <= 'z'; letter++)
		printf("%c ", letter);

	putchar('\n');

	for (; max_value > 0; max_value--)
	{
		for (index = 0; index < 27; ++index)
		{
			if (index > 0)
				putchar(' ');

			if (array[index] == max_value)
			{
				putchar('|');
				array[index]--;
			}
			else
				putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}
