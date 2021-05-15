/*
CH-230-A
a3_p2.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char ch;
    int n;

    scanf("%c", &ch);
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++)
    printf("%c\n", ch-i);

    return 0;
}