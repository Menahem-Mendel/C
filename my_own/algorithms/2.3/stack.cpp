#include <iostream>
#include "calculator.h"

#define SIZE 100

double steck[SIZE];
int sp = 0;

void push(double x)
{
    if (sp < SIZE)
        steck[sp++] = x;
    else
        std::cout << "error: stack full of variables!" << std::endl;
}

double pop()
{
    if (sp > 0)
        return steck[--sp];
    else
    {
        std::cout << "error: no variables in the steck" << std::endl;
        return 0.0f;
    }
}