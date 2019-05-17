#include <stdio.h>

int main()
{
	int input;

	while ((input = getchar()) != EOF)
		switch (input)
		{
		case '\t':
			printf("\\t");
			break;
		case '\b':
			printf("\\b");
			break;
		case '\\':
			printf("\\\\");
			break;
		default:
			putchar(input);
			break;
		}

	return 0;
}
