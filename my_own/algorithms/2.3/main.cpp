#include <iostream>
#include "declarations.hpp"

using namespace std;

int main()
{
	int action;
	double result;
	char str[SIZE];

	do
	{
		cout << "1. show stack elements\n"
			 << "2. write equation\n"
			 << "3. clear\n"
			 << "4. print the number of elements of the structure, the index of the first and last element\n"
			 << "5. show result\n"
			 << "-1. exit"
			 << endl;

		cin >> action;

		switch (action)
		{
		case 1:
			get_elemnts();
			break;
		case 2:
		cin >> str;
			writeIn(str);
			break;
		case 3:
			clear();
			break;
		case 4:
			cout << top() << endl;
			break;
		case 5:
			cout << top() << endl;
			break;
		default:
			cout << ((action != -1) ? "undefined error" : NULL) << endl;
			break;
		}

	} while (action != -1);

	return 0;
}