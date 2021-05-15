/*
CH-230-A
a5_p5.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int i, j;

double scalar (double *vector1, double *vector2, int size);
void function1 (double *arr, int size);
void function2 (double *arr, int size);

int main()
{
    int n;
    scanf("%d", &n);

    double v[n], w[n];
    //Reading elemts of v and w respectively
    for(i = 0; i < n; i++)
        scanf("%lf", &v[i]);

    for(i=0; i<n; i++)
        scanf("%lf", &w[i]);

    //Calling functions
    double sproduct = scalar(v,w,n);
    printf("Scalar product=%lf\n", sproduct);

    function1(v,n);
    function2(v,n);

    function1(w,n);
    function2(w,n);
    
    return 0;
}





//Creating Functions
double scalar (double *vector1, double *vector2, int size)
{
    double s_p = 0; 
    for(j = 0; j < size; j++)
        s_p += (vector1[j] * vector2[j]);
    /* sum the product of each vector
    multiplication (scalar product) */

    return s_p;
}

//Function to print smallest component and position
void function1 (double *arr, int size)
{
    //set 1st element to be the smallest 
    //and its index, the position  
    double smallest = arr[0];
    int position = 0;

    //loop to compare other elements of arr with smallest
    for(j = 0; j <size; j++)
    {
        if (arr[j] < smallest)
        {
            smallest = arr[j];
            position = j;
        }    
    }

    printf("The smallest = %f\n", smallest);
    printf("Position of smallest = %d\n", position);
}

//Function to print largest component and position
void function2 (double *arr, int size)
{
    //set arr[0] to be the largest
    //and its index, the position
    double largest = arr[0];
    int position = 0;

    //loop to compare each element of arr with largest
    for(j = 0; j < size; j++)
    {
        if(arr[j] > largest)
        {
            largest = arr[j];
            position = j;
        }
           
    }
    printf("The largest = %lf\n", largest);
    printf("Position of largest = %d\n", position);
}