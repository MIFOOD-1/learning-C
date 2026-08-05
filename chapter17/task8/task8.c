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
        case 'a' : addpet(&pets);               //ошибка
            break;
        case 'l' : showpets(&pets);             //ошибка
            break;
        case 'n' : printf("%d zivotnih v clube \n",
                            TreeItemCount(&pets));
            break;
        case 'f' : findpet(&pets);
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

void addpet(Tree * pt)
{
    Item temp;
    char pet[SLEN];
    char kind[SLEN];

    if(TreeIsFull(pt))
        puts("V klube bolse net mest!");
    else
    {
        puts("Vvedite cklichku zivotnogo:");
        s_gets(pet, SLEN);
        uppercase(pet);
        puts("Vvedite vid zivotnogo:");
        s_gets(kind, SLEN);
        

        
        // puts("Vvedite vid zivotnogo:");
        // s_gets(temp.petkind, SLEN);
        // uppercase(temp.petkind);
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

// void printitem(Item item)
// {
//     printf("Zivotnoe: %-19s Vid: %-19s\n", item.petname, item.petkind);
// }

void printitem(Item item)
{
    printf("Zivotnoe: %-19s \n", item.petname);
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
    // puts("Vvedite vid zivotnogo:");
    // s_gets(temp.petkind, SLEN);
    uppercase(temp.petname);
    // uppercase(temp.petkind);
    // printf("%s po imeni %s ", temp.petkind, temp.petname);
     printf(" po imeni %s ", temp.petname);

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
    // s_gets(temp.petkind, SLEN);
    uppercase(temp.petname);
    // uppercase(temp.petkind);
    printf("po imeni %s ", temp.petname);
    // printf("%s po imeni %s ", temp.petkind, temp.petname);

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

