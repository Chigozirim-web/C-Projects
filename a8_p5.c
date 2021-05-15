/*
CH-230-A
a8_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char c[2]; //array to store read characters
    FILE *fptr;

    fptr = fopen("chars.txt", "r");
    if(fptr == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    //To get first two characters from file
    int count = 0;
    while(count<2)
    {
        c[count] = getc(fptr);
        count++;
    }
    
    //output file for writing
    FILE* output;
    output = fopen("codesum.txt", "w");
    if(output == NULL)
    {
        printf("Could not create file\n");
        exit(1);
    }

    fprintf(output, "Sum of ASCII code = %d\n", c[0]+c[1]);

    fclose(fptr);
    fclose(output);

    return 0;
}