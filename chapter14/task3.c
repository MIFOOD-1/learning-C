// 3. Измените программу из листинга 14.2, чтобы она сначала выводила описания 
// книг в том порядке, в каком они вводились, затем в алфавитном порядке по на
// званиям и, наконец, в порядке возрастания цены.

//manybook.c -- каталог для нескольких книг
#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

void alfavit(struct book * alfa, int count);
void chislo(struct book * chi, int count);
void alfavit2(struct book * alfa, int count);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100          //ммксильманое количесвто книг

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];        //массив структур типа book
    int count = 0;
    int index;

    printf("Vvedite nazvanie knigi.\n");
    printf("Nazmite [enter] v nachale stroki, ctobi zakonchit vvod.\n");
    while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
        && library[count].title[0] != '\0')
    {
        printf("Teper vvedite FIO avtora.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("teper vvedite cenu.\n");
        scanf("%f", &library[count++].value);
        while(getchar() != '\n')
            continue;       //очитисть входную строку
        if(count < MAXBKS)
            printf("Vvedite nazvanie sleduushei knigi.\n");
    }

    if(count > 0)
    {
        printf("Katalog vashih knig:\n");
        for(index = 0; index < count; index++)
            printf("%s avtorstva %s: $%.2f\n", library[index].title,
                library[index].author, library[index].value);
    }


    else
        printf("Vvobshe net knig? Ochen ploho.\n");

    alfavit(library, count);
    printf("\n");
    chislo(library, count);
    putchar('\n');
    alfavit2(library, count);
        
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

void alfavit(struct book * alfa, int count)
{
    

    for(char a = 'A'; a <= 'Z'; a++)
        {
            for(int i = 0; i < count; i++)
            {
            if(alfa[i].title[0] == a)
                {
                printf("Nazvanie knigi %s ", alfa[i].title);
                printf("Avtor %s cena %.2f\n", alfa[i].author, alfa[i].value);
                }
            }
            
        }
}

void chislo(struct book * chi, int count)
{
    struct book temp;

    for(int index = 0; index < count; index++)
    {
        for(int i = index + 1; i < count; i++)
            if(chi[index].value > chi[i].value)
                {
                    temp = chi[i];
                    chi[i] = chi[index];
                    chi[index] = temp;
                }
    printf("%s avtorstva %s: $%.2f\n", chi[index].title,
                    chi[index].author, chi[index].value);
    }
}

void alfavit2(struct book * alfa, int count)
{
    struct book temp;

    for(int index = 0; index < count; index++)
        for(int i = index + 1; i < count; i++)
            if(strcmp(alfa[index].title, alfa[i].title) > 0)
            {
                temp = alfa[index];
                alfa[index] = alfa[i];
                alfa[i] = temp;
            }

            for(int i = 0; i < count; i++)
            printf("%s avtorstva %s: $%.2f\n", alfa[i].title,
                    alfa[i].author, alfa[i].value);
            
}