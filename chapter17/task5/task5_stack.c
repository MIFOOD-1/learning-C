#include "task5.h"
#include <stdlib.h>


bool Initializatoin(stack_t * pt)
{
    if(pt == NULL)
        return false;

    pt->last = NULL;
    return true;
};

bool Push(item_t * item, stack_t * pt)
{
    if(item == NULL || pt == NULL)
        return false;
    
    node_t * new_node =  (node_t *)malloc(sizeof(node_t));

    if(new_node == NULL)
    {
        fprintf(stderr, "Oshibka ne havatet pamyati");
        return false;
    }
    new_node->data = *item;

    if(pt->last == NULL)
    {
        pt->last = new_node;
        pt->last->next = NULL;
    }
    else{
    new_node->next = pt->last;
    pt->last = new_node;
    }
    
    return true;
}

bool Pop(item_t * n, stack_t * pt)
{
    if(n == NULL || pt == NULL)
        return false;
    if(pt->last == NULL)
        return false;
    
    *n = pt->last->data;
    node_t * temp = pt->last;

    pt->last = pt->last->next;

    free(temp);
    return true;
}