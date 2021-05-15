/*
CH-230-A
a5_p6.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main ()
{
    int length; 
    scanf("%d", &length);

    int count = 0;
    //creating pointer to do the counting
    int* countPtr = &count;
    

    float array[length];
    //Reading the array elements
    for(int i = 0; i < length; i++)
        scanf("%f", &array[i]);

    //pointer for looping through the array
    float *ptr;
 
    for(ptr = array; ptr < (array + length); ptr++)
    {  
        if(*ptr < 0)
            break;
        else
        {
            (*countPtr) ++;
        }
    }

    printf("Before the first negative value: %d elements\n", 
          *countPtr);
    return 0;
}