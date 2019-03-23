#include <iostream>
#include <cmath>
using namespace std;

#define E 2.71828285f

double y(double x);

int main()
{
	double supX, infX, step, x;

	cout << "write diapasone from: ";
	cin >> infX;
	cout << "to: ";
	cin >> supX;
	cout << "step: ";
	cin >> step;

	x = infX;
	for (; x <= supX; x += step)
	{
		cout << "y(" << x << ") = " << y(x) << endl;
	}
	return 0;
}

double y(double x)
{
	if (-5.0f < x && x <= 1.0f)
		return pow(x, -15.0f);
	else if (1.0f < x && x < 2.0f)
		return (sqrt(x) * sin(pow(x, 2.0f)) - 1.3f) / ((pow(x, (1.0f / 3.0f)) + pow(E, 2.0f * x) + abs(cos(x))));
	else
		return pow(x, 10.0f);
	return 1;
}