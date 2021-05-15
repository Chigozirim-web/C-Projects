/*
CH-230-A
a1_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main() 
{
    double result; 
    /* The result of our calculation */

    /* C uses integer division since all numbers here are integers. 
    To change that, use a type cast operator 'double' to tell c
     to consider the operation as a float (or double) type division */

    result = (double)(3 + 1) / 5;
    printf("The value of 4/5 is %lf\n", result);
    
    return 0;
}
