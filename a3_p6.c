/*
CH-230-A
a3_p6.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g)
{
    float convert = (kg + g/(float)1000) * 2.2;
    return convert;
}

int main()
{
    int kg, g;
    scanf("%d %d", &kg, &g);

    float pounds = to_pounds(kg, g);
    printf("Result of conversion: %f\n", pounds);

    return 0;
}