#include <stdio.h>

#define MAXLINE 1000

int comRemove(char[], int);
int get_line(char[], int);
void copy(char[], char[]);


int main()
{
	int length;
	char line[MAXLINE];

	while ((length = get_line(line, MAXLINE)) > 0)
	{
		comRemove(line, length);
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

int comRemove(char line[], int end)
{
	int i, com, j;
	com = j = 0;

	char new_line[MAXLINE];

	for (i = 0; i < end - 1; i++)
	{
		if (line[i] == '*' && line[i - 1] == '/')
		{
			com = 1;
		}
		else if (line[i] == '/' && line[i - 1] == '*')
		{
			com = 0;
		}

		if (com != 0)
			new_line[j++] = line[i];
	}
	copy(new_line, line);

	return i;
}

void copy(char from[], char to[])
{
	int i;
	for (i = 0; (to[i] = from[i]) != EOF; i++)
		;
}