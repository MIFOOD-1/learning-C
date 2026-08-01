//Листинг 17.4. Программа films3.c
//films3.c -- использование связного списка в стиле ADT
//компилировать вместе с list.c
#include <stdio.h>
#include <stdlib.h> //прототип для exit()
#include "list_3.h" //определение List, Item

void showmovies(Item item);
char * s_gets(char * st, int n);
int main(void)
{
    List movies;
    Item temp;

    //инициализация
    InitializeList(&movies);
    if(ListIsFull(&movies))
    {
        fprintf(stderr, "Доступаная память отсуствует! Программа заврешена.\n");
        exit(1);
    }

    //сбор и сохранение информации
    puts("Vvedite nazvanie pervogo filma: ");
    while(s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
    {
        puts("Vvedite svoe znachenoe reitinga <0-10>:");
        scanf("%d", &temp.rating);
        while(getchar() != '\n')
            continue;
        if(AddItem(temp, &movies) == false)
        {
            fprintf(stderr, "Problema s videleniem pamyati\n");
            break;
        }
        puts("VVedite nazvanie sleduusheg filma (ili pustuy stroku dlya prekrasheniya vvoda):");
    }
    //отображение
    if(ListIsEmpty(&movies))
        printf("Dannie ne vvedeni.");
    else
    {
        printf("Spisok filmov:\n");
        Traverse(&movies, showmovies);
    }
    printf("Vi vveli %d filmov.\n", ListItemCount(&movies));

    //очистка
    EmptyTheList(&movies);
    printf("Programma zaveshena.\n");
    return 0;
}
void showmovies(Item item)
{
    printf("Film: %s Raiting: %d\n", item.title, item.rating);
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