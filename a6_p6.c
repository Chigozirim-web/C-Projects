/*
CH-230-A
a6_p6.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    unsigned char ch;
    scanf("%c", &ch);

    printf("The decimal representation is: %i\n", ch);

    //Binary representation
    printf("The binary representation is: ");

    /* the question says the number is represented on
    8 bits. So i is set to start from 8-1 = 7 */
    for(int i = 7; i >= 0; i--)
    {
         //to compare each bit of ch using a mask and
        //bitwise and
        if(ch & (1 << i))
            printf("1");
        else
        {
            printf("0");
        }
    }

    printf("\n");
    return 0;
}