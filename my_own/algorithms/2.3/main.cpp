#include <iostream>
#include "declarations.h"
enum menu
{
    add,
    del,
    show,
    clear
};

int main()
{
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        ch = getchar();
    }

    return 0;
}