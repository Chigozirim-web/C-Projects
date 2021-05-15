/*
CH-230-A
a5_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

/*I was supposed to write a function for this :( */

#include <stdio.h>

int main ()
{
    int n; char c;
    scanf("%d",&n);
    getchar();
    scanf("%c", &c);

    for (int i = n; i != 0; i--) //starts with the input number
    {
        for(int j = 1; j <= i; j++) //for each iteration of the first loop(for rows),
            printf("%c", c);  //the second loop prints the character i times (for columns)
        printf("\n");
    }
    return 0;
}