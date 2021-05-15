/*
CH-230-A
a8_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include "stack.h"

int main ()
{
    Stack st;
    //pointer that points to created stack for use 
    //in function call
    Stack* s = &st;
    s->count = 0;

    unsigned int num;
    scanf("%u", &num);

    printf("The binary representation of %d is ", num);

    //getting the binary form by division by 2
    while(num > 0)
    {
        int quotient = num/2;
        int rem = num%2;
        push(rem,s);
        num = quotient;
    }

    //Printing the stack
    printS(s);
    printf("\n");

    return 0;
}