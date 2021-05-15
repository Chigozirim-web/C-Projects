/*
CH-230-A
a7_p7.c
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
    char ch;
    int num;

    while(1)
    {
        scanf("\n%c", &ch);
        switch(ch)
        {
            case('s'):
                scanf("%i", &num);
                push(num, s);
                printf("\n");
                break;

            case('p'):
                printf("Popping ");
                pop(s);
                printf("\n");
                break;

            case('e'):
                empty(s);
                printf("\n");
                break;
                
            case('q'):
                printf("Quit\n");
                //exit loop
                return 0;
        }
    }

    return 0;
}