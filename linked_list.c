/*
CH-230-A
a7_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

//case a: element at the end
struct list* insert_end(struct list* p, int value)
{
    struct list *cursor, *newElem;
    cursor = p;
    newElem = (struct list *) malloc (sizeof(struct list));
    if (newElem == NULL)
    {
        printf("Error allocating memory\n");
        return p;
    }
    newElem->data = value;
    newElem->next = NULL; 

    if(p == NULL)
        return newElem;
    
    //cursor to make the initial list point to newElem
    while(cursor->next != NULL)
        cursor = cursor->next;
    
    cursor->next = newElem;
    return p;
}


//case b: element at the first position
struct list* insert_front(struct list* my_list, int value) 
{
    struct list* newElem;
    newElem = (struct list*) malloc(sizeof(struct list));
    if (newElem == NULL) 
    {
        printf("Error\n");
        return my_list;
    }
    newElem -> data = value;
    newElem -> next = my_list;
    return newElem;
}

//case r: remove first element
struct list* remove_first(struct list* ptr)
{
    if(ptr == NULL)
        return ptr;

    struct list* cursor;
    cursor = ptr->next;
    
    //free memory of removed element
    free(ptr);
    ptr = cursor;
    return ptr;
}

//case p: print linked list elements
void print(struct list* ptr)
{
    while(ptr != NULL)
    {
        printf ("%d ", ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

//case q: free memory and quit execution
void free_(struct list *ptr)
{
    struct list* nextElem;
    while(ptr != NULL)
    {
        nextElem = ptr->next;
        free(ptr);
        ptr = nextElem;
    }
}
