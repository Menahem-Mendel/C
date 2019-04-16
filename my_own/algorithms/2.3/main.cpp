#include <iostream>
#include "declarations.hpp"

using namespace std;

int main()
{
	int action = 0;
	double result;
	char input[SIZE];

	for (int i = 0; i < SIZE - 1; i++)
		input[i] = 0;

	do
	{
		cout << "1. show stack elements\n"
			 << "2. write equation\n"
			 << "3. clear\n"
			 << "4. print the number of elements of the structure, the index of last element\n"
			 << "5. show result\n"
			 << "0. exit\n"
			 << endl;

		cin >> action;

		switch (action)
		{
		case 1:
			get_elemnts();
			break;
		case 2:
		{
			cin >> input;
			equation(input);
			break;
		}
		case 3:
			clear();
			break;
		case 4:
			cout << get_sp() << " elements" << endl;
			break;
		case 5:
			cout << top() << endl;
			break;
		default:
			cout << "undefined error" << endl;
			break;
		}
	} while (action != 0);

	return 0;
}