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
 
int enqueue(Item item, Queue *pq)
{
 
    if(pq->items != MAXQUEUE){
        struct node* newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) {exit(1);}
        newnode->item = item;
        newnode->next = NULL;
        //rear and front point to same item if 1 elem is in queue
        if (pq->items == 0){
            pq->front = newnode;
            pq->rear = newnode;
        }
        else{
            //old rear's next node is newnode
            pq->rear->next = newnode;
            // new rear is newnode
            pq->rear = newnode;
        }
    pq->items++;
    }
    // if num items is maxqueue do nothing
    return 0;
}
int dequeue(Item *pitem, Queue *pq)
{
    // set the item to be deleted so it prints out in main()
    *pitem = pq->front->item;
    if (pq->items > 1){
        Node* cursor = pq->front;
        pq->front = pq->front->next;
        pq->items--;
    }
    // if only 1 item, set rear and next to NULL, reduce item counter by 1
    else if (pq->items == 1){
        pq->rear = pq->front = NULL;
        pq->items--;
    }
    return 0;
}
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}
void printq(Queue *pq){
    // create a node pointer to keep the original queue unchanged
    Node *tmp = pq->front;
    while(tmp != NULL){
        printf("%d ", tmp->item);
        tmp = tmp->next;
    }
    printf("\n");
}
