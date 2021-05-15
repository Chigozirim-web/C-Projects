/*
CH-230-A
a8_p6.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *input1, *input2, *output;
    int i;
    char buffer[50], buffer2[50];

    //memory allocation for char array  to read name of files
    char **file_name;
    file_name = (char**) malloc (sizeof(char*) * 2);
    if(file_name == NULL)
        exit(1);
    for(i = 0; i < 2; i++)
    {
        file_name[i] = (char*) malloc (sizeof(char) * 50);
        //assuming name of file is not more than 50 characters
        if(file_name[i] == NULL)
            exit(1);
    }

    //reading name of files
    printf("Please enter name of 2 files: \n");
    for(i = 0; i < 2; i++)
    {
        scanf("%s", file_name[i]);
    }

    //open files
    input1 = fopen(file_name[0], "r");
    if(input1 == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    input2 = fopen(file_name[1], "r");
    if(input2 == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    output = fopen("reults.txt", "w");
    if(output == NULL)
    {
        printf("Error.\n");
        exit(1);
    }

    //read doubles from input file
    double d1, d2;
    fgets(buffer, 50, input1);
    sscanf(buffer, "%lf", &d1);

    fgets(buffer2, 50, input2);
    sscanf(buffer2, "%lf", &d2);

    //Performing calculations
    fprintf(output, "Sum = %lf\n", d1+d2);
    fprintf(output, "Difference = %lf\n", d1-d2);
    fprintf(output, "Product = %lf\n", d1*d2);
    fprintf(output, "Division = %lf\n", d1/d2);

    //closing files
    fclose(input1);
    fclose(input2);
    fclose(output);

    //free dynamic memory
    for(i = 0; i < 2; i++)
        free(file_name[i]);
    
    free(file_name);

    return 0;

}