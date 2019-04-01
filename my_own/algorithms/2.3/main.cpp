#include <iostream>
#include "declarations.h"

using namespace std;

int main()
{
	int action;
	double result;
	do
	{
		cout << "1. show stack elements\n"
			 << "2. write equation\n"
			 << "4. clear\n"
			 << "5. print the number of elements of the structure, the index of the first and last element\n"
			 << "6. show result\n"
			 << "-1. exit"
			 << endl;

		cin >> action;

		switch (action)
		{
		case 1:
			get_elemnts();
			break;
		case 2:
			result = writeIn();
			break;
		case 4:
			clear();
			break;
		case 5:
			cout << top() << endl;
			break;
		case 6:
			cout << result << endl;
			break;
		default:
			cout << ((action != -1) ? "undefined error" : NULL) << endl;
			break;
		}

	} while (action != -1);

	return 0;
}