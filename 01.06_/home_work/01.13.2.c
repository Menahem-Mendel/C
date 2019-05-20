/*
	напишите программу для вывода гистораммы длин слов во входном потоке с вертикальными столбцами
*/

#include <stdio.h>

int main()
{
	int input,
		previous_input,
		i_words,
		max_word_l,
		index,
		words[20];

	max_word_l = 0;

	for (index = 0; index < 20; ++index)
		words[index] = 0;

	for (i_words = 0; (input = getchar()) != EOF;)
	{
		if (input == ' ' || input == '\n' || input == '\t')
		{
			if (max_word_l < words[i_words])
				max_word_l = words[i_words];

			if (previous_input != ' ' && previous_input != '\t')
				i_words++;
		}
		else
			words[i_words]++;

		previous_input = input;
	}

	while (max_word_l > 0)
	{
		for (index = i_words - 1; index >= 0; index--)
			if (words[index] == max_word_l)
			{
				putchar('|');

				words[index]--;
			}
			else
				putchar(' ');

		putchar('\n');

		max_word_l--;
	}

	return 0;
}
