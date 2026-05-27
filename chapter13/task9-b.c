/*9. Модифицируйте программу в листинге 13.3, чтобы каждое слово было про
нумеровано в соответствии с порядком его добавления в список, начиная с 1. 
Позаботьтесь о том, чтобы при втором запуске программы новая нумерация 
слов начиналась с того места, где была закончена пумерация при предыдущем 
запуске.*/

//addaword.c -- использование fprintf(), fscanf, and rewind()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(void)
{
    FILE *fp;

    char words[MAX];
    char temp[MAX];

    int number = 1;
    int lastnum = 0;

    // открываем файл */
    if((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stderr, "Ne udaetsya otkrit fail \"wordy\"\n");
        exit(EXIT_FAILURE);
    }

    // идем в начало файла 
    rewind(fp);

    // ищем последний номер */
    while(fscanf(fp, "%d %40s", &lastnum, temp) == 2)
    {
        number = lastnum + 1;
    }

    puts("Vvedite slova dlya dobavleniya.");
    puts("Dlya vihoda vvedite #.");

    // добавление новых слов */
    while((fscanf(stdin, "%40s", words) == 1) &&
          words[0] != '#')
    {
        fprintf(fp, "%d %s\n", number, words);
        number++;
    }

    puts("\nSoderzhimoe faila:\n");

    rewind(fp);

    // вывод файла */
    while(fscanf(fp, "%d %40s", &lastnum, words) == 2)
    {
        printf("%d %s\n", lastnum, words);
    }

    if(fclose(fp) != 0)
    {
        fprintf(stderr, "Oshibka pri zakritii faila\n");
    }

    return 0;
}