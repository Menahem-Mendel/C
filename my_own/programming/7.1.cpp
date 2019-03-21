#include <iostream>
using namespace std;

float y(float x);

int main()
{
	float supX, infX, step, x;

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

float y(float x)
{
	if (x < 0.0f)
		return x * -1.0f;
	return x * x;
}