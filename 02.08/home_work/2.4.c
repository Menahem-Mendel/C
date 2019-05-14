#include <stdio.h>
void squezze(char *, char *);
void copy(char *, char *);

int main()
{
	char string1[100] = "hello, world!";
	char string2[100] = "hekko";

	squezze(string1, string2);

	printf("%s", string1);
	return 0;
}

void squezze(char string1[], char string2[])
{
	int index, j, x = 0, c;
	char temp[100] = {0};

	for (index = 0; string1[index] != '\0'; index++)
	{
		c = 0;
		for (j = 0; string2[j] != '\0'; j++)
		{
			if (string1[index] == string2[j])
			{
				c = 1;
			}
		}
		if (c == 0)
		{
			temp[x++] = string1[index];
		}
	}

	for (index = 0; string1[index] != '\0'; index++)
	{
		string1[index] = '0';
	}
	copy(string1, temp);
}

void copy(char to[], char from[])
{
	for (int index = 0; (to[index] = from[index]) != '\0'; ++index)
		;
}
