/*
CH-230-A
a8_p8.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char ch;
    //word count variable
    int count = 0;
    FILE *fp;

    fp = fopen("words.txt", "r");
    if(fp == NULL)
    {
        printf("Error in opening file.\n");
        exit(1);
    }

    //flag to aid tracking of which characters
    //indicate end of a word

    int flag = 1;

    while((ch = getc(fp)) != EOF)
    {
        if((ch == ' ' || ch == '\n'
        || ch == '\t' || ch == '\r'))
            flag = 1;

        else if(flag == 1)
        {
            flag = 0;
            count++;
        }
    }
    
    printf("The file contains %i words.\n", count);
    fclose(fp);

    return 0;
}

