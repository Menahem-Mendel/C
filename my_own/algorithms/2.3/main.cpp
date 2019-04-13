#include <iostream>
#include "declarations.hpp"

using namespace std;

int main()
{
	int action;
	double result;
	int input[SIZE];

	for (int i = 0; i < SIZE; i++)
		input[i] = 0;

	while (action != -1)
	{
		cout << "1. show stack elements\n"
			 << "2. write equation\n"
			 << "3. clear\n"
			 << "4. print the number of elements of the structure, the index of last element\n"
			 << "5. show result\n"
			 << "-1. exit\n"
			 << endl;

		cin >> action;

		switch (action)
		{
		case 1:
			get_elemnts();
			break;
		case 2:
		{
			for (int i = 0; input[i] != EOF; i++)
				cin >> input[i];
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
			cout << ((action != -1) ? "undefined error" : NULL) << endl;
			break;
		}
	}

	return 0;
}