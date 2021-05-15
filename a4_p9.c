/*
CH-230-A
a4_p9.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int prodminmax (int arr[], int n);

int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)  //to read inputs to the array
        scanf("%d", &arr[i]);

    int product = prodminmax(arr, n);
    printf("Product=%d\n", product);

    return 0;
}


//Creating Function
int prodminmax (int arr[], int n)
{
    int max = arr[0], min = arr[1];
    if (max < min)
    {
        max = arr[1]; //swap values if max is less than min
        min = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
    int product = min * max;
    return product;
}
