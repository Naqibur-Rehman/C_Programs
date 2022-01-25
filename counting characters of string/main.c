#include <stdio.h>
#include <stdlib.h>

int len(const char *str);

int main()
{
    char str[] = "hello";

    printf("the no of characters in str: %d\n", len(str));
    printf("the no of characters in whatever: %d\n", len("whatever happens next"));
    printf("the no of characters in : %d\n", len(""));

    return 0;
}

int len(const char *str)
{
    const char *end = str;

    while(*end)
        end++;

    return end - str;
}
