#include <stdio.h>
#include <stdlib.h>
#include "lesson_2_list.h"

//прототип локальной функции
static void CopyToNode(Item item, Node * pnode);

//функции интефейса
//устанавливает список в пустое состояние masiv[0][0] masiv[0][0] == **masiv
void InitializeList(List * plist)
{
    plist->head = NULL;
}
// возвращает true, если список пуст
bool ListIsEmpty(const List * plist)
{
    if(plist->head == NULL)
        return true;
    else
        return false;
}

//возвращает true, если список полон
bool ListIsFull(const List * plist)
{
    Node * pt;
    bool full;

    pt = (Node *)malloc(sizeof(Node));
    if(pt == NULL)
        full = true;
    else
        full = false;
    free(pt);

    return full;
}

//возвращает количесто узлов
unsigned int ListItemCount(const List * plist)
{
    unsigned int count = 0;
    Node * pnode = plist->head; //установака в начало списка

    while(pnode != NULL)
    {
        ++count;
        pnode = pnode->next;    //установка в следующий узел
    }

    return count;
}


bool AddItem(Item item, List * plist)
{
    Node * pnew;
    pnew = (Node *) malloc(sizeof(Node));
    if(pnew == NULL)
        return false;
    CopyToNode(item, pnew);
    pnew->next = NULL;
   
    if(plist->head == NULL)
    {
        plist->head = pnew;
        plist->end = pnew;
    }
        
    else
    {
        plist->end->next = pnew;
        plist->end = pnew;
    }

    return true;
}
    //посещает каждый узел и выполняет функцию, указаную pfun
    void Traverse(const List * plist, void (* pfun)(Item item))
    {
        Node * pnode = plist->head;  //установка в начало списка

        while(pnode != NULL)
        {
            (*pfun)(pnode->item);       //применение функции к элементу
            pnode = pnode->next ;        //переход к следуюущему элементу
        }
    }

    //освобождает память, выделенную функцией malloc()
    //устаналивает  указатель списка NULL

    void EmptyTheList(List * plist)
    {
        Node * psave;
        Node * current = plist->head;
        while(current != NULL)
        {
            psave = current->next; //созрание адреса текущего узла
            free(current);          //освоождение текущего узла
            current = psave;         //перезод к следующему узлу
        }

        plist->head = NULL;
        plist->end = NULL;
    }

    //определение локальной функции
    //копирует элемент в узел 
    static void CopyToNode(Item item, Node * pnode)
    {
        pnode->item = item;     //копирование структуры
    }