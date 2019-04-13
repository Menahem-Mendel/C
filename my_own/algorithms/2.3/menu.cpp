#include <iostream>
#include "declarations.hpp"

double equation(char input[])
{
	double second_op;
	char number[SIZE];
	int i;
	int j;

	for (i = 0; input[i] != EOF; i++)
	{
		while (input[i] == ' ' || input[i] == '\t')
			i++;

		if (isdigit(input[i]))
		{
			for (j = 0; isdigit(input[i]) || input[i] == '.'; j++)
			{
				number[j] = input[i++];
			}
			push(atof(number));
		}
		
		while (input[i] == ' ' || input[i] == '\t')
			i++;

		switch (input[i])
		{
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