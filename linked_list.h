/*
CH-230-A
a7_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

 //in the case where the header file is
//included more than once
#ifndef LINKED_LIST_H

#define LINKED_LIST_H

//definition of structure: linked list
struct list
{
    int data;
    struct list *next;
};

//Functions prototypes
struct list* insert_end(struct list* p, int value);
struct list* insert_front(struct list* my_list, int value);
struct list* remove_first(struct list* ptr);
void print(struct list* ptr);
void free_(struct list *ptr);

#endif
