/*
CH-230-A
a7_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <stdio.h>
#include "linked_list.h"

int main ()
{
    char ch;
    int n;

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