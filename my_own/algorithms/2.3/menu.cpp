#include <iostream>
#include "declarations.hpp"

double equation(char input[])
{
	double second_op;
	char number[SIZE];
	int i;
	int j = 0;
	int type;

	for (i = 0; (type = getop(input[i])) != EOF; i++)
	{
		switch (type)
		{
		case NUMBER:
			number[j++] += input[i];
			push(atof(number));
			break;
		case ' ':
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
			if (second_op != 0.0)
				push(pop() / second_op);
			else
			{
				std::cout << "divide by zero" << std::endl;
				return 0.0;
			}
			break;
		default:
			std::cout << "undefined error" << std::endl;
			return 0.0;
			break;
		}
	}

	return top();
}