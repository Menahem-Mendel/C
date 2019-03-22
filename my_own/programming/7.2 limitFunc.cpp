#include <iostream>
#include <cmath>
using namespace std;

double ln(double, double);

int main()
{
	double epsilon, x;
	cout << "x = ";
	cin >> x;
	cout << "epsilon = ";
	cin >> epsilon;
	cout << "ln(" << x << ") = " << ln(x, epsilon) << endl;
	cout << log(x) << endl;
	return 0;
}

double ln(double x, double e)
{
	double X = x;
	int n = 1, counter = 0;
	while (abs(x - log(X)) > e)
	{
		x += 2 * (1 / (2 * n + 1) * pow((x - 1.0f / x + 1.0f), (2 * n + 1)));
		n++;
		counter++;
	}
	cout << "counter = " << counter << endl;
	return x;
}