#include <stdio.h>

#define SIZE 1000

int get_line(char[], int);
int check_for_comments(char[], int);
void remove_comments(char[]);

int main()
{
	char string[SIZE] = {0};
	int length;

	while ((length = get_line(string, SIZE)) > 0)
	{
		if (check_for_comments(string, length) != 0)
		{
			printf("cath\n");
			remove_comments(string);
		}
		printf("%s\n", string);
	}

	return 0;
}

/* 
	this function returns the index of string \0 char
*/
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

int check_for_comments(char string[], int limit)
{
	while (--limit >= 0)
		if (string[limit] == '/')
			if (string[limit + 1] == '*' || string[limit + 1] == '/')
				return 1;
	return 0;
}

#define IN 1
#define OUT 0
#define line_comment 1
#define block_comment_start 2
#define block_comment_close 3
int iscomment(int, int);

void remove_comments(char string[])
{
	int index;
	int j;
	int state;
	char temp[SIZE] = {0};

	state = OUT;

	for (index = j = 0; string[index] != '\0'; index++)
	{
		if (iscomment(string[index], string[index + 1]) == line_comment)
		{
			break;
		}
		else if (iscomment(string[index], string[index + 1]) == block_comment_start)
		{
			state = IN;
		}
		else if (iscomment(string[index], string[index + 1]) == block_comment_close)
		{
			state = OUT;
			index += 2;
		}

		if (state == OUT)
			temp[j++] = string[index];
	}
	for (index = 0; string[index] != '\0'; index++)
		string[index] = 0;

	for (index = 0; index < j; index++)
		string[index] = temp[index];
}

int iscomment(int a, int b)
{
	if (a == '/' && b == '/')
		return line_comment;
	if (a == '/' && b == '*')
		return block_comment_start;
	if (a == '*' && b == '/')
		return block_comment_close;
	return -1;
}
