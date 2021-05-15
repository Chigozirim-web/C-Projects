/*
CH-230-A
a3_p8.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

float sum (float a[], int NoOfElems);

float average (float a[], int NoOfElems);

int main ()
{
    float number[10]; 
    int j;
    for (j = 0; j < 10; j++)
    {
        scanf("%f", &number[j]);
        
        if(number[j] == -99.0)
        {                      //loop is exited if input is -99.0
            break;   
        }
    
    }
     
    int count = j; //to get the size of array after the elements
                   //have been entered (because it can be less than 10)
    
    float y = sum (number, count);
    printf("The sum of values = %f\n", y);

    float m = average(number, count);
    printf("Average of values = %f\n", m);


    return 0;
}




float sum (float a[], int NoOfElems)
{
    int i = 0;
    float sum = 0;
    while (i < NoOfElems)
    {
        sum += a[i];
        i++;
    }
    return sum;
}

float average (float a[], int NoOfElems)
{ 
    int i = 0;
    float add = 0;
    while (i < NoOfElems)
    {
        add += a[i];
        i++;
    } 
    float avg = add/NoOfElems;

    return avg;
}
