/*
CH-230-A
a2_p3.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int weeks, days, hours;
    scanf("%d %d %d", &weeks, &days, &hours);
    int Totalhours = (weeks * 168) + (days * 24) + hours; 
    //168 gotten from 24 hours * 7 days (1 week)
    
    printf("Total number of hours=%d hours\n", Totalhours);

    return 0;
}