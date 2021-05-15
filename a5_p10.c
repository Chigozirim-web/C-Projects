/*
CH-230-A
a5_p10.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

void printNum(int num)
{
    if(num == 1)  //base case
      printf("%d\n", 1);
    else
    {  //the function keeps calling itself again 
      //until num == 1, after which it stops
      
        printf("%d\n", num);
        (num)--;
        printNum(num);
    }
}

int main ()
{
    int n;
    scanf("%d", &n);
    printNum(n);  //call function

    return 0;
}