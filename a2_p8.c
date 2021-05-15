/*
CH-230-A
a2_p8.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int number;
    scanf("%d", &number);

    if((number % 2 == 0) && (number % 7 == 0)) 
    /* condition that the remainder of the number
    when divided by 2 and when divided by 7 are both 0 */
        printf("The number is divisible by 2 and 7\n");
    else
        printf("The number is NOT divisible by 2 and 7\n");

    return 0;    
}