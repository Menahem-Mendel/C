#include <cctype>
#include <iostream>
#include "declarations.hpp"

int getop(char string[])
{
	int i;
	int c;

	while ((string[0] = c = getch()) == ' ' || c == '\t')
		;
	string[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;
	i = 1;
	if (isdigit(c))
		while (isdigit(string[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(string[++i] = c = getch()))
			;
	string[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return EOF;
}

char buffer[SIZE];
int bp = 0;

int getch()
{
	return (bp > 0) ? buffer[--bp] : getchar();
}

void ungetch(int ch)
{
	if (bp >= SIZE)
		std::cout << "too many characters" << std::endl;
	else
		buffer[bp++] = ch;
}