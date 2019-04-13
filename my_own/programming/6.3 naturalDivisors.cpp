#include <iostream>
using namespace std;

int main()
{
	unsigned long n;

	cout << "write number: ";
	cin >> n;
	cout << "the natural divisors of "
		 << n
		 << " is: "
		 << n
		 << " ";

	for (int i = n / 2; i > 0; i--)
		if (!(n % i))
			cout << i << " ";

	return 0;
}