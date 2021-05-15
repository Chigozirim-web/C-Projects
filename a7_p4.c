/*
CH-230-A
a7_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int i;

void Upper(char *str)
{
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
            printf("%c", str[i]-32);
        else
            printf("%c", str[i]);
    }
    printf("\n");
}


void Lower(char* str)
{
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >=65 && str[i] <= 90) 
            printf("%c", str[i] + 32);
        else
            printf("%c", str[i]);
    }
    printf("\n");
}


void ChangeCase(char *str)
{
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >=65 && str[i] <= 90)
            printf("%c", str[i] + 32);
        else if(str[i] >= 97 && str[i] <= 122)
            printf("%c", str[i] - 32);
        else 
            printf("%c", str[i]);
    }
   printf("\n");
}



//Main Function
int main ()
{
    //creating an array of function pointers
    //for the various string functions
    void (*up) (char *str) = Upper;
    void (*low) (char *str) = Lower;
    void (*change) (char *str) = ChangeCase;
    void (*func_array[3]) (char *str) = {up, low, change};

    char *string, *string1;
    int n;

    /* one string is used as a temporary storage
    for the string, in order to allocate the 
    needed memory size */
    string1 = (char *) malloc (sizeof(char) * 100);
    if(string1 == NULL)
        exit(1);
    
    fgets(string1,100,stdin);
    //to remove newline character
    string1[strlen(string1) - 1] = '\0';

    //to get actual memory size of the string
    int length = strlen(string1);
    string = (char*) malloc (sizeof(char) * length);
    if(string == NULL)
        exit(1);

    strcpy(string, string1);
    //free string1 after copying
    free(string1);

    while(1)
    {
        scanf("%d",&n);
        if(n==4)
            return 0;
        func_array[n - 1](string);
    }

    //free dynamic memory
    free(string);

    return 0;
}