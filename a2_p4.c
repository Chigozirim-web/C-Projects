/*
CH-230-A
a2_p4.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

# include<stdio.h>

int main ()
{
    float a, b,h;
    scanf("%f %f %f", &a, &b, &h);

    float triangle_area = 0.5*a*h; 
    float trapezoid_area = (a+b)*0.5*h; //formula-area of trapezoid
    
    printf("square area=%f\n", a*a); 
    /*creation of a variable for square area and rectangle area 
    is no necessary herebecause they are simple expressions which 
    can be executed in printf without any degree of error. 
    It doesn't work that way with trapezoid area*/       

    printf("rectangle area=%f\n", a*b);
    printf("triangle area=%f\n", triangle_area);
    printf("trapezoid area=%f\n", trapezoid_area);

    return 0;
}