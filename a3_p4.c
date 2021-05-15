/*
CH-230-A
a3_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
int position(char str[], char c)
{
    int idx;

    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
    /* do nothing */
    } 
    //use curly braces for the for loop because if not,
    //"return idx" is read after the loop comparison, and 
    //the function is terminated, thus returning 0 everytime 
    //the function is called
    
    return idx;
}

int main() {
    char line[80];

        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
    
        int place = position(line, 'g'); 
        /* a variable 'place' was created to avoid calling the
        function in the printf statement (too verbose) */
        
        printf("The first occurrence of ’g’ is: %d\n", place);
    
    return 0;
}
