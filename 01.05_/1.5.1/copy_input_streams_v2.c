/*
	копирование входного потока в выходной
*/

#include <stdio.h>

int main()
{
	int input;

	while ((input = getchar()) != EOF)
		putchar(input);
	return 0;
}
