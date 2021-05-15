/*
CH-230-A
a6_p8.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//definition of linked list
struct list
{
    int data;
    struct list *next;
};

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


//main Function

int main ()
{
    char ch;
    int n, no;

    //initializing list
    struct list* ptr;
    ptr = NULL;

    while(1)
    {
        scanf("%c", &ch);
        switch (ch)
        {
            case('a'):
                scanf("%i", &n);
                ptr = insert_end(ptr, n);
                break;

            case ('b'):
                scanf("%i", &n);
                ptr = insert_front(ptr, n);
                break;

            case('r'):
                ptr = remove_first(ptr);
                break;
            
            case('p'):
                print(ptr);
                break;

            case('q'):
                free_(ptr);
                //ending the loop
                return 0;
        }
    }

    return 0;
}