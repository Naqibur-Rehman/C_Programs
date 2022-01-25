#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main()
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch = ' ';

    fp = fopen("file.txt", "r");

    if (fp == NULL)
        return -1;

    //create a temp file to edit
    fp1  = fopen("temp.txt", "w");

    if (fp1 == NULL)
        return -1;

    while((ch=fgetc(fp)) != EOF)
    {
        if(islower(ch))
            ch = toupper(ch);

        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    remove("file.txt");
    rename("temp.txt", "file.txt");
    remove("temp.txt");

    fp = fopen("file.txt", "r");
    if(fp==NULL)
        return -1;

    while((ch=fgetc(fp)) != EOF)
        printf("%c", ch);


    fclose(fp);

    fp = NULL;
    fp1 = NULL;

    return 0;
}
