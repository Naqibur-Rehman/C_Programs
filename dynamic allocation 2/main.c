#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = NULL;
    int n = 0;

    printf("How long string you want to enter: ");
    scanf("%d", &n);

    str = (char * ) malloc(n * sizeof(char));

    if (str != NULL)
    {
        printf("Enter string : \n");
        scanf(" ");
        gets(str);

        printf("string entered : %s", str);
    }

    free(str);
    str = NULL;

    return 0;
}
