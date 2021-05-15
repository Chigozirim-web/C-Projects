/*
CH-230-A
a8_p9.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/


typedef struct name
{
    char fname[30];
}file_num;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{

    char buffer[64];
    int n;
    printf("Enter number of files you want: ");
    scanf("%d", &n);


    //an array of struct for storing names of file
    //to be opened
    file_num *f;
    f = (file_num*) malloc (sizeof(file_num) * n);
    if(f == NULL)
        exit(1);

    int i;
    for(i = 0; i < n; i++)
    {
        printf("Enter the name of file %d: \n", i+1);
        scanf("%s", f[i].fname);
    }

    //array of pointers to file
    FILE **fptr;
    fptr = (FILE**) malloc (sizeof(FILE*) * n);
    if(fptr == NULL)
        exit(1);

    //opening each inputed file
    for(i = 0; i < n; i++)
    {
        fptr[i] = fopen(f[i].fname, "r");
        if(fptr[i] == NULL)
        {
            printf("An error occured in opening file.\n");
            exit(1);
        }
    }

    //opening output file
    FILE *output;
    output = fopen("output.txt", "w");
            
    printf("\nConcating the content of %d files ...\n", n);
    printf("The result is:\n");

    //Writing data to stdout and file
    for(i = 0; i < n; i++)
    {
        while(!feof(fptr[i]))
        {
             //reading and writing successively 
            //into output file, and standard output
            int chunk_read = fread(buffer, 1, 64, fptr[i]);
            fwrite(buffer, chunk_read, 1, output);
            fwrite(buffer, chunk_read, 1, stdout);
        }

        putc('\n', output);
        putc('\n', stdout);
           
    }

    printf("The result was written into output.txt\n");

    //closing files
    for(i = 0; i < n; i++)
    {
        fclose(fptr[i]);
    }
    fclose(output);
    
    //freeing dynamically allocated memory
    free(f);
    free(fptr);

    return 0;
}

