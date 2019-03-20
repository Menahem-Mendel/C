// this program needs to output
// the EOF = 0

#include <stdio.h>

int main()
{
	int input;

	while ((input = getchar()) != '~')
	{
		printf("%d, ", input != EOF);
	}
	return 0;
}
