/*
CH-230-A
a6_p7.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int i;

unsigned char set3bits(unsigned char c, int bit1, 
int bit2, int bit3);
int main()
{
    unsigned char ch;
    scanf("%c", &ch);

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    printf("The decimal representation is: %i\n", ch);

    printf("The binary representation is: ");
    //Printing ch in binary form

     //i starts from 7 because the binary representation
    //is on 8 bits, and printing starts from bit 7 (2^7)
    for(i = 7; i >= 0; i--)
    {
        if(ch & (1 << i))
            printf("1");
        else 
            printf("0");
    }

    printf("\n");

    unsigned char new = set3bits(ch, a, b, c);
    printf("After setting the bits: ");

    //printing binary representation after setting bits

    for(i = 7; i >= 0; i--)
    {
        if(new & (1 << i))
            printf("1");
        else 
            printf("0");
    }

    printf("\n");

    return 0;
}


//Function creation
unsigned char set3bits(unsigned char c, int bit1, 
int bit2, int bit3)
{
    for(i = 0; i <= 7; i++)
    {    //using bitwise 'or' to set values in bit1, 
        //bit2, and bit3 positions of char c to 1
        if((i == bit1) || (i == bit2)
            || (i == bit3))
        {
            c |= (1 << i);
        }
    }
    return c;
}
