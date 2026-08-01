#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "task7.h"

#define MAX_WORD 50

int main(void)
{
    Tree tree;
    FILE *fp;
    char filename[100];
    char word[MAX_WORD];
    int choice;
    Node *found;

    InitializeTree(&tree);

    printf("VVedite imya faila: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Ne udalos otkrit fail.\n");
        return 1;
    }

    while (fscanf(fp, "%49s", word) == 1)
    {
        int i;

        /* удаляем знаки препинания */
        for (i = 0; word[i] != '\0'; i++)
        {
            if (ispunct((unsigned char)word[i]))
            {
                word[i] = '\0';
                break;
            }

            word[i] = (char)tolower((unsigned char)word[i]);
        }

        if (strlen(word) > 0)
            AddWord(&tree, word);
    }

    fclose(fp);

    do
    {
        printf("\n");
        printf("1 - Pokazat vse slova\n");
        printf("2 - Naiti slovo\n");
        printf("3 - vihod\n");
        printf("Viberite punkt: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                ShowTree(&tree);
                break;

            case 2:
                printf("VVedite slovo: ");
                scanf("%49s", word);

                for (int i = 0; word[i] != '\0'; i++)
                    word[i] = (char)tolower((unsigned char)word[i]);

                found = FindWord(&tree, word);

                if (found == NULL)
                    printf("Slovo ne naideno.\n");
                else
                    printf("Slovo \"%s\" vstrechaetsya %d raz.\n",
                           found->item.word,
                           found->item.count);
                break;

            case 3:
                break;

            default:
                printf("Neverniy punkt.\n");
        }

    } while (choice != 3);

    DeleteTree(&tree);

    return 0;
}