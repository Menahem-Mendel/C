#include <stdio.h>

int any(char[], char[]);

int main()
{
	char string1[100] = "hello, world!";
	char string2[100] = "ekko";

	int x = any(string1, string2);

	printf("%d", x);
	return 0;
}

int anych(char, char);
int any(char string1[], char string2[])
{
	int index;
	int j;

	for (index = 0; string1[index] != '\0'; index++)
	{
		for (j = 0; string2[j] != '\0'; j++)
		{
			if (string1[index] == string2[j])
				return index;
		}
	}
	return -1;
}
