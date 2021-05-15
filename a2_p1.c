/*
CH-230-A
a2_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

# include <stdio.h>

int main ()

{
    double x,y;
    scanf("%lf %lf", &x, &y);

    printf("sum of doubles=%lf\n", x+y);
    printf("difference of doubles=%lf\n", x-y);
    printf("square=%lf\n", x*x);

    int a,b;
    scanf("%d %d", &a, &b);
    printf("sum of integers=%d\n", a+b);
    printf("product of integers=%d\n", a*b);

    char char1, char2;
    getchar();
    scanf("%c %c", &char1, &char2);
    printf("sum of chars=%d\n", char1+char2);
    printf("product of chars=%d\n", char1*char2);
    printf("sum of chars=%c\n", char1+char2);
    printf("product of chars=%c\n", char1*char2);

    return 0;
}