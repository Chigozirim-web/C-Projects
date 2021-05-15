/*
CH-230-A
a6_p3.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

//Using the conditional operator to determine the minimum 
//and maximum value of 3 numbers
#define MIN(a,b,c)  (((a) < (b) ? (a) : (b)) < c ? ((a) < (b) ? (a) : (b)) : c)

#define MAX(a,b,c)  (((a) > (b) ? (a) : (b)) > c ? ((a) > (b) ? (a) : (b)) : c)

//since all inputs are of int type, mid_range has
//to be casted to float type to print a float value
#define MID_RANGE(a,b,c)  ((float) (MIN(a,b,c)) + (MAX(a,b,c))) / 2

int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //using the macro for arithmetic calculation
    float mid = MID_RANGE(a,b,c);
    printf("The mid-range is: %.6f\n", mid);

    return 0;
}