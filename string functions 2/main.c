#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "The quick brown fox";
    char text[] = "Every dog has his day";
    char msg[] = "Hello how are you - my name is - Naqeeb";

    char ch = 'q'; // for character search
    char word[] = "dog";  // for string search
    const char s[2] = "-"; // for tokenizing

    char *pGot_char = NULL;
    char *pFound = NULL;
    char *token;

    // character search
    pGot_char = strchr(str, ch);
    printf("string char search : %s\n", pGot_char);

    // string search
    pFound = strstr(text, word);
    printf("String String search : %s\n", pFound);

    // tokenizing string
    // get the first token
    token = strtok(msg, s);
    // walk through other tokens
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }


    return 0;
}
