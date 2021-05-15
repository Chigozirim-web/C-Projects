/*
CH-230-A
a6_p9.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>


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

//case i: insert element in specified position
struct list* insert(struct list* ptr, int position, int value)
{
    struct list* p = ptr;
    struct list *cursor = ptr;

    //to count the number of elements in list
    int count = 0;
    if(cursor == NULL)
        count = 0;
    
    while(cursor != NULL)
    {
        ++count;
        cursor = cursor->next;
    }

     //check for case where position is negative or
    //more than the no of Elements in list
    if((position < 0) || (position > count))
    {
        printf("Invalid position!\n");
        return ptr;
    }    

    else 
    {
        struct list * new;
        new = (struct list*) malloc (sizeof(struct list));
        if (new == NULL)
        {
            printf("Error allocating memory\n");
            return ptr;
        }   
    
        new->data = value;

        //if element is inserted at the beginning
        if(position == 0)
        {
            new->next = p;
            p = new;
            return p;
        }

         //loops through until it gets to the
        //specified position 
        for(int i = 0; i < (position-1); i++)
        {
            if(p->next != NULL)
                p = p->next;
        }

        /* exchanges the pointers at the specified position.
        new element points to the element the previous one in
        the given position pointed to, while the previous
        element now points to new */
        new->next = p->next;
        p->next = new;
    }     
    return ptr;
}

//case R: reversing the linked list
struct list* Reverse(struct list* ptr)
{
    struct list* point1 = ptr;
    struct list* point2 = NULL;
    struct list* nextel;
    /* the loop is going to store the next element in nextel, 
    set the next pointer to the previous element, 
    then move to the next element */
    while(point1 != NULL){
        nextel = point1->next;
        point1->next = point2;
        point2 = point1;
        point1 = nextel;
    }
    //sets the head of the list to the last element 
    //so that it reads backwards
    ptr = point2;
    return ptr;
}



//main Function
int main ()
{
    char ch;
    int n, position;

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

            case('i'):
                scanf("%d", &position);
                scanf("%d", &n);
                ptr = insert(ptr, position, n);
                break;

            case('R'):
                ptr = Reverse(ptr);
                break;

            case('q'):
                free_(ptr);
                //ending the loop
                return 0;
        }
    }

    return 0;
}