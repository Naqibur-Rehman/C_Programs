#include <stdio.h>
#include <stdlib.h>

void square(int *num);

int main()
{
    int number = 12;

    square(&number);
    printf("square of given number is %d", number);



    return 0;
}

void square(int *num)
{
    *num = (*num) * (*num);
}
