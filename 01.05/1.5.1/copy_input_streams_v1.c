#include <stdio.h>

int main()
{
	int input;

	input = getchar();
	while (input != EOF)
	{
		putchar(input);
		input = getchar();
	}
	return 0;
}
