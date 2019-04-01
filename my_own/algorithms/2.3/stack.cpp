#include <iostream>
#include "declarations.h"

double stack[SIZE];
int sp = 0;

void push(double x)
{
	if (sp < SIZE)
		stack[sp++] = x;
	else
		std::cout << "stack is full of variables" << std::endl;
}

double pop()
{
	if (sp > 0)
		return stack[--sp];
	else
	{
		std::cout << "stack is empty" << std::endl;
		return 0.0f;
	}
}

double top()
{
	if (sp > 0)
		return stack[sp];
	else
	{
		std::cout << "stack is empty" << std::endl;
		return 0.0f;
	}
}

void get_elemnts()
{
	int p = sp;

	while (p >= 0)
		std::cout << stack[p--] << std::endl;
}

int clear()
{
	sp = 0;
}