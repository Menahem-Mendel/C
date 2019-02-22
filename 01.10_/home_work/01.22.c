#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 1000

int get_line(char[], int);
int fold(char[], int);

int main()
{
	int length;
	char line[MAXLINE];

	while ((length = get_line(line, MAXLINE)) > 0)
	{
		fold(line, length);
		printf("%s", line);
	}

	return 0;
}

int get_line(char string[], int limit)
{
	int input, index;

	for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; index++)
		string[index] = input;

	if (input == '\n')
		string[index++] = input;

	string[index] = '\0';

	return index;
}

int fold(char string[], int index)
{
	int i, enough;
	index--;
	enough = index;

	for (i = 49; i >= 0 && enough >= 50; i--, index--)
		string[i] = string[index];

	for (; index > 49; index--)
		string[index] = 0;

	return index;
}