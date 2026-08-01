//stack.h
#include <stdio.h>
#include <string.h>
#include <stdbool.h>




typedef struct item 
{
    char simvol;
}item_t;

typedef struct node
{
    item_t data;
    struct node * next;
} node_t;

typedef struct stack
{
    node_t * last;
}stack_t;

bool Initializatoin(stack_t * pt);

bool Push(item_t * n, stack_t * pt);

bool Pop(item_t * n, stack_t * pt);
