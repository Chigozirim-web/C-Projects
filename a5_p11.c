/*
CH-230-A
a5_p11.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>

int Isprime (int num, int div)
{
    /*In recursion process, this is executed if
    num was not divisible by any other div
    except div == 1 */
    if((div == 1))
        return 1;

    //NB: div is = (num - 1)
    else 
    {
        /* if the number is 1 or is divisible
        by a certain div != 1, then
        it is not prime */
        if((num == 1) || (num % div) == 0)
             return 0;
        else
        {
            /*in the case where the above conditions are
            not satisfied, the function keeps calling
            itself until one of the conditions is true*/
            div--;
            return Isprime(num, div);
        }
    }   
}

int main ()
{
    int x;
    scanf("%d", &x);

    /*int y set as a variable for division when 
    the function is called, to check divisibility
    of x until (but not always) y = 1 */
    int y = x - 1;

    if((Isprime(x,y)) == 1)
        printf("%d is prime\n", x);

    else if ((Isprime(x,y)) == 0)
    {
        printf("%d is not prime\n", x);
    }
    
    return 0;
}