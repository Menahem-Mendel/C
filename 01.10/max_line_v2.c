/*
	вывод самой длинной строки в потоке
*/

#include <stdio.h>

#define MAXLENGTH 1000

int max_string;
char string[MAXLENGTH];
char longest[MAXLENGTH];

int getstring(void);
void copy(void);

int main()
{
	int length;
	extern int max_string;
	extern char longest[];

	max_string = 0;

	while ((length = getstring()) > 0)
		if (length > max_string)
		{
			max_string = length;
			copy();
		}

	if (max_string > 0)
		printf("%s", longest);
	return 0;
}

int getstring(void)
{
	int input, index;
	extern char string[];

	for (index = 0; index < MAXLENGTH - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
		string[index] = input;

	if (input == '\n')
	{
		string[index] = input;
		++index;
	}

	string[index] = '\0';
	return index;
}

void copy(void)
{
	int index;
	extern char string[], longest[];

	index = 0;

	while ((longest[index] = string[index]) != '\0')
		++index;
}
