/*
CH-230-A
a3_p11.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main ()
{ 
    char one[100], two[100]; 
    char c; 
    char *rest;      //declare a char pointer that would be used
                    //later in the code for index calculation
                                     
    fgets(one, 100, stdin);
    fgets(two, 100, stdin);
    scanf("%c", &c);

    
    for (int i=0; i <strlen(one);i++) //takes out end of line from string one
    {
        if (one[i] == '\n')
        {
            one[i] ='\0';
        }
    }
    int length1 = strlen(one);
    printf("length1=%d\n", length1); //print length1
    
    
    for (int i=0; i <strlen(two);i++) //takes out end of line from string two
    {
        if (two[i] == '\n')
        {
            two[i] ='\0';
        }
    }
    int length2 = strlen(two);
    printf("length2=%d\n", length2); //print length2
    
    
    strcat(one, two);
    printf("concatenation=%s\n", one); //concatenate two to one

    one[length1] = '\0'; //to change string 'one' to its initial form
                         //before the concatenation
    char three[100];
    strcpy(three, two);
    printf("copy=%s\n", three); //copy string two into three


    if (strcmp(one, two) < 0)   //compare string one and two
    printf("one is smaller than two\n");
    else if ((strcmp(one, two)) > 0)
    {
        printf("one is larger than two\n");
    }
    else
    {
        printf("one is equal to two\n");
    }
    
    //Calculate the index
    rest = strchr(two, c);
    int index;
    if(rest == NULL)
    printf("The character is not in the string\n");
    else
    {
        index = (rest - two);           // because strchr() returns a char pointer to the
        printf("position=%d\n", index); //memory location where the character is first found
    }                                   //and not the index.
    
    return 0;

    }