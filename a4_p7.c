/*
CH-230-A
a4_p7.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

void print_matrix (int array [] [30], int num);

void print_diagonal (int array [][30], int num);

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
    print_diagonal (array, n);

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


void print_diagonal (int array [][30], int num)
{
    printf("Under the main diagonal:\n");
    for (int row = 1; row < num; row++)
    {       //int row starts from 1 because array[0][0] is the start of 
          //the main diagonal, thus there is no digit behind it to print
        for(int column = 0; column < num; column++)
        {
            if(row == column)
            {
                for(int i = 0; i < column; i++) //variable i serves as an index to print the
                printf("%d ", array[row][i]); //values behind the main diagonal element (array[row][column]
            }                                //where row == column) from 0 t0 column-1
        }
    }
    printf("\n");
    return;
}
