/*
CH-230-A
a5_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divby5 (float *arr, int size);

int main()
{
    int n;
    scanf("%d", &n);

    float *array;
    //Dynamic memory allocation
    array = (float *) malloc (sizeof(float) * n);
    if(array == NULL)
        exit(1);  //check successful memory allocation

    //Entering elements of the array
    for(int i = 0; i < n; i++)
        scanf("%f", &array[i]);

    divby5(array, n);

    //Printing array after function call
    for(int i = 0; i < n; i++)
        printf("%f ", array[i]);

    printf("\n");
    free (array); //memory deallocation

    return 0;

}

//divby5 Function
void divby5 (float *arr, int size)
{
    for(int i = 0; i < size; i++)
        arr[i] /= 5;
    //same as arr[i] = arr[i] / 5
    return;
}