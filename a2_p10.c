/*
CH-230-A
a2_p10.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int i = 1;
    int n; 
     
    do
    scanf("%d", &n);
    while(n <= 0); 
     /* The loop keeps executing until the user enters
     a positive number. */

    while (i<=n)
    {
        if (i == 1)
        printf("%d day = %d hours\n", i, 24*i); 
    /*use of if else condition to avoid printing "1 days"
    or "3 day", "5 day" */
    
        else
        printf("%d days = %d hours\n", i, 24*i);
        
        i++;
    }    
        
    return 0;
}