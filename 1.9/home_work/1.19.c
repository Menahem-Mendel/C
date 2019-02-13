#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int get_line(char *, int);
void copy(char *, char *);
void reverse(char *, int);

int main()
{
	int length, max_line;
	char line[MAXLINE], longest[MAXLINE];

	max_line = 0;
	while ((length = get_line(line, MAXLINE)) > 0)
	{
		if (length > max_line)
		{
			max_line = length;
			copy(longest, line);
		}
		reverse(longest, max_line);
	}
	if (max_line > 0)
	{
		printf("%s", longest);
	}
	return 0;
}

int get_line(char string[], int limit)
{
	int input, index;
	for (index = 0; index < limit - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
		string[index] = input;
	if (input == '\n')
	{
		string[index] = input;
		++index;
	}
	string[index] = '\0';
	return index;
}

void copy(char to[], char from[])
{
	for (int index = 0; (to[index] = from[index]) != '\0'; ++index)
		;
}

void reverse(char string[], int limit)
{
	int temp;
	for (int index = 0, j = limit - 2; index < j; ++index, --j)
	{
		temp = string[index];
		string[index] = string[j];
		string[j] = temp;
	}
}