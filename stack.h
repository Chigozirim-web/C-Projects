#ifndef STACK_H
#define STACK_H

/* STRUCT DEFINITION */
typedef struct stack
{
    unsigned int count;
    int array[12];
}Stack;


/* FUNCTION DECLARATIONS */
void push (int x, Stack *s);
void pop (Stack *s);
void printS(Stack *s);
int isEmpty(Stack *s);

#endif