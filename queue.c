/**
* @file queue.c
*/

/*
CH-230-A
a8_p1.c
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

//newly defined for problem 8.1
int enqueue(Item item, Queue *pq)
{
	Node* newnode;
    newnode = (Node*) malloc (sizeof(Node));
    if(newnode == NULL)
    {
        printf("Error\n");
        return -1;
    }

    //initializing newnode
    newnode->item = item;
    newnode->next = NULL;

    //if queue is empty, set newnode as rear and front
    if(pq->items == 0)
    {
        pq->front = newnode;
        pq->rear = newnode;
        return 0;
    }
    //if queue is full
    else if(queue_is_full(pq))
        return -1;
    //if not, set rear of queue to newnode, and
    //newnode becomes the new rear
    else
    {
        pq->rear->next = newnode;
        pq->rear = newnode;
    }

    pq->items++;
    return 0;
}

//Newly defined function for problem 8.2
int dequeue(Item *pitem, Queue *pq)
{
    //*pitem holds the item of queue front
	*pitem = pq->front->item;
    
    //Case of queue underflow
    if(pq->items == 0)
    {
        pq->front = NULL;
        pq->rear = NULL;
        return -1;
    }

    /* temporary node to hold content of next
    node, while the front node is freed */
    Node* newnode;
    newnode = pq->front->next;
    free(pq->front);
    pq->front = newnode;
    pq->items--;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue* pq)
{
    //cursor to go through the queue
    Node* cursor;
    cursor = pq->front;
    while(cursor != NULL)
    {
        printf("%d ", cursor->item);
        cursor = cursor->next;
    }
    return;
}