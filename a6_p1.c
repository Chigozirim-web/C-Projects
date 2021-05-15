/*
CH-230-A
a6_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

//using macro where T is type, and extra variable 'z'
//is used for the swapping
#define SWAP(x, y, T) { T z = x; x = y; y = z; }

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    double num3, num4;
    scanf("%lf %lf", &num3, &num4);

    SWAP(num1, num2, int);
    SWAP(num3, num4, double);

    //Printing numbers after swapping
    printf("After swapping:\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%.6lf\n", num3); //to 6 decimal places
    printf("%.6lf\n", num4); //to 6dp

    return 0;

}
