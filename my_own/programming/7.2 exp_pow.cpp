#include <iostream> // включение станартных библиотек
#include <cmath>
using namespace std;

#define E 2.71828285 // константа числа е

// объявление функций
long double expPow(long double, long double);

int main()
{
	// объявленные переменные
	long double epsilon; // точность вычисления
	long double x;		 // возведение в степень ...

	cout << "x = ";
	cin >> x;
	cout << "epsilon = ";
	cin >> epsilon;
	cout << "power e to ("
		 << x
		 << ") = "
		 << expPow(x, epsilon) // функция expPow
		 << "\n\texp("
		 << x
		 << ") = "
		 << exp(x) // стандартная функция
		 << endl;

	return 0;
}

// возвращает e^x
long double expPow(long double x, long double epsilon)
{
	// объявленные переменные (и определение некоторых)
	long double slog = 1.0; // слогаемое
	long double sum = 1.0;  // итоговое число
	long double n;			// от 0 -> ∞
	int counter = 0;		// счетчик

	for (n = 1.0; slog > epsilon; n += 1.0)
	{
		slog *= x / n; // x^n * x = x^(n+1), (n-1) * n = n! - формула n -> ∞ (x^n)/n!
		sum += slog;   // итог + слогаемое
		counter++;	 // счетчик + 1
	}
	cout << "counter = " << counter << endl;

	return sum;
}