/*
CH-230-A
a4_p12.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceAll (char *str, char c, char e);

int main ()
{
    char c, e, buffer;
    char *string;
    
    string = (char *) malloc (sizeof(char) * 80);
    if (string == NULL)
    exit(1);

    while(1)  //keeps executing the program until "stop" is entered
    {         //as the string
        printf("Enter the string: ");
        fgets(string, 80, stdin);

        if(strcmp(string, "stop\n\0") == 0)
            break;   

        else
        {
            printf("Enter character to be replaced: ");
            scanf("%c", &c);
            printf("Character to be replaced: %c\n", c);
        
            printf("Enter the replacing character: ");
            getchar();    //takes the newline character after the first char (c) has been read
            scanf("%c",&e);
            printf("Replacing character: %c\n", e);
        
            scanf("%c", &buffer); //because after reading the 2nd character and pressing enter,
                                //the new line character is read as the string. So this extra char
                               //'buffer' serves to read the new line. 
            printf("String before change: %s\n", string);

            replaceAll(string, c, e);
            printf("new string: %s\n", string);
        }
        
    }
    free(string);  //deallocate the memory
    return 0;
}




//Creating the Function
void replaceAll (char *str, char c, char e)
{
    for (int i = 0; str[i] != '\n'; i++)
    {
        if (str[i] == c)
            str[i] = e;
    }
    return;
}