#include <stdio.h>

#define SIZE 1000
#define IN 1
#define OUT 0

int get_line(char[], int);
int inbackets(char[]);
int inbraces(char[]);
int inquotes(char[]);
int check(char[]);

int state;

int main()
{
	char string[SIZE] = {0};
	int length;
	state = IN;

	while ((length = get_line(string, SIZE)) > 0)
	{
		check(string);
	}
	if (state == OUT)
	{
		printf("Error");
	}

	return 0;
}

int get_line(char string[], int limit)
{
	int index;
	int input;

	index = input = 0;

	while (index < limit && (input = getchar()) != EOF)
	{
		string[index++] = input;
		if (input == '\n')
			break;
	}
	string[index] = '\0';
	return index;
}

int check(char string[])
{

	int backets;
	int braces;
	int quotes;
	quotes = braces = backets = 0;
	if ((backets = inbackets(string)) > 0)
	{

		if (state == IN)
			state = OUT;
	}

	if ((braces = inbraces(string)) > 0)
	{
		if (state == IN)
			state = OUT;
	}

	if ((quotes = inquotes(string) % 2) != 0)
	{
		if (state == IN)
			state = OUT;
	}
	return IN;
}

int inbackets(char string[])
{
	int index;
	int count;
	count = 0;
	for (index = 0; string[index] != '\0'; index++)
	{
		if (string[index] == '(')
		{
			count++;
		}
		else if (string[index] == ')')
		{
			count--;
		}
	}
	return count;
}

int inbraces(char string[])
{
	int index;
	int count;
	count = 0;
	for (index = 0; string[index] != '\0'; index++)
	{
		if (string[index] == '{')
		{
			count++;
		}
		else if (string[index] == '}')
		{
			count--;
		}
	}
	return count;
}

int inquotes(char string[])
{
	int index;
	int count;
	count = 0;
	for (index = 0; string[index] != '\0'; index++)
	{
		if (string[index] == '"')
		{
			count++;
		}
	}
	return count;
}
