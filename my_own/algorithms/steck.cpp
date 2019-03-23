#include <iostream>
#include "steck.h"
#define SIZE 100

int array[SIZE];
int i = 0;

void push(int x)
{
    array[i++] = x;
}

int pop()
{
    array[i--] = 0;
    return array[i];
}