//ЛИстинг 17.2 Программа films2.c
//films2.c -- использование связного списка структур
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film{
    char title[TSIZE];
    int rating;
    struct film * next;
    struct film * prev;
};

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
        

        while(current != NULL)
        {
            printf("Film: %s Rating: %d\n", current->title, current->rating);
            current = current->next;
        }

        current = end;
        while(current != NULL)
        {
            printf("Film: %s Rating: %d\n", current->title, current->rating);
            current = current->prev;
        }
        //Programma vipolnena, poetomu moazno osvobodit pamyat
        current = head;
        while(current != NULL)
        {
            current = head;
            head = current->next;
            free(current);
        }

        printf("programma zavehsena\n");

        return 0;
    }