/*
CH-230-A
a2_p7.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    int i = 8;
    while (i >= 4)
    {                            //since there is more than one program statement
        printf("i is %d\n", i);  //in the while loop, enclose them in curly braces 
        i--;                     //so that c reads it as part of the loop         
    }
    printf("That’s it.\n"); 
    return 0;
}
