/*
CH-230-A
a5_p3.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_lower(char *str);

int main ()
{
    char string[50];
    int num;
    while(1)
    {
        fgets(string, 50, stdin);
        if(strcmp(string, "\n\0") == 0)
            break;                   
        //to compare if entered string is just a newline
        else
        {
            num = count_lower(string);
            printf("There are %d lowercase characters\n", num);
        }    
    }
    return 0;
}

//Creating Function
int count_lower(char *str)
{
    int letters = 0;
    char *strptr; //initialize char pointer for use in loop
    
    for(strptr = str; *strptr != '\n'; strptr++)
    {
        //condition to ensure the character is lowercase
        if((*strptr >= 'a') && (*strptr <= 'z'))
            letters++;
    }
    return letters;
}
