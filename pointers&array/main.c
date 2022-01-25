#include <stdio.h>
#include <stdlib.h>

int arraySum(/*int array[]*/int *ptr, const int n);

int main()
{
    int values[10] = {3, 7, -9, 3, 6, -1 ,7, 9, 1, -5};

    printf("The sum is %d\n", arraySum(values, 10));

    return 0;
}

int arraySum(/*int array[]*/int *ptr, const int n)
{
    int sum = 0 /*, *ptr*/;
    int * const arrayEnd = /*array*/ ptr + n;

    for(/*ptr = array*/; ptr < arrayEnd; ptr++)
        sum += *ptr;

    return sum;
}
