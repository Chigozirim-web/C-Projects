/*
CH-230-A
a8_p7.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *input1, *input2, *output;
    char line[100], line2[100];

    //open files
    input1 = fopen("text1.txt", "r");
    if(input1 == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    input2 = fopen("text2.txt", "r");
    if(input2 == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    
    output = fopen("merge12.txt", "w");
    if(output == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    //read input1 and write to output
    //read line by line
    while((fgets(line, 100, input1)) != NULL)
        fputs(line, output);
    
    fclose(output);

    //open file again for appending ("a")
    output = fopen("merge12.txt", "a");
    if(output == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    //read line by line
    while((fgets(line2, 100, input2)) != NULL)
        fputs(line2, output);

    fclose(input1);
    fclose(input2);
    fclose(output);

    return 0;

}