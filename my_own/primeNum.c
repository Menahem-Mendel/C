#include <stdio.h>

int isPrime(int, int);

int main()
{
    int num, prime, n1 = 0;
    for (num = 2; num < 1000; num++)
    {
        prime = isPrime(num, num / 2);

        if (prime == 1)
        {
            printf("%d ", num - n1);
            //printf("%d ", num);
            n1 = num;
        }
    }
    return 0;
}

int isPrime(int num, int i)
{

    if (i == 1)
    {
        return 1; // it's a prime number
    }
    else
    {
        if (num % i == 0)
            return 0; // it isn't a prime number
        else
            isPrime(num, --i);
    }
}