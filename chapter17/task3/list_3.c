#include <stdio.h>
#include <stdlib.h>
#include "list_3.h"

//функции интефейса
//устанавливает список в пустое состояние masiv[0][0] masiv[0][0] == **masiv
void InitializeList(List * plist)
{
    plist->items = 0;
}
// возвращает true, если список пуст
bool ListIsEmpty(const List * plist)
{
        return plist->items == 0;
}

//возвращает true, если список полон
bool ListIsFull(const List * plist)
{
    return plist->items == MAXSIZE;
}

//возвращает количесто узлов
unsigned int ListItemCount(const List * plist)
{
    return plist->items;
}


bool AddItem(Item item, List * plist)
{
    if(ListIsFull(plist))
        return false;
    
    plist->entries[plist->items] = item;
    plist->items++;

    return true;
}
    //посещает каждый узел и выполняет функцию, указаную pfun
    void Traverse(const List * plist, void (* pfun)(Item item))
    {
        int i;

        for(i = 0; i < plist->items; i++)
            (*pfun)(plist->entries[i]);
    }

    //освобождает память, выделенную функцией malloc()
    //устаналивает  указатель списка NULL

    void EmptyTheList(List * plist)
    {
        plist->items = 0;
    }

    