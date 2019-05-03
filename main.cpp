#include <iostream>
#include <ctime>
#include <cctype>
#include <random>

using namespace std;

int main()
{
    clock_t x = clock();
    for (long long i = 0; i < 100000000ll; i++)
        log(pow(i, 2));

    x = clock() - x;

    cout << (float)clock() / CLOCKS_PER_SEC << endl;
    return 0;
}