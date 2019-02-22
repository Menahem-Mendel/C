#include <stdio.h>

int atoi(char *);

int main()
{
	char string[20] = "02570";

	printf("%d", atoi(string));
	return 0;
}

int atoi(char string[])
{
	int index, number;

	number = 0;
	for (index = 0; string[index] >= '0' && string[index] <= '9'; ++index)
		number = 10 * number + (string[index] - '0');
	return number;
}