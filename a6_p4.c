/*
CH-230-A
a6_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#define INTERMEDIATE

int main ()
{
    int dim, i, sum = 0;
    scanf("%i", &dim);
    int *vector1, *vector2;

    //dynamic memory allocation
    vector1 = (int*) malloc (sizeof(int) * dim);
    if(vector1 == NULL)
        exit(1);

    vector2 = (int*) malloc (sizeof(int) * dim);
    if(vector2 == NULL)
        exit(1);

    //input elements of array
    for(i = 0; i < dim; i++)
        scanf("%d", &vector1[i]);

    for(i=0; i<dim; i++)
        scanf("%d", &vector2[i]);

    #ifdef INTERMEDIATE
    printf("The intermediate product values are: \n");
    for(i = 0; i < dim; i++)
    {
        int scalar = vector1[i] * vector2[i];
        printf("%d\n", scalar);
        sum += scalar;
    }
    printf("The scalar product is: %d\n", sum);

    #else
    for(i = 0; i < dim; i++)
        sum += vector1[i] * vector2[i];
    printf("The scalar product is %d\n", sum);

    #endif

    //free dynamic memeory
    free(vector1);
    free(vector2);    

    return 0;
}