/*
CH-230-A
a2_p5.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int a;
    scanf("%d", &a);
    printf("a=%d\n", a);

    int *ptr_a; ptr_a = &a;
    printf("Address: %p\n", ptr_a);

    *ptr_a += 5; 
    /*increases the variable the pointer points
    to by 5 (hence the use of *ptr and not ptr)*/

    printf("New value=%d\n", *ptr_a);
    printf("Address= %p\n", ptr_a);  
    /*address of variable a remains the same because it's still the 
    same variable stored in the same place, only its value was changed */

    return 0;
}