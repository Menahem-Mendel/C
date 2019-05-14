#include <stdio.h>
void str_cat(char[], char[]);

int main()
{
	char string1[100] = "hello, world";
	char string2[100] = "hhhhhhh";

	str_cat(string1, string2);

	printf("%s", string1);
	return 0;
}

void str_cat(char string1[], char string2[])
{
	int index, j;
	index = j = 0;

	while (string1[++index] != '\0')
		;
	while ((string1[index++] = string2[j++]) != '\0')
		;
}
