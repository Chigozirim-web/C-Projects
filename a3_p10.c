/*
CH-230-A
a3_p10.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b)
{
    float mult = a*b;
    return mult;
}

void productbyref(float a, float b, float *p)
{
    float y = a*b;
     *p = y;
}

void modifybyref(float *a, float *b)
{
    *a +=3;
    *b +=11;
}

int main ()
{
    float num1, num2;
    scanf("%f %f", &num1, &num2);

    float PRODUCT = product(num1, num2);
    printf("result 1 = %f\n", PRODUCT);

    float PRODUCT1;
    productbyref(num1, num2, &PRODUCT1);
    printf("result 2 = %f\n\n", PRODUCT1);

    if (PRODUCT == PRODUCT1)
    printf("Both functions have the same effect.\n\n"); //shows they have the same effect

    modifybyref(&num1, &num2);
    printf("1st number: %f\n", num1); //calling modifybyref() increases the
    printf("2nd number: %f\n", num2); //float numbers by 3 and 11 using their addresses

    return 0;
}