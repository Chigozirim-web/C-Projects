/*
CH-230-A
a5_p9.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int i, j, k;

void read3D (int ***arr, int r, int c, int d);

void printsection (int ***arr, int r,  int c, int d);

int main ()
{
    int row, column, depth;
    scanf("%d %d %d", &row, &column, &depth);

    //Dynamic Allocation for 3d Array
    int ***array;
    array = (int ***) malloc (sizeof(int **) * depth);
    if(array == NULL)
        exit(1);

    /*first allocate depth memory, ie the number of
    2D arrays (rows and colums) the 3D array has.
    Then allocate memory for the rows and columns */

    for(i = 0; i < depth; i++)
    {
        array[i] = (int **) malloc (sizeof(int*) * row);
        if(array[i] == NULL)
            exit(1); 
        //check if memory allocation was successful
        for(j = 0; j < row; j++)
        {
            array[i][j] = (int *) malloc (sizeof(int) * column);
            if(array[i][j] == NULL)
                exit(1);
        }
    }

    //Calling the functions
    read3D (array, row, column, depth);
    printsection (array, row, column, depth);

    //Deallocating Memory
    //Start deallocating from the innermost
    for(i = 0; i < depth; i++)
    {  
        for(j = 0; j < row; j++)
            free(array[i][j]);
        free(array[i]);
    }
    free (array);

    return 0;
}

//Function for reading the 3D array
void read3D (int ***arr, int r, int c, int d)
{   /*traverses the rows first, then columns, 
    and finally the depth */
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            for(k = 0; k < d; k++)
                scanf("%d", &arr[i][j][k]);
        }
    }
    return;
}

//Function to print 2D sections of 3D array
void printsection (int ***arr, int r,  int c, int d)
{
    //loop begins with k (depth) because we are printing 
    //section by section
    for(k = 0; k < d; k++)
    {
        printf("Section %d:\n", k+1);
        for(i = 0; i < r; i++)
        {      //Printing the 2D arrays for each section
            for(j = 0; j < c; j++)
                printf("%d ", arr[i][j][k]);
            printf("\n");
        }
    }
    return ;
}