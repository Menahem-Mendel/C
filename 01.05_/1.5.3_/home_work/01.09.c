/*
	напишите программу для копирование входного потока в выходной с заменой каждой строки, 
	состоящей из одного или нескольких пробелов, 
	одним пробело
*/

#include <stdio.h>

int main(void)
{
	int input,
		previous_input;

	while ((input = getchar()) != EOF)
	{
		if (input == ' ')
		{
			if (previous_input != ' ')
				putchar(input);
		}
		else
			putchar(input);
		previous_input = input;
	}
	return 0;
}
