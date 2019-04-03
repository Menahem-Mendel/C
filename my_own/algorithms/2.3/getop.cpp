#include <cctype>
#include <iostream>
#include "declarations.hpp"

int getop(char s[])
{
	int i;
	int c;

	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;
	i = 1;
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
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