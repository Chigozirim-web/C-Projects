/*
CH-230-A
a4_p5.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int count_consonants(char str[]);

int main ()
{
    //The same main function from problem 4.4
    //Only the "count_consonants" function was modified
    char string [100];
  
    while(1)
    {
        fgets(string, 100, stdin);
        
        if(string[0] == '\n')
            break;
        else
        {
            int num = count_consonants(string); 
            printf("Number of consonants=%d\n", num);
        }
    }
    return 0;
}


int count_consonants(char str[])
{
    int consonant = 0;
    char *strPtr; //char pointer created to point to the input array

    for(strPtr = str; *strPtr != '\n'; strPtr++)
    {                    //strPtr pointing to the array str means it is
                         //pointing to the first element in the array
        if((*strPtr >= 'a' && *strPtr <= 'z') || (*strPtr >= 'A' && *strPtr <= 'Z'))
        {                 //double conditions
            if (*strPtr != 'A' && *strPtr != 'E' 
            && *strPtr != 'I' && *strPtr != 'O' 
            && *strPtr!= 'U' && *strPtr != 'a' 
            && *strPtr != 'e' && *strPtr != 'i'
            && *strPtr != 'o' && *strPtr != 'u')
                consonant++;

        //first condition ensures that the character is a letter between a-z or A-Z
        //second condition checks if the character is a vowel; if not,
        //consonant is increased by 1
        }
    }
    return consonant;
}
    