// tree.c
// реализация двоичного дерева поиска для клуба животных

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task8.h"
typedef struct pair
{
    Trnode *parent;
    Trnode *child;

} Pair;

// локальные функции

static Trnode *MakeNode(const Item *pi);
static bool ToLeft(const Item *i1, const Item *i2);
static bool ToRight(const Item *i1, const Item *i2);
static void AddNode(Trnode *new_node, Trnode *root);
static void InOrder(const Trnode *root,
                    void (*pfun)(Item item));
static Pair SeekItem(const Item *pi,
                     const Tree *ptree);
static void DeleteNode(Trnode **ptr);
static void DeleteAllNodes(Trnode *root);
static void DeleteList(List *head);

void InitializeTree(Tree *ptree)
{
    ptree->root = NULL;
    ptree->size = 0;
}

bool TreeIsEmpty(const Tree *ptree)
{
    return ptree->root == NULL;
}

bool TreeIsFull(const Tree *ptree)
{
    return ptree->size >= MAXITEMS;
}

int TreeItemCount(const Tree *ptree)
{
    return ptree->size;
}
bool AddItem(const Item *pi, Tree *ptree)
{
    Pair look;

    look = SeekItem(pi, ptree);
    if(look.child != NULL)
    {
        List *new_pet;

        new_pet = malloc(sizeof(List));
        if(new_pet == NULL)
            return false;
        strcpy(new_pet->petkind,
               pi->head->petkind);
        new_pet->next =
              look.child->item.head;
        look.child->item.head =
              new_pet;
        return true;
    }

    Trnode *new_node;
    new_node = MakeNode(pi);
    if(new_node == NULL)
        return false;
    ptree->size++;
    if(ptree->root == NULL)
    {
        ptree->root = new_node;
    }
    else
    {
        AddNode(new_node, ptree->root);
    }
    return true;
}
bool InTree(const Item *pi,
            const Tree *ptree)
{
    Pair look;
    look = SeekItem(pi, ptree);

    return look.child != NULL;
}

bool DeleteItem(const Item *pi,
                Tree *ptree)
{
    Pair look;

    look = SeekItem(pi, ptree);
    if(look.child == NULL)
        return false;

    if(look.parent == NULL)
    {
        DeleteNode(&ptree->root);
    }

    else if(look.parent->left == look.child)
    {
        DeleteNode(&look.parent->left);
    }

    else
    {
        DeleteNode(&look.parent->right);
    }
    ptree->size--;

    return true;
}
void Traverse(const Tree *ptree,
              void (*pfun)(Item item))
{
    if(ptree != NULL)
        InOrder(ptree->root, pfun);
}

void DeleteAll(Tree *ptree)
{
    if(ptree != NULL)
    {
        DeleteAllNodes(ptree->root);

        ptree->root = NULL;

        ptree->size = 0;
    }
}

static void InOrder(const Trnode *root,
                    void (*pfun)(Item item))
{
    if(root != NULL)
    {
        InOrder(root->left, pfun);


        (*pfun)(root->item);


        InOrder(root->right, pfun);
    }
}

static void AddNode(Trnode *new_node,
                    Trnode *root)
{
    if(ToLeft(&new_node->item,
              &root->item))
    {

        if(root->left == NULL)
            root->left = new_node;

        else
            AddNode(new_node, root->left);

    }
    else if(ToRight(&new_node->item,
                    &root->item))
    {

        if(root->right == NULL)
            root->right = new_node;

        else
            AddNode(new_node, root->right);

    }
    else
    {
        fprintf(stderr,
                "Oshibka dobavleniya\n");

        exit(1);
    }
}

static bool ToLeft(const Item *i1,
                   const Item *i2)
{
    return strcmp(i1->petname,
                  i2->petname) < 0;
}

static bool ToRight(const Item *i1,
                    const Item *i2)
{
    return strcmp(i1->petname,
                  i2->petname) > 0;
}
static Trnode *MakeNode(const Item *pi)
{
    Trnode *new_node;

    new_node = malloc(sizeof(Trnode));
    if(new_node == NULL)
        return NULL;
    strcpy(new_node->item.petname,
           pi->petname);
    new_node->item.head = NULL;
    // копируем список видов
    List *src = pi->head;
    List **dst = &new_node->item.head;
    while(src != NULL)
    {
        *dst = malloc(sizeof(List));
        if(*dst == NULL)
        {
            DeleteList(new_node->item.head);

            free(new_node);

            return NULL;
        }
        strcpy((*dst)->petkind,
               src->petkind);

        (*dst)->next = NULL;
        dst = &(*dst)->next;
        src = src->next;
    }
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

static Pair SeekItem(const Item *pi,
                     const Tree *ptree)
{
    Pair look;

    look.parent = NULL;
    look.child = ptree->root;
    while(look.child != NULL)
    {

        if(ToLeft(pi,
                  &look.child->item))
        {
            look.parent = look.child;

            look.child =
                look.child->left;
        }
        else if(ToRight(pi,
                        &look.child->item))
        {
            look.parent = look.child;


            look.child =
                look.child->right;
        }
        else
        {
            break;
        }
    }
    return look;
}
static void DeleteNode(Trnode **ptr)
{
    Trnode *temp;
    if((*ptr)->left == NULL)
    {
        temp = *ptr;
        *ptr = (*ptr)->right;
        DeleteList(temp->item.head);
        free(temp);
    }
    else if((*ptr)->right == NULL)
    {
        temp = *ptr;
        *ptr = (*ptr)->left;
        DeleteList(temp->item.head);
        free(temp);
    }
    else
    {
        temp = (*ptr)->left;
        while(temp->right != NULL)
            temp = temp->right;
        temp->right = (*ptr)->right;
        temp = *ptr;
        *ptr = (*ptr)->left;
        DeleteList(temp->item.head);
        free(temp);
    }
}
static void DeleteAllNodes(Trnode *root)
{
    if(root != NULL)
    {
        DeleteAllNodes(root->left);

        DeleteAllNodes(root->right);

        DeleteList(root->item.head);
        free(root);
    }
}

static void DeleteList(List *head)
{
    List *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}