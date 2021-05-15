/*
CH-230-A
a4_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    float lower_limit;
    float upper_limit;
    float step;
   
    scanf("%f", &lower_limit);
    scanf("%f", &upper_limit);
    scanf("%f", &step);

    for(float radius = lower_limit; radius <= upper_limit; radius+=step)
    {
        printf("%f %f %f\n", radius, radius * radius * M_PI, 2 * M_PI * radius);
    }
    
    return 0;
}
