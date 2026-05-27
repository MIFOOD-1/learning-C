/*1. Модифицируйте программу в листинге 13.1, чтобы она предлагала пользователю
 ввести имя файла и читала его ответ вместе использования аргументов ко
мандной строки.*/

//count.c -- использование стандартного ввода-вывода
#include <stdio.h>
#include <stdlib.h> //прототип exit()

int main(void)
{
    char name[100];
    printf("Vvetie imya faila: ");
    if(scanf("%99s", name) != 1)
        exit(EXIT_FAILURE);
    
    int ch;     //место для хранения каждого символа по мере чтения
    FILE *fp;    // указатель файла
    unsigned long count = 0;

    
    if((fp = fopen(name, "r")) == NULL)
    {
        printf("Ne udaetsya okrit %s\n", name);
        exit(EXIT_FAILURE);
    }

    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);   // то же, что и putchar(ch);
        count++;
    }
    fclose(fp);
    printf("Fail %s soderzit %lu simvolov\n", name, count);

    return 0;
}