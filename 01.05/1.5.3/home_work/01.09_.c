#include <stdio.h>

#define OUT 0
#define IN 1

int main()
{
	int input, num_space, state;

	num_space = 0;
	state = OUT;
	while ((input = getchar()) != EOF)
		if (input != '\n')
		{
			if (input != '_')
			{
				state = IN;
				while (num_space > 0)
				{
					putchar('_');
					--num_space;
				}
				putchar(input);
			}
			else if (state == IN)
				putchar('_');
			else
				++num_space;
		}
		else
		{
			if (num_space > 0)
				putchar('_');
			num_space = 0;
			state = OUT;
		}
	return 0;
}
