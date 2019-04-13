#include <iostream>
#include <cmath>
using namespace std;

#define E 2.71828285

double y(double);
void swap(double *, double *);

int main()
{
	double supX;
	double infX;
	double step;
	double x;

	cout << "write diapasone\nfrom: ";
	cin >> infX;
	cout << "to: ";
	cin >> supX;
	cout << "step: ";
	cin >> step;

	if (supX < infX)
		swap(&supX, &infX);

	for (x = infX; x <= supX; x += step)
		cout << "y("
			 << x
			 << ") = "
			 << y(x)
			 << endl;

	return 0;
}

double y(double x)
{
	if (-5.0 < x && x <= 1.0)
		return pow(x, -15.0);
	else if (1.0 < x && x < 2.0)
		return (sqrt(x) * sin(pow(x, 2.0)) - 1.3) / ((pow(x, (1.0 / 3.0)) + pow(E, 2.0 * x) + abs(cos(x))));

	return pow(x, 10.0f);
}

void swap(double *x, double *y)
{
	double temp = *x;
	*x = *y;
	*y = temp;
}