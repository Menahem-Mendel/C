// this program needs to output
// the EOF = -1

#include <stdio.h>

int main()
{
	int input;

	while ((input = getchar()) != EOF)
		printf("%d, ", input);
}
