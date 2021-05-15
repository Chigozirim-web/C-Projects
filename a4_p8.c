/*
CH-230-A
a4_p8.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

void print_matrix (int array [] [30], int num);

void sec_diagonal (int array [][30], int num);

int main ()
{
    int array [30] [30];
    int n;
    scanf("%d", &n);

    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < n; column++)
        scanf("%d", & array[row][column]);
    }

    print_matrix (array, n);
    sec_diagonal (array, n);

    return 0;
}


//Creating Functions
void print_matrix (int array [] [30], int num)
{
    printf("The entered matrix is:\n");
    for (int r=0; r<num; r++)  //nested for loop to go through 
    {                         //both rows and columns of the matrix
        for(int c=0; c<num; c++)
        {
            printf("%d ", array[r] [c]);  
        }                                 
        printf("\n");
    }
    return;
}

void sec_diagonal (int array [][30], int num)
{
    printf("Under the secondary diagonal:\n");
    for (int row = 1; row < num; row++)
    {             //row starts from 1 because array[0][3] is the first element of 
                 //the secondary diagonal, thus there is no digit behind it to print
        for(int column = 0; column < num; column++)
        {
            if ((row + column) == (num-1)) 
            {      //for secondary diagonal elements, the sum of their indices is
                  //equal to the the last index of the array which is (n-1) 
                 //for an array with n elements
                for (int i = column+1; i < num; i++)
                    printf("%d ", array[row][i]);
            }
        }
    }
    printf("\n");
    return;
}