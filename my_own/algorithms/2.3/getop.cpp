#include <cctype>
#include <iostream>
#include "declarations.hpp"

int getop(char input)
{
	int i;
	if (input == ' ')
		return input;
	if (isdigit(input) || input == '.')
		return NUMBER;
	else
		return input;
}