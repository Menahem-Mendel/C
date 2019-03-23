#include <iostream>
#include <cmath>
using namespace std;

#define E 2.71828285f

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
	if (-5.0f < x && x <= 1.0f)
		return pow(x, -15.0f);
	else if (1.0f < x && x < 2.0f)
		return (sqrt(x) * sin(pow(x, 2.0f)) - 1.3f) / ((pow(x, (1.0f / 3.0f)) + pow(E, 2.0f * x) + abs(cos(x))));

	return pow(x, 10.0f);
}

void swap(double *x, double *y)
{
	double temp = *x;
	*x = *y;
	*y = temp;
}