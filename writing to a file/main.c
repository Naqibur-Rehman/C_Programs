#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;

    fp =fopen("file.txt", "w+");

    if(fp != NULL)
        fprintf(fp, "%s\n%s %s %s %d", "Hello", "my", "number", "is", 98789);

    fclose(fp);

    fp = NULL;

    return 0;
}
