#include <stdio.h>
#define MAXLINE 1000

int getline(char *, int);
void copy(char *, char *);

int main()
{
	int length, max_line;
	char line[MAXLINE], longest[MAXLINE];

	max_line = 0;
	while ((length = getline(line, MAXLINE)) > 0)
		if (length > max_line)
		{
			max_line = length;
			copy(longest, line);
		}
	if (max_line > 0)
		printf("%s", longest);
	return 0;
}

int getline(char string[], int limit)
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
