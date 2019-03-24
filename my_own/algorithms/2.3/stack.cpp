#include <iostream>
#include "declarations.h"

double stack[SIZE];
int sp = 0;

void push(double x)
{
    if (sp < SIZE)
        stack[sp++] = x;
    else
        std::cout << "\nerror: stack full of variables!" << std::endl;
}

double pop()
{
    if (sp > 0)
        return stack[--sp];
    else
    {
        std::cout << "\nerror: no variables in the stack" << std::endl;
        return 0.0f;
    }
}