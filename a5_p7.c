/*
CH-230-A
a5_p7.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char string1 [100], string2 [100];
    fgets(string1, 100, stdin);
    fgets(string2, 100, stdin);

    /* Removing the newline character from string1 
    and string2 respectively */
    string1[strlen(string1) - 1] = '\0';
    string2[strlen(string2) - 1] = '\0';

    //Concatenate string1 and string2
    strcat(string1, string2);
    int length = strlen(string1);

    //Dynamic allocation
    char *string;
    string = (char *) malloc (sizeof(char) * length);
    if (string == NULL)
        exit(1);
    
    //Copy concatenated string1 to new string
    strcpy(string, string1);
    printf("Result of concatenation: %s\n", string);

    free(string); //free memory
    return 0;

}
