/*
CH-230-A
a3_p9.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>


double sum25 (double v[], int n);

int main()
{
    int n;
    double a[20];

    while ((n>20) || (n<1)) //to ensure the user enters a valid number 
    scanf("%d", &n);        //The number shouldn't be larger than the 
                            //array size, 20, and should be positive 
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }

    double add = sum25(a,n);

    if (add == -111)
    printf("One or both positions are invalid\n");

    else
    printf("sum=%lf\n", add);

    return 0;
}

double sum25 (double v[], int n)
{
    double sum;
    if (n>=6) //condition to ensure validity i.e that position 5 is in the array
    {
        sum = v[2] + v[5];
        return sum;
    }
    return -111;
}