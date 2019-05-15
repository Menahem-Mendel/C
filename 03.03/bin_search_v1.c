#include <stdio.h>

int main()
{
	return 0;
}

int binsearch(int x, int v[], int n)
{
	int low,
		high,
		mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1; // hello
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
