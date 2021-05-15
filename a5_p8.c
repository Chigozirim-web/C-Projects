/*
CH-230-A
a5_p8.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void readMatrix(int **matrix, int row, int column);
void printMatrix(int **matrix, int row, int column);
void matrixMultilpy(int **matrix1, int **matrix2, int 
**matrix3, int row1, int row2, int column2);

int main ()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    //Dynamically allocating memory for the 3 matrices
    //matrixA: n * m
    int **matrixA;
    matrixA = (int **) malloc (sizeof(int *) * n);
    if(matrixA == NULL)
        exit(1);
    for(int row = 0; row < n; row++)
    {
        matrixA[row] = (int *) malloc (sizeof(int) * m);
        if(matrixA[row] == NULL)
            exit(1);
    }

    //matrixB: m * p
    int **matrixB;
    matrixB = (int **) malloc (sizeof(int *) * m);
    if(matrixB == NULL)
        exit(1);
    for(int row = 0; row < m; row++)
    {
        matrixB[row] = (int *) malloc (sizeof(int) * p);
        if(matrixB[row] == NULL)
            exit(1);
    }

    //matrixC: n * p
    int **matrixC;
    matrixC = (int **) malloc (sizeof(int *) * n);
    if(matrixC == NULL)
        exit(1);
    for(int row = 0; row < n; row++)
    {
        matrixC[row] = (int *) malloc (sizeof(int) * p);
        if(matrixC[row] == NULL)
            exit(1);
    }

    readMatrix(matrixA, n, m);
    readMatrix(matrixB, m, p);

    //printing matrixA
    printf("Matrix A:\n");
    printMatrix(matrixA, n, m);

    //ptinting matrixB
    printf("Matrix B:\n");
    printMatrix(matrixB, m, p);

    matrixMultilpy(matrixA, matrixB, matrixC, n, m, p);
    printf("The multiplication result AxB:\n");
    //printing the AxB matrix (matrixC)
    printMatrix(matrixC, n, p);

    printf("\n");

    //Deallocating memory
    //for matrixA
    for(int row = 0; row < n; row++)
        free(matrixA[row]);
    free(matrixA);

    //for matrixB
    for(int row = 0; row < m; row++)
        free(matrixB[row]);
    free(matrixB);

    //for matrixC
    for(int row = 0; row < n; row++)
        free(matrixC[row]);
    free(matrixC);

}




//Creating Functions
void readMatrix(int **matrix, int row, int column)
{  //read rows first, then columns for each row
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < column; c++)
            scanf("%d", &matrix[r][c]);
    }
}

void printMatrix(int **matrix, int row, int column)
{
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < column; c++)
            printf("%3d ", matrix[r][c]);
        //%3d to allign the numbers better
        //regardless of how many digits they have
        printf("\n");
    }
}

void matrixMultilpy(int **matrix1, int **matrix2, int
 **matrix3, int row1, int row2, int column2)
{
    int sum = 0;
    for(int i = 0; i < row1; i++)
    { //the dimensions of matrix3 (which is matrix1
     // * matrix2) are matrix3[row1][column2]
        for(int k = 0; k < column2; k++)
        {
            for(int j = 0; j < row2; j++)
            {
                sum+= matrix1[i][j] * matrix2 [j][k];
              //j could be set as < column1 as well since 
             //column1 = row2 for matrix multiplication
            }

            matrix3[i][k] = sum;
            sum = 0;
        }
    }
}