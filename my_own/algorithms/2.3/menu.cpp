#include <iostream>
#include "declarations.hpp"

double writeIn(char input[SIZE])
{
	int type;
	double second_op;
	int i;

	for ((type = getop(input)) != EOF)
	{
		switch (type)
		{
		case NUMBER:
			push(atof(input));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '-':
			second_op = pop();
			push(pop() - second_op);
			break;
		case '*':
			push(pop() * pop());
			break;
		case '/':
			second_op = pop();
			if (second_op != 0.0f)
				push(pop() / second_op);
			else
			{
				std::cout << "divide by zero" << std::endl;
				return 0.0f;
			}
			break;
		default:
			std::cout << "undefined error" << std::endl;
			return 0.0f;
			break;
		}
	}

	return top();
}