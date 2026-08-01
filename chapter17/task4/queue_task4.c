//Листинг 17.7. Файл реализации queue.c
//queue.c -- реализация типа Queue
#include <stdio.h>
#include <stdlib.h>
#include "queue_task4.h"

//локальные функции
static void CopyToNode(Item item, Node * pn);
static void CopyToItem(Node * pn, Item * pi);

void InitializeQueue(Queue * pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

bool QueueIsFull(const Queue * pq)
{
    return pq->items == MAXQUEUE;
}

bool QueueIsEmpty(const Queue * pq)
{
    return pq->items == 0;
}
int QueueItemCount(const Queue * pq)
{
    return pq->items;
}

bool EnQueue(Item item, Queue * pq)
{
    Node * pnew;
    if(QueueIsFull(pq))
        return false;
    pnew = (Node *) malloc(sizeof(Node));
    if(pnew == NULL)
    {
        fprintf(stderr, "Ne udaysta videlit pamyat!\n");
        exit(1);
    }
    CopyToNode(item, pnew);
    pnew->next = NULL;
    if(QueueIsEmpty(pq))
        pq->front = pnew;       //элемент помещается в началао очереди
    else
        pq->rear->next = pnew;  //связывание с концом очереди
    pq->rear = pnew;        //запись местоположения конца очереди
    pq->items++;            //увелечение на 1 количества элементов в очереди

    return true;
}

bool DeQueue(Item * pitem, Queue * pq)
{
    Node * pt;
    if(QueueIsEmpty(pq)) 
        return false;
    CopyToItem(pq->front, pitem);
    pt = pq->front;
    pq->front = pq->front->next;
    free(pt);
    pq->items--;
    if(pq->items == 0)
        pq->rear = NULL;
    return true;
}

//опустошение очереди
void EmptyTheQueue(Queue * pq)
{
    Item dummy;
    while(!QueueIsEmpty(pq))
        DeQueue(&dummy, pq);
}

//локальные функции
static void CopyToNode(Item item, Node * pn)
{
    pn->item = item;
} 
static void CopyToItem(Node * pn, Item * pi)
{
    *pi = pn->item;
}