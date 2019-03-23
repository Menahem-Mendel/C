#include <iostream> // включение станартных библиотек
#include <cmath>
using namespace std;

#define E 2.71828285f // константа числа е

// объявление функций
double powEtoX(double, double);

int main()
{
	// объявленные переменные
	double epsilon; // точность вычисления
	double x;		// возведение в степень ...

	cout << "x = ";
	cin >> x;
	cout << "epsilon = ";
	cin >> epsilon;
	cout << "power e to ("
		 << x
		 << ") = "
		 << powEtoX(x, epsilon) // функция powEtoX
		 << "\n\texp("
		 << x
		 << ") = "
		 << exp(x) // стандартная функция
		 << endl;

	return 0;
}

// возвращает e^x
double powEtoX(double x, double epsilon)
{
	// объявленные переменные (и определение некоторых)
	double slog = 1.0f; // слогаемое
	double sum  = 1.0f;  // итоговое число
	double n;			// от 0 -> ∞
	int counter = 0;	// счетчик

	for (n = 1.0f; slog > epsilon; n += 1.0f)
	{
		slog *= x / n; // x^n * x = x^(n+1), (n-1) * n = n! - формула n -> ∞ (x^n)/n!
		sum  += slog;   // итог + слогаемое
		counter++;	 // счетчик + 1
	}
	cout << "counter = " << counter << endl;

	return sum;
}