#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60;  // 0011 1100
    unsigned int b = 13;  // 0000 1101
    int result = 0;

//    result = a & b; // 0000 1100
//    result = a | b; // 0011 1101
//    result = a << 2; // 1111 0000
    result = a >> 2; // 0000 1111

//    printf("result of a&b is: %d", result);
//    printf("result of a|b is: %d", result);
//    printf("result of a << 2 is: %d", result);
    printf("result of a >> 2 is: %d", result);


    return 0;
}
