/*
CH-230-A
a3_p7.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

void print_form (int n, int m, char c)
{
    for (int row = m; row <= (m+n-1); row++)
    //the first loop loops through the rows 
    {
        for(int column = 1; column <= row; column++)
        printf("%c",c);
    // the second loop loops through the column (height) for 
    // each iteration of the first loop (which is for the rows)
        printf("\n");
    }
    return;

    //this function prints a trapezoid with top base m, lower
    //base (m+n-1), and height n
}

int main ()
{
    int n, m;
    char c;

    scanf("%d %d", &n, &m);
    getchar();
    scanf("%c", &c);

    print_form (n, m, c);
    return 0;
}