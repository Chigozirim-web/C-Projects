/*
CH-230-A
a1_p3.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
int main() {
float result; /* The result of the division */
int a = 5;
float b = 13.5;

/* Fixes: C uses integer division since both a and b are declared as int type.
Use the type cast operator (float) in order to get the correct 
value for result.

(float) is placed infront of b because b is declared as integer type, but is assigned a float value.
So the cast operator will remind C to read it as a float value instead*/

result = a / (float) b;

/* Compiler error: 'result' is of data type float, but takes the format %d
in printf which is a placeholder for integers. To correct that,
change %d to %f */

printf("The result is %f\n", result);
return 0;

}