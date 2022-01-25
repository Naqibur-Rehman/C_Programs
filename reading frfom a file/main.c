#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int c;
    char str[61]; //used to read from string

    fp = fopen("file.txt", "r");

    if(fp==NULL){
        perror("Error in opening file");
        return -1;
    }

    //read a single character
//    while((c = fgetc(fp)) != EOF)
//        printf("%c", c);

    //read from string
    if(fgets(str, 60, fp) != NULL){
        //writing content to stdout
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
