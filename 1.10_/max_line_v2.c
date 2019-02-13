#include <stdio.h>
#define MAXLINE 1000

int max_line;
char line[MAXLINE];
char longest[MAXLINE];

int get_line(void);
void copy(void);

int main()
{
	int length;
	extern int max_line;
	extern char longest[];

	max_line = 0;
	while ((length = get_line()) > 0)
		if (length > max_line)
		{
			max_line = length;
			copy();
		}
	if (max_line > 0)
		printf("%s", longest);
	return 0;
}

int get_line(void)
{
	int input, index;
	extern char line[];

	for (index = 0; index < MAXLINE - 1 && (input = getchar()) != EOF && input != '\n'; ++index)
		line[index] = input;
	if (input == '\n')
	{
		line[index] = input;
		++index;
	}
	line[index] = '\0';
	return index;
}

void copy(void)
{
	int index;
	extern char line[], longest[];

	index = 0;
	while ((longest[index] = line[index]) != '\0')
		++index;
}
