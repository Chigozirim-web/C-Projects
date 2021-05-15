/*
CH-230-A
a2_p6.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

 #include <stdio.h>

 int main ()
 {
     double x, y;
     scanf("%lf %lf", &x, &y);

    double *ptr_one; ptr_one = &x;
    double *ptr_two; ptr_two = &x; 
    double *ptr_three; ptr_three = &y;

    printf("Address one =%p\n", ptr_one);
    printf("Address two =%p\n", ptr_two); 
    /* The ouput shows that ptr_one and ptr_two have
    the same address since they both point to variable x */
    
    printf("Adress three = %p\n", ptr_three);

    return 0;
 }