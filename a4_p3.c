/*
CH-230-A
a4_p3.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

//yo! you have a complaint about this code


/* I wrote this code on a linux terminal and it could not complie
completely (because of the function 'pow'). It only works when -lm is
 called at the linux terminal ie gcc -Wall -o assign4p3 a4_p3.c -lm */

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num);

float highest_num (float arr[], int num);

float smallest_num(float arr[], int num);

float sum (float arr[], int num);

int main ()
{
    float array[15];
    int i = 0;
    for(; i < 15; i++)
    {
        scanf("%f", &array[i]);
        if (array[i] < 0) //loop terminates if a negative number is entered
            break;
    }
    int NoOfElems = i;
    //printf("no: %d\n", NoOfElems);

    char letter;
    printf("Enter a letter: \n");
    getchar();
    scanf("%c", &letter);

    switch (letter)
    {
        case('m'):
            printf("Geometric mean = %f\n", geometric_mean(array, NoOfElems));
            break;
        case('h'):
            printf("The highest number: %f\n", highest_num (array, NoOfElems));
            break;
        case('l'):
            printf("The lowest number: %f\n", smallest_num(array, NoOfElems));
            break;
        case('s'):
            printf("Sum = %f\n",sum(array, NoOfElems));
            break;
    }

    return 0;
}

//Creating Functions
float geometric_mean(float arr[], int num)
{
    int i = 0; 
    float product = 1, mean;

    for(; i < num; i++)
        product *= arr[i];
    
    mean = pow(product, (1.0/num)) ;
    return mean;
}

float highest_num (float arr[], int num)
{
    float max = arr[0];
    for(int i = 1; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

float smallest_num(float arr[], int num)
{
    float min = arr[0];
    for(int i = 1; i < num; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

float sum (float arr[], int num)
{
    float sum = 0;
    for (int i = 0; i < num; i++)
       sum += arr[i]; 
    
    return sum;
}