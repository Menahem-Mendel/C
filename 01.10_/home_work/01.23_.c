#include <stdio.h>

#define SIZE 100

void inputStr(char[]);
void deleteComments(char[]);
void swap(char[], char[]);

int main()
{
	char string[SIZE];
	int index;

	inputStr(string);
	deleteComments(string);

	printf("%s", string);

	return 0;
}

void inputStr(char str[])
{
	int i;
	int input;

	for (i = 0; i < SIZE - 1 && (input = getchar()) != EOF && input != '\n'; i++)
		str[i] = input;

	if (input == '\n')
		str[i++] = input;

	str[i] = '\0';
}

void deleteComments(char str[])
{
	int i;
	int j = 0;
	char str2[SIZE];

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == '/' && str[i + 1] == '*') || (str[i] != '*' && str[i - 1] != '/'))
			;
		else
			str2[j++] = str[i];
	}

	swap(str, str2);
}

void swap(char str[], char str2[])
{
	int i;
	for (i = 0; (str[i] = str2[i]) != '\0'; i++)
		;
}