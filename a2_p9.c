/*
CH-230-A
a2_p9.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    char c;
    scanf("%c", &c);

    if(c >= '0' && c <= '9')   
        printf("%c is a digit\n", c);

    /* place condition to check for both uppercase characters and lowercase */
    else if((c>='A' && c<='Z') || (c>='a' && c<='z')) 
        printf("%c is a letter\n", c);               
        
    /* Easier to place the condition in this way 
    because the letters(a to z) or (A to Z)
    come after each other on the ASCII table */
    else  
        printf("%c is some other symbol\n", c);
    
    return 0;

}