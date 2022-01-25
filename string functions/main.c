#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char myString [] = "My name is Naqeeb";

    char temp [50];

    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("Final destination string is : |%s|\n", dest);

    strncpy(temp, myString, sizeof(temp) - 1);
    printf("The length of myString is : %d\n", strlen(myString));
    printf("The temp is : %s\n", temp);



    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n",strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n",strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n",strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n",strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n",strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apples\") is ");
    printf("%d\n",strcmp("apples", "apples"));

    printf("strcmpi(\"apples\", \"APPles\") is ");
    printf("%d\n",strcmpi("apples", "APPles"));

    if (strncmp("astronomy", "astro", 5) == 0)
        printf("Found astronomy\n");

    if (strnicmp("Astronomy", "astro", 5) == 0)
        printf("Found Astronomy\n");



    return 0;
}
