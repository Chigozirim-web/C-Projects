/*
CH-230-A
a3_p5.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

void sumtemp (double a[], int num);

void list_temp (double a[], int num);

void list_fahr (double a[], int num);

void mean (double a[], int num);

int main()
{
    char c;
    int n; 
    double temp[100];

    scanf("%c", &c); 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++)
    scanf("%lf", &temp[i]);

    switch (c)
    {
        case('s'): 
            sumtemp(temp, n);
            break; //including while loops in 'case' does not execute accordingly,
                   //so functions had to be created to perform the calculations
        case('p'): 
            list_temp (temp, n);
            break;

        case('t'):
            list_fahr (temp, n);
            break;

        default:
            mean (temp, n);
            break;

    }
    
    return 0;
} 

// Creating Functions

void sumtemp (double a[], int num)
{
    int i = 0;
    double sum = 0;
        while (i < num)
        {
            sum += a[i];
            i++;
        }
    printf("The sum of temperatures is %lf\n", sum);
    
}

void list_temp (double a[], int num)
{
    int i = 0;
    printf("List of all temperatures: ");
    while (i < num)
    {
        printf("%lf, ", a[i]);
        i++;
    }
    printf("\n");
}

void list_fahr (double a[], int num)
{
    printf("List of all temperatures in Fahrenheit: "); 
    int i = 0;
    double fahr;
    while (i < num)
    {
        fahr  = (a[i] * 9/5) + 32;
        printf("%lf, ", fahr);
        i++;
    }
    printf("\n");
}

void mean (double a[], int num)
{
    int i = 0;
    double sum = 0; 
    while (i < num)
    {
        sum += a[i];
        i++;
    }
    double avg = sum/num;
    printf("Average of temperatures = %lf\n", avg);
}