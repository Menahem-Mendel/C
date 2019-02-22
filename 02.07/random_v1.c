#include <stdio.h>
#include <time.h>

int rand();
void srand(unsigned int);

unsigned long int next = 1;

int main()
{
	srand(time(NULL));
	printf("%d", rand());
	return 0;
}

int rand()
{
	next = next * 1103515245 + 123456;
	return (unsigned int)(next / 65536) % 32768;
}

void srand(unsigned int seed)
{
	next = seed;
}