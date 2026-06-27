#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10

char * s_gets(char * st, int n);

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    FILE * pbooks;

    if((pbooks = fopen("book.dat", "rb")) != NULL)
    {
        while(count < MAXBKS && fread(&library[count],
                                        sizeof(struct book),
                                        1,
                                        pbooks) == 1)
        {
            count++;
        }

        fclose(pbooks);
    }
    puts("Tekushie knigi:");

    for(int i = 0; i < count; i++)
    {
        printf("\n[%d]\n", i + 1);
        printf("Nazvanie: %s\n", library[i].title);
        printf("Avtor: %s\n", library[i].author);
        printf("Cena: %.2f\n", library[i].value);

        printf("\n"
                "1 - ostavit\n"
                "2 - izmenit\n"
                "3 - udalit\n"
                "Vybor: ");

        int choice;
        scanf("%d", &choice);

        while(getchar() != '\n')
            continue;
        
        if(choice == 2)
        {
            puts("Novoe nazvanie:");
            s_gets(library[i].title, MAXTITL);

            puts("Noviy avtor:");
            s_gets(library[i].author, MAXAUTL);

            puts("Novaya cena:");
            scanf("%f", &library[i].value);

            while(getchar() != '\n')
                continue;
        }
        else if(choice == 3)
        {
            for(int j = i; j < count - 1; j++) 
                library[j] = library[j + 1];

            count--;
            i--;
        }
    }

    puts("\nDobavlenie novih knig.");
    puts("Pustaya stroka - konec vvod.");

    while(count < MAXBKS)
    {
        puts("Nazvanie knigi");
        s_gets(library[count].title, MAXTITL);

        if(library[count].title[0] == '\0')
            break;

        puts("Avtor:");
        s_gets(library[count].author, MAXAUTL);

        puts("Cena:");
        scanf("%f", &library[count].value);

        while(getchar() != '\n')
            continue;

        count++;
    }

    pbooks = fopen("book.dat", "wb");

    if(pbooks == NULL)
    {
        puts("Ne udalos otkrit fail dlya zapisi.");
        return 1;
    }

    fwrite(library,
        sizeof(struct book),
        count,
        pbooks);

    fclose(pbooks);

    puts("\nItogoviy katalog:");

    for(int i = 0; i < count; i++)
    {
        printf("%s avtorstva %s: %.2f\n",
                library[i].title,
                library[i].author,
                library[i].value);
    }

    puts("\nProgramma zaveshena.");

    return 0;
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