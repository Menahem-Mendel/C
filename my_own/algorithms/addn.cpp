#include <iostream>
#include <ctime>
using namespace std;

int ToArray(int[]);
int main()
{

    int numbers[100];
    int n = ToArray(numbers);

    for (int i = 0; i < n; i++)
        cout << numbers[i] << ' ';
    cout << '\n';

    for (int i = n; i >= n / 2; i--)
    {
        int temp = numbers[i + 1];
        numbers[i + 1] = numbers[i];
        numbers[i] = temp;
    }

    numbers[n / 2] = 0;

    for (int i = 0; i < n + 1; i++)
        cout << numbers[i] << ' ';
    return 0;
}

int ToArray(int array[])
{
    int random;
    int i;
    int size;
    int inf;
    int sup;
    cout << "size = ";
    cin >> size;
    cout << "inf = ";
    cin >> inf;
    cout << "sup = ";
    cin >> sup;

    srand(time(0));

    for (i = 0; i < size - 1; i++)
    {
        random = inf + (rand() % sup);
        array[i] = random;
    }
    i--;

    return i;
}