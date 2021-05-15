#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "stack.h"

//stack.c created for problem7.7
//only a few functions were modified

int isEmpty (Stack *s)
{
    return !(s->count == 0);
    //returns 0 if stack is empty,
    //and 1 otherwise
}

//Case s:
void push (int x, Stack* s)
{
    int num = s->count;
    if (num == 12)
    {
        //for case where stack is full already
        return;
    }
    
    if(num < 12)
    {
        s->array[s->count] = x;
        s->count++;
    }
    return;
}

//Case p:
void pop (Stack *s)
{
    if(isEmpty(s)== 0)
        return;

    int num = s->count;
    printf("%d", s->array[num-1]);
    s->array[num] = INT_MIN;
    s->count--;
}

//Case e
void printS(Stack *s)
{
    if(isEmpty(s) == 0)
        return;

    while(s->count > 0)
    {
        pop(s);
    }
    return;
}