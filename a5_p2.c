/*
CH-230-A
a5_p2.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr [], int size);

int main ()
{
    float array[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = 6;

    //Printing array 
    printf("Before:\n");
    for(int i = 0; i < size; i++)
        printf("%.3f ", array[i]); //to 3 decimal places

    printf("\n");

    //Printing array after function call
    divby5(array, size);
    printf("After:\n");
    for (int i = 0; i < size; i++)
        printf("%.3f ", array[i]);

    printf("\n");

    return 0;
}

//Creating the function
void divby5 (float arr [], int size)
{
    for(int i = 0; i < size; i++)
        arr[i] /= 5;
    //same as arr[i] = arr[i] / 5
    return;
}