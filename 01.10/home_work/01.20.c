#include <stdio.h>
#define MAXLINE 1000
#define COLUMNS 8

void detab(char *);
void copy(char *, char *);

int main()
{
	int input, index, position = 0;
	char string[MAXLINE];

	for (index = 0; index < MAXLINE - 1; index++)
		string[index] = 0;

	for (index = 0; (input = getchar()) != EOF; index++)
		string[index] = input;

	detab(string);
	printf("%s", string);

	return 0;
}

void detab(char str[])
{
	char new_string[MAXLINE];
	int position = 0, index1, index2;

	for (index1 = 0; index1 < MAXLINE - 1; index1++)
		new_string[index1] = 0;

	for (index1 = 0; str[index1] != '\0'; index1++, index2++)
	{
		if (str[index1] == '\n')
		{
			new_string[index2] = str[index1];
			position = 0;
		}
		else if (str[index1] == '\t')
		{
			for (int tab_length = COLUMNS - (position % COLUMNS), index2 = 0; tab_length > 0; tab_length--, index2++)
				new_string[index2] = '_';
			index2--;

			position = 0;
		}
		else
		{
			new_string[index2] = str[index1];
			++position;
		}
	}

	copy(str, new_string);
}

void copy(char to[], char from[])
{
	for (int index = 0; to[index] != '\0'; ++index) // проверить
		to[index] = 0;

	for (int index = 0; (to[index] = from[index]) != '\0'; ++index)
		;
}