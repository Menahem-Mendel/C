#include <iostream>
#include <ctime>
using namespace std;

#define SIZE 10

int ToArray(int[]);
int PrintArray(int[]);
int MaxToFirst(int[]);
int SwapMaxToFirst(int, int[]);

int main()
{
	int array[SIZE];

	ToArray(array);
	PrintArray(array);
	MaxToFirst(array);
	PrintArray(array);
}

int ToArray(int array[])
{
	int random;
	int i;

	srand(time(0));

	for (i = 0; i < SIZE; i++)
	{
		random = rand() % 100;
		array[i] = random;
	}

	return 0;
}

int PrintArray(int array[])
{
	int i;
	cout << "\n";
	for (i = 0; i < SIZE; i++)
		cout << array[i] << " ";

	return 0;
}

int MaxToFirst(int array[])
{
	int max = 0;
	int i;

	for (i = 0; i < SIZE; i++)
		if (array[i] > array[max])
			max = i;

	SwapMaxToFirst(max, array);

	return 0;
}

int SwapMaxToFirst(int max, int array[])
{
	int temp = array[0];
	array[0] = array[max];
	array[max] = temp;

	return 0;
}