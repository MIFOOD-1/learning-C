/*9. Модифицируйте программу в листинге 13.3, чтобы каждое слово было про
нумеровано в соответствии с порядком его добавления в список, начиная с 1. 
Позаботьтесь о том, чтобы при втором запуске программы новая нумерация 
слов начиналась с того места, где была закончена пумерация при предыдущем 
запуске.*/

//addaword.c -- использование fprintf(), fscanf, and rewind()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 41

int main(void)
{
    FILE *fp, *fpsum;
    int sum = 0;
    int ch;
    char words[MAX];

    if((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stderr, "Ne udayetsya otkrit fail \"wordy\".\n");
        exit(EXIT_FAILURE);
    }

    if((fpsum = fopen("wordynum", "a+")) == NULL)
    {
        fprintf(stdout, "Ne udayetsya otkrit fail \"wordynum\".\n");
        exit(EXIT_FAILURE);
    }

    puts("VVedite slova dlya dobavleniya V fail; dlya zaversheniya");
    puts("VVedite simvol # v nachale stroki.");
    
    while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
    {
        fprintf(fp, "%s\n", words);
        fprintf(fpsum, "%s\n", words);
    }

    rewind(fpsum);

    while((ch = getc(fpsum)) != EOF)
        if(isspace(ch))
            sum++;
    
    puts("Soderzimoe faila:");

    rewind(fp);         //возврат в начало файла
    rewind(fpsum);

    while(fscanf(fp, "%40s", words) == 1)
        puts(words);
    
    puts("\nNumernoi vvod");
    

    for(int i = 1; i <= sum; i++)
    {
        if(fscanf(fpsum, "%40s", words) == 1)
        printf("№%d %s\n", i, words);
    }

    if(fclose(fp) != 0)
        fprintf(stderr, "Oshibka pri zakritii faila\n");
    if(fclose(fpsum) != 0)
        fprintf(stderr, "Oshibka pri zakritii faila\n");

    return 0;
}