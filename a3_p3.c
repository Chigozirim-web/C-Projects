/*
CH-230-A
a3_p3.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

float convert (int cm);

int main ()
{
    int length;
    float km;
    scanf("%d", &length);

    km = convert(length);
    printf("Result of conversion: %f\n", km);

    return 0;
}


float convert (int cm)
{
    float y = cm/(float)100000;
    return y;
}