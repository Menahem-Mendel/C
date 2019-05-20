/*
	проверьте, что выражение getchar() != EOF действительно равно 1 или 0
*/

#include <stdio.h>

int main()
{
	printf("%d", (getchar() != EOF));
	return 0;
}
