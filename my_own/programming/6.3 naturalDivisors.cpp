#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "write number: ";
	cin >> n;
	cout << "the natural divisors of "
		 << n
		 << " is: "
		 << n
		 << " ";
	for (int i = n / 2; i > 0; i--)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}
	return 0;
}