#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch;
    int count = 0;

    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        perror("Error in opening file.");
        return -1;
    }

    while((ch=fgetc(fp))!= EOF)
    {
        if(ch=='\n')
            count++;
    }

    count++;

    fclose(fp);
    fp = NULL;

    printf("Number of lines in file is %d", count);

    return 0;
}
