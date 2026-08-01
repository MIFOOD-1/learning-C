#ifndef TASK7_H
#define TASK7_H

#include <stdbool.h>

#define WORDSIZE 50

typedef struct item
{
    char word[WORDSIZE];
    int count;
} Item;

typedef struct node
{
    Item item;
    struct node *left;
    struct node *right;
} Node;

typedef struct tree
{
    Node *root;
} Tree;

// Работа с деревом
void InitializeTree(Tree *pt);
bool AddWord(Tree *pt, const char *word);
Node *FindWord(Tree *pt, const char *word);
void ShowTree(const Tree *pt);
void DeleteTree(Tree *pt);

#endif