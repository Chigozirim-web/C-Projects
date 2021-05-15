/*
CH-230-A
a6_p2.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

//bitwise 'and' mask to extract value at bit 0 (2^0)
#define LEAST_BIT(d)  ((d) & 1)

int main ()
{
    unsigned char ch;
    scanf("%c", &ch);
    printf("The decimal representation is: %d\n", ch);

    if(LEAST_BIT(ch))
        printf("The least significant bit is: 1\n");
    else
    {
        printf("The least significant is: 0\n");
    }
    
    return 0;
}