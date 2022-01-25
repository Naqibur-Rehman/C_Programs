#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int primes[100];
    int primeIndex = 2;
    int p, i;

    bool isPrime;

    //hardcore prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 300; p += 2)
    {
        isPrime = true;

        for (i = 0; isPrime && p / primes[i] >= primes[i]; i++)
        {
            if (p % primes[i] == 0)
                isPrime = false;
        }

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for (i = 0; i < primeIndex; i++)
    {
        printf(" %i ", primes[i]);
    }

    printf("\n");

    return 0;
}
