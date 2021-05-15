/*
CH-230-A
a7_p5.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

/* CREATING FUNCTION */

//Case a: ascending order
int compareA (const void *va, const void *vb)
{
    const int *a = (const int*) va;
    const int *b = (const int*) vb;
    if(*a < *b) return -1;
    else if(*a > *b) return 1;
    else return 0;
}

//Case d: descending order
int compareD(const void *va, const void *vb)
{
    const int* a = (const int*) va;
    const int *b = (const int*) vb;
    if(*a > *b) return -1;
    else if(*a < *b) return 1;
    else return 0;
}

//For printing the array
void Print(int *arr, int num)
{
    for(int i = 0; i < num; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}


//MAIN FUNCTION
int main ()
{
    int n; char ch;
    scanf("%i", &n);

    int *my_array;
    //Dynamic memory allocation
    my_array = (int*) malloc (sizeof(int) * n);
    if(my_array == NULL)
        exit(1);

    //Entering elements of array
    for(int i = 0; i < n; i++)
        scanf("%d", &my_array[i]);

    while(1)
    {
        scanf("\n%c", &ch);
        switch(ch)
        {
            case('a'):
                qsort(my_array, n, sizeof(int), compareA);
                Print(my_array, n);
                break;
            case('d'):
                qsort(my_array, n, sizeof(int), compareD);
                Print(my_array, n);
                break;
            case('e'):
                //to end loop
                return 0;
        }
    }

    free(my_array);
    return 0;
}