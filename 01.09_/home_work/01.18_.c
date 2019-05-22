/*
	напишите программу для удаления лишних пробелов и табуляций в хвосте каждой поступающей строки входного потока, 
	которая бы также удаляла полностью пустые строки.
*/

#include <stdio.h>

#define MAXSTRING 1000

int getstring(char[], int);
void r_whitespace(char[]);

int main()
{
	int length;
	char line[MAXSTRING];

	while ((length = getstring(line, MAXSTRING)) > 0)
	{
		r_whitespace(line);
		printf("%s", line);
	}
	return 0;
}

int getstring(char string[], int limit)
{
	int input,
		index;

	for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
		string[index] = input;

	if (input == '\n')
		string[index++] = input;

	string[index] = '\0';
	return index;
}

void r_whitespace(char string[])
{
	int index;

	for (index = 0; string[index] != '\n'; index++)
		;

	while (string[index] == '_' || string[index] == '\t' || string[index] == '\n')
		index--;

	string[++index] = '\n';
	string[++index] = '\0';
}
