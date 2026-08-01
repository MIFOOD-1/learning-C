// task8.h
// интерфейс двоичного дерева поиска для клуба животных

#ifndef TASK8_H_
#define TASK8_H_

#include <stdbool.h>
// список видов животных с одинаковой кличкой
typedef struct list
{
    char petkind[20];
    struct list *next;

} List;

// элемент дерева
typedef struct item
{
    char petname[20];   // кличка животного
    List *head;         // список видов с этой кличкой

} Item;

#define MAXITEMS 10

// узел дерева

typedef struct trnode
{
    Item item;

    struct trnode *left;
    struct trnode *right;

} Trnode;

// само дерево
typedef struct tree
{
    Trnode *root;

    int size;

} Tree;

// инициализация дерева
void InitializeTree(Tree *ptree);

// проверка пустоты дерева
bool TreeIsEmpty(const Tree *ptree);

// проверка заполненности дерева
bool TreeIsFull(const Tree *ptree);

// количество узлов дерева
int TreeItemCount(const Tree *ptree);

// добавление элемента
bool AddItem(const Item *pi, Tree *ptree);

// поиск элемента
bool InTree(const Item *pi, const Tree *ptree);

// удаление элемента
bool DeleteItem(const Item *pi, Tree *ptree);

// обход дерева
void Traverse(const Tree *ptree,
              void (*pfun)(Item item));

// удаление всего дерева
void DeleteAll(Tree *ptree);

#endif