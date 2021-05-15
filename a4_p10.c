/*
CH-230-A
a4_p10.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

/* I wrote this code on a linux terminal and it could not complie
completely (because of the function 'pow'). It only works when -lm is
called at the linux terminal ie gcc -Wall -o assign4p10 a4_p10.c -lm */

#include <stdio.h>
#include <math.h>

void proddivpowinv (float a, float b, float *prod, float *div, float *pwr, float *invb)
{                //using pointers to store the values of the calculations
    *prod = (a*b); 
    *div = a/b;
    *pwr = pow(a,b);
    *invb = 1/b;
}

int main ()
{
    float Num1, Num2;
    scanf("%f %f", &Num1, &Num2);
    
    float Product, Quotient, Power, Invb;

    proddivpowinv(Num1, Num2, &Product, &Quotient, &Power, &Invb);

    printf("Product = %f\n", Product);
    printf("Division result = %f\n", Quotient);
    printf("%f to the power of %f = %f\n", Num1, Num2, Power);
    printf("Inverse of %f = %f\n", Num2, Invb);

    return 0;

}
