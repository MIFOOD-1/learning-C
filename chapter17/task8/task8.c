//Листинг 17.12 Программа petclub.c
//petclub.c -- использование двоичного дерева поиска
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "task8.h"

char menu(void);
void addpet(Tree * pt); 
void droppet(Tree * pt); 
void showpets(const Tree * pt); 
void findpet(const Tree * pt); 
void printitem(Item item); 
void uppercase(char * str); 
char * s_gets(char * st, int n);

int main(void)
{
    Tree pets;
    char choice;
    InitializeTree(&pets);
    while((choice = menu()) != 'q')
    {
        switch (choice)
        {
        case 'a' : addpet(&pets);
            break;
        case 'l' : showpets(&pets);
            break;
        case 'f' : printf("%d zivotnih v clube \n",
                            TreeItemCount(&pets));
            break;
        case 'd' : droppet(&pets);
            break;
        default:
            puts("Oshibka v swqith");
        }
    }
    DeleteAll(&pets);
    puts("Programma zavershena.");

    return 0;
}

char menu(void)
{
    int ch;

    puts("Programma chlensatva v clube Nerfville Pet Club");
    puts("Vvedite bukvu, sootvestvuushuu vashemu viboru:");
    puts("a) dovavlenie zivotnogo   l) vivod cpiska zivotnih");
    puts("n) kolichestvo zivotnih   f) poisk zivotnih");
    puts("d) udalenie zivitnigo     q)vihod");
    while ((ch = getchar()) != EOF)
    {
        while(getchar() != '\n')
            continue;
        ch = tolower(ch);
        if(strchr("alrfndq", ch) == NULL)
            puts("Vveidite bukvu a, l, f, n, d ili q:");
        else
            break;
    }
    if(ch == EOF) //ввод симовла EOF приводит к выходу из программы
        ch = 'q';
    return ch;
}

void addept(Tree * pt)
{
    Item temp;

    if(TreeIsFull(pt))
        puts("V klube bolse net mest!");
    else
    {
        puts("Vvedite cklichku zivotnogo:");
        s_gets(temp.petname, SLEN);
        puts("Vvedite vid zivotnogo:");
        s_gets(temp.petkind, SLEN);
        uppercase(temp.petname);
        uppercase(temp.petkind);
        AddItem(&temp, pt);
    }
}

void showpets(const Tree * pt)
{
    if(TreeIsEmpty(pt))
        puts("Zapisi otsustvuut!");
    else
        Traverse(pt, printitem);
}

void printitem(Item item)
{
    printf("Zivotnoe: %-19s Vid: %-19s\n", item.petname, item.petkind);
}

void findpet(const Tree * pt)
{
    Item temp;
    if(TreeIsEmpty(pt))
    {
        puts("Zapisi otsustvuut!");
        return; //если дерево пустое, выйти из функции
    }
    puts("Vvedite kclichu zivotnogo, kotoroe hotite naiti:");
    s_gets(temp.petname, SLEN);
    puts("Vvedite vid zivotnogo:");
    s_gets(temp.petkind, SLEN);
    uppercase(temp.petname);
    uppercase(temp.petkind);
    printf("%s po imeni %s ", temp.petkind, temp.petname);
    if(InTree(&temp, pt))
        printf("yavlyaetsya chlenom kluba.\n");
    else
        printf("ne yavlyatsya clenom kluba.\n");
}

void droppet(Tree * pt)
{
    Item temp;
    if(TreeIsEmpty(pt))
    {
        puts("zapisi otsustvuut!");
        return;     //если дерево пусто выйти из функции
    }
    puts("Vvedite klicki zovotnogo, kotoroe nuzno iskluchit iz kluba: ");
    s_gets(temp.petname, SLEN);
    puts("Vvedite vid zivotnogo:");
    s_gets(temp.petkind, SLEN);
    uppercase(temp.petname);
    uppercase(temp.petkind);
    printf("%s po imeni %s ", temp.petkind, temp.petname);
    if(DeleteItem(&temp, pt))
        printf("iskluchen(a) iz kluba.\n");
    else
        printf("ne yavleytsya chlenom kluba.\n");
}

void uppercase(char * str)
{
    while(*str)
    {
        *str = toupper(*str);
        str++;
    }
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val= fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}

//ЛИстинг 17.2 Программа films2.c
//films2.c -- использование связного списка структур
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define TSIZE 45


struct film{
    char title[TSIZE];
    int rating;
    struct film * next;
    struct film * prev;
};

bool invert_print(struct film * pr)
{
    if(pr == NULL)
        return false;

    invert_print(pr->next);
        printf("Film: %s Rating: %d\n", pr->title, pr->rating);
}

    char * s_gets(char * st, int n)
    {
        char * ret_val;
        char * find;

        ret_val = fgets(st, n, stdin);
        if(ret_val)
        {
            find = strchr(st, '\n');
            if(find)
            *find = '\0';
            else
                while(getchar() != '\n')
                    continue;
        }
        return ret_val;
    }

    int main(void)
    {
        struct film * head = NULL;
        struct film * end = NULL;
        struct film * prev, * current;
        char input[TSIZE];
        //Sbor i cohranenoe infi
        puts("Vvedite nazvaie perbogo flma:");
        while(s_gets(input, TSIZE) != NULL && input[0] != '\0')
        {
            current = (struct film *) malloc(sizeof(struct film));
            current->next = NULL;
            current->prev = NULL;

            if(head == NULL)
                head = current;
            else
            {
                prev->next = current;
                current->prev = prev;
            }
            strcpy(current->title, input);
            puts("Vvedite cvoe znachenie raitinga <0-10>:");
            scanf("%d", &current->rating);
            while(getchar() != '\n')
                continue;
            puts("VVedite nazvanmie sledushego filma (ili pustuu stroku dlya prekrasheniya vvoda):");
                prev = current;
                end = current;
        }
        if(head == NULL)
        printf("Dannie ne vvedeni");
        else
            printf("Spisok filmov:\n");
        current = head;
        

        invert_print(head);
        // while(current != NULL)
        // {
        //     printf("Film: %s Rating: %d\n", current->title, current->rating);
        //     current = current->next;
        // }

        // current = end;
        // while(current != NULL)
        // {
        //     printf("Film: %s Rating: %d\n", current->title, current->rating);
        //     current = current->prev;
        // }
        // //Programma vipolnena, poetomu moazno osvobodit pamyat
        // current = head;
        // while(current != NULL)
        // {
        //     current = head;
        //     head = current->next;
        //     free(current);
        // }

        printf("programma zavehsena\n");

        return 0;
    }