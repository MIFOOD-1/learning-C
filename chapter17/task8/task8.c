// petclub.c -- использование двоичного дерева поиска

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "task8.h"

char menu(void);
void addpet(Tree *pt);
void droppet(Tree *pt);
void showpets(const Tree *pt);
void findpet(const Tree *pt);
void printitem(Item item);
void uppercase(char *str);
char *s_gets(char *st, int n);


int main(void)
{
    Tree pets;
    char choice;

    InitializeTree(&pets);

    while((choice = menu()) != 'q')
    {
        switch(choice)
        {
            case 'a':
                addpet(&pets);
                break;

            case 'l':
                showpets(&pets);
                break;

            case 'n':
                printf("%d zivotnih v clube\n",
                       TreeItemCount(&pets));
                break;

            case 'f':
                findpet(&pets);
                break;

            case 'd':
                droppet(&pets);
                break;

            default:
                puts("Oshibka v vybore");
        }
    }
    DeleteAll(&pets);

    puts("Programma zavershena.");

    return 0;
}



char menu(void)
{
    int ch;

    puts("\nProgramma chlenstva v clube Nerfville Pet Club");
    puts("Vvedite bukvu:");
    puts("a) dobavlenie zivotnogo");
    puts("l) vivod spiska zivotnih");
    puts("n) kolichestvo zivotnih");
    puts("f) poisk zivotnogo");
    puts("d) udalenie zivotnogo");
    puts("q) vihod");


    while((ch = getchar()) != EOF)
    {
        while(getchar() != '\n')
            continue;

        ch = tolower(ch);

        if(strchr("alnfdq", ch) == NULL)
        {
            puts("Vvedite bukvu a, l, n, f, d ili q:");
        }
        else
            break;
    }
    if(ch == EOF)
        ch = 'q';

    return ch;
}



void addpet(Tree *pt)
{
    Item temp;
    List *breed;

    if(TreeIsFull(pt))
    {
        puts("V klube bolshe net mest!");
        return;
    }

    breed = malloc(sizeof(List));
    if(breed == NULL)
    {
        puts("Oshibka pamyati");
        return;
    }
    printf("Vvedite klichku:\n");
    s_gets(temp.petname, 20);

    printf("Vvedite vid zhivotnogo:\n");
    s_gets(breed->petkind, 20);

    uppercase(temp.petname);
    uppercase(breed->petkind);
    breed->next = NULL;

    temp.head = breed;
    if(!AddItem(&temp, pt))
    {
        free(breed);
        puts("Ne udalos dobavit");
    }
    else
    {
        puts("Zhivotnoe dobavleno");
    }
}




void showpets(const Tree *pt)
{
    if(TreeIsEmpty(pt))
    {
        puts("Zapisi otsutstvuyut!");
    }
    else
    {
        Traverse(pt, printitem);
    }
}




void printitem(Item item)
{
    List *ptr;

    printf("\nKlichka: %s\n", item.petname);
    ptr = item.head;
    while(ptr != NULL)
    {
        printf("  Vid: %s\n",
               ptr->petkind);

        ptr = ptr->next;
    }
}





void findpet(const Tree *pt)
{
    Item temp;
    Trnode *current;

    if(TreeIsEmpty(pt))
    {
        puts("Zapisi otsutstvuyut!");
        return;
    }
    printf("Vvedite klichku:\n");
    s_gets(temp.petname,20);
    uppercase(temp.petname);
    current = pt->root;
    while(current != NULL)
    {
        int cmp;

        cmp = strcmp(temp.petname,
                     current->item.petname);
        if(cmp < 0)
        {
            current = current->left;
        }

        else if(cmp > 0)
        {
            current = current->right;
        }

        else
        {
            List *ptr;
            printf("\nZhivotnie s klichkoi %s:\n",
                   current->item.petname);
            ptr = current->item.head;
            while(ptr != NULL)
            {
                printf("  Vid: %s\n",
                       ptr->petkind);

                ptr = ptr->next;
            }
            return;
        }
    }
    printf("Net takoi klichki\n");
}




void droppet(Tree *pt)
{
    Item temp;

    printf("Klichka dlya udaleniya:\n");
    s_gets(temp.petname,20);
    uppercase(temp.petname);
    if(DeleteItem(&temp, pt))
    {
        puts("Udalen");
    }
    else
    {
        puts("Ne naiden");
    }
}




void uppercase(char *str)
{
    while(*str)
    {
        *str = toupper((unsigned char)*str);
        str++;
    }
}





char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;


    ret_val = fgets(st, n, stdin);


    if(ret_val)
    {
        find = strchr(st,'\n');


        if(find)
            *find = '\0';

        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}