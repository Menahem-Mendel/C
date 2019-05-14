#include <stdio.h>

int lower(int);

int main()
{
	printf("%c", lower('I'));
	return 0;
}

int lower(int input)
{
	return (input >= 'A' && input <= 'Z') ? input + 'a' - 'A' : input;
}
