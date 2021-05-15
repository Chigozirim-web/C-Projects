/*
CH-230-A
a7_p2.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//defining struct type
struct doubly_linked
{
    char data;
    struct doubly_linked *next;
    struct doubly_linked *previous;
};

typedef struct doubly_linked list;

/* Creating Functions */

//Case1: insert element in front
list* insertFront(list *ptr, char ch)
{
    list *newElem;

    //memory allocation
    newElem = (list *) malloc (sizeof(list));
    if(newElem == NULL)
    {
        printf("Error\n");
        return ptr ;
    }

    newElem -> data = ch;
    newElem -> previous = NULL;

    if(ptr == NULL)
        newElem -> next = NULL;
    else
    {
        newElem -> next = ptr;
        ptr -> previous = newElem;
    }

    return newElem;
}

//case 2: remove all elements with given chatacter
list *removeChar(list* ptr, char ch)
{
    list* current = ptr; 
    list *p = ptr; 
    list *before;
    list *after; 

    int pos = 0;

    //first to check if 'ch' is in the list
    while(p != NULL)
    {
        if(p->data == ch)  
            ++pos;     
        p = p->next;
    }

    //then to delete any appearance of 'ch' in the list
    if(pos == 0)
    {
        printf("The element is not in the list!\n");
        return ptr;
    }    

    else
    {
        if (ptr->next == NULL && ptr->previous == NULL)
        {
            free(ptr);
            return ptr = NULL;
        }
    
        while(current != NULL)
        {
            if(current->data == ch)
            {
                after = current->next;
                before = current->previous;

                //conditions for removal of 'ch'
                //if list contains just 'ch'
                if (after == NULL && before == NULL) 
                {
                    free(current);
                    ptr = NULL;
                }
                //if 'ch' is at the beginning
                else if (before == NULL) 
                {
                    ptr = after;
                    free(current);
                    ptr->previous = NULL;
                    current = ptr;
                }
                //if 'ch' is at the end
                else if (after == NULL)
                {
                    free(current);
                    before->next = NULL;
                    current = after;
                }
                //if 'ch' is somewhere else in the list
                else  
                {
                    free(current);
                    before->next = after;
                    after->previous = before;
                    current = after;
                }
            }
            //if 'ch' != current->data, move to next
            else
                current = current->next;
        }
        return ptr;
    }
}
    
//Case 3: print list
void print(list* ptr)
{
    while(ptr != NULL)
    {
        printf ("%c ", ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

//case 4: print list backwards
void print_back(list* ptr)
{
    list* temp;
    if(ptr == NULL)
        printf("Empty list\n");
    else
    {
        //loop through to the end of list
        while(ptr->next != NULL)
        {
            temp = ptr;
            ptr = ptr->next;
            ptr->previous = temp;
        }
        //then print list from the last element
        while(ptr != NULL){
            printf("%c ", ptr->data);
            ptr = ptr->previous;
        }
        printf("\n");
    }
}


//Case 5: free memory and empty list
void free_(list *ptr)
{
    list* nextElem;
    while(ptr != NULL)
    {
        nextElem = ptr->next;
        free(ptr);
        ptr = nextElem;
    }
}


//Main Function
int main ()
{
    int number;
    char ch;

    //Initializing doubly linked list
    list *head;
    head = NULL;

    while(1)
    {
        scanf("%i", &number);
        switch(number)
        {
            case(1):
                getchar();
                scanf("%c", &ch);
                head = insertFront(head, ch);
                break;
            case(2):
                getchar();
                scanf("%c", &ch);
                head = removeChar(head, ch);
                break;
            case(3):
                print(head);
                break;
            case(4):
                print_back(head);
                break;
            case(5):
                free_(head);
                //end loop
                return 0;
        }
    }
   
   return 0;
}