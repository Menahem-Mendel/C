#include <stdio.h>

unsigned long reverse(unsigned long);
unsigned long reverseR(unsigned long);

int main()
{
	unsigned long number;

	number = 123456789L;

	printf("%lu\n", reverse(number));
	printf("%lu ", reverseR(number));

	return 0;
}

unsigned long reverse(unsigned long number)
{
	unsigned long reverse = 0L;

	while (number)
	{
		reverse *= 10L;
		reverse += number % 10L;
		number /= 10L;
	}

	return reverse;
}

unsigned long reverseR(unsigned long number)
{
	static unsigned long reverse = 0L;

	if (number)
	{
		reverse *= 10L;
		reverse += number % 10L;
		reverseR(number / 10L);
	}
	else
		return 1;

	return reverse;
}