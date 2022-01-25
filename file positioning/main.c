#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    FILE *fp =NULL;

    fp = fopen("file.txt", "a+");

    if(fp == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    printf("Total size of file.txt %d bytes", len);

    fseek(fp, 7, SEEK_SET);
    fputs("This is my area", fp);

    fclose(fp);

    return 0;
}
