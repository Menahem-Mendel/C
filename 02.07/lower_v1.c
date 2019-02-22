#include <stdio.h>

int lower(int);

int main()
{
	printf("%d", lower('I'));
	return 0;
}

int lower(int input)
{
	if (input >= 'A' && input <= 'Z')
		return input + 'a' - 'A';
	else
		return input;
}