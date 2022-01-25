#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char str[] = "My name is Naqeeb";
    const char word1 [] = "hello";
    const char word2 [] = "whatever";
    char result[50];

    printf("%i  %d  %i\n", stringLength(str), stringLength(word1), stringLength(word2));

    concat(result, word1, word2);

    printf("\n%d", equalStrings("Naqeeb", "Naqeeb"));
    printf("\n%d", equalStrings("Naqeeb", "naqeeb"));

    return 0;
}

int stringLength(const char string[])
{
    int length = 0;

    while(string[length] != '\0')
        ++length;

    return length;
}

void concat(char result[], const char str1[], const char str2[])
{
    int count1 = 0;
    int count2 = 0;

    while(str1[count1] != '\0')
    {
        result[count1] = str1[count1];
        count1++;
    }

    while(str2[count2] != '\0')
    {
        result[count1] = str2[count2];
        count1++;
        count2++;
    }

    result [count1] = '\0';
    printf("result : %s", result);
}

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEqual = false;

    while(s1[i] == s2[i] &&
          s1[i] != '\0' &&
          s1[i] != '\0')
            ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
        isEqual = true;
    else
        isEqual = false;

    return isEqual;
}
