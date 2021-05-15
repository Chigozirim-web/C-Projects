/*
CH-230-A
a4_p6.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void greatest_two (int *array, int num);

int main ()
{
    int *array;
    int n;
    scanf("%d", &n);

    array = (int *) malloc (sizeof(int) * n); //dynamic allocated memory
    if (array == NULL)   //checks if the memory allocation was successful
        exit(1);
    
    for(int i = 0; i < n; i++)
    {
        printf("Enter input index %d: ", i);
        scanf("%d", &array[i]);
    }
    greatest_two(array, n);

    free(array);  //deallocating memory
}


// Creating Function
void greatest_two(int *array, int num)
{
    int max1 = array[0], max2 = array[1];
    if(max2 > max1)
    {    //max1 is the highest number, max2 is the second highest in the 
        //assignment above. Here, if max2 is greater than max1, the poistions are swapped
        max1 = array[1];
        max2 = array[0];
    }

    for(int i = 0; i < num; i++)
    {
        if(array[i] > max1)
        {   //assignment order matters. '=' assigns the value on its right
           //to the element on the left. Thus, if the condition is true, then
          //max2 takes the initial max1 value, and max1 becomes the array element
            
            max2 = max1;
            max1 = array[i];
        }
        else if(array[i] > max2)
            max2 = array[i];
    }
    printf("The two greatest values are %d and %d\n", max1, max2);   
}