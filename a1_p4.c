/*
CH-230-A
a1_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int x = 17, y = 4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);

    /*Now to print the solutions of the various operations*/
    printf("sum=%d\n", x+y);
    printf("product=%d\n", x*y);
    printf("difference=%d\n", x-y);
    printf("division=%f\n", (float)x/y);
    printf("remainder of division=%d\n", x%y);
    return 0;
}