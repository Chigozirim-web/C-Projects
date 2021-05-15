/*
CH-230-A
a4_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int count_consonants(char str[]);

int main ()
{
    char string [100];
  
    while(1)
    {
        fgets(string, 100, stdin);

        if(string[0] == '\n') //if just the enter key is pressed, then program terminates
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
    int consonant = 0, i = 0;
    while(str[i] != '\n')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {                           //double conditions
            if (str[i] != 'A' && str[i] != 'E' 
            && str[i] != 'I' && str[i] != 'O' 
            && str[i] != 'U' && str[i] != 'a' 
            && str[i] != 'e' && str[i] != 'i'
            && str[i] != 'o' && str[i] != 'u')
            {
                consonant++;
            }
        //first condition ensures that the character is a letter between a-z or A-Z
        //second condition checks if the character is a vowel; if not,
        //consonant is increased by 1
        }
        i++ ;
    }
    return consonant;
}