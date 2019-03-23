#include <iostream>
#include "steck.h"

int x;
int main()
{
    x = 3;
    push(x);
    x = 5;
    push(x);
    std::cout << pop();

    return 0;
}