/*
CH-230-A
a6_p5.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h> 

int main ()
{
    unsigned char ch;
    scanf("%c", &ch);

    printf("The decimal representation is: %d\n", ch);

     //To count the number of bits the number has
    //(in binary form)
    int count = 0;
    int n; //in order to use in loop

     // >> shifts ch to the right by one in every 
    //iteraton of the loop, until ch == 0 
    for(n = ch; n > 0; n >>= 1)
        count++;

    printf("The backwards binary representation is: ");

    /* (count-1) because bits start from 2^0 ,
    and i starts from 0 because we are 
    printing backwards */
    for(int i = 0; i <= (count-1); i++)
    {
         //use of bitwise 'and' and mask to extract 
        //value in each bit of ch
        if(ch & (1 << i))
            printf("1");
        else
        {
            printf("0");
        }
        
    }

    printf("\n");
    return 0;
}