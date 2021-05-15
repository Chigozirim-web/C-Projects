/*
CH-230-A
a4_p2.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char string [50];
    fgets(string, 50, stdin);
    
    string[strlen(string) - 1] = '\0'; //to take away the newline character 
                                      //at the end of the string
    for (int i = 0; i < strlen(string); i++)
    {
        if(i % 2 == 0)
            printf("%c\n", string[i]);
        else
        {
            printf(" %c\n", string[i]);
        }
        
    }
    return 0;
}