/*
CH-230-A
a4_p11.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int count_insensitive(char *str, char c);

int main ()
{

    char c;
    scanf("%c", &c);
    getchar();  //takes up the enter key(new line character), 
               //so it is not read as the string
    char *string;
    char *string2;
    
    string = (char *) malloc (sizeof(char) * 50);
    if (string == NULL)
        exit(1);

    fgets(string, 50, stdin);
    string [(strlen(string) - 1)] = '\0';  //removal of newline character that was entered
    int length1 = strlen(string);         //because of the usage of fgets

    string2 = (char *) malloc (sizeof(char) * length1);
    strcpy(string2, string);  //copy string into the new string: string2

    free(string);

    int number = count_insensitive (string2, c);
    printf("The character '%c' occurs %d times\n", c, number);

    free(string2);   //memory deallocation
    return 0;
}



//Function creation

int count_insensitive(char *str, char c)
{
    int count = 0;
    for(int i = 0;str[i] != '\0'; i++)
    {              //case insensitive comparison eg: 'D' is same as 'd'
        if ((toupper (c) == str[i]) || (tolower (c) == str[i]))
            count++;
    }
    return count;
}