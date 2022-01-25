#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int cnt,i = 0;

    fp = fopen("file.txt", "r");

    if(fp == NULL)
        return -1;

    //move file pointer to end of file
    fseek(fp, 0, SEEK_END);

    //get the position of file pointer;
    cnt = ftell(fp);

    while(i < cnt)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
