// 6. Программы, работающие с аргументами командной строки, полагаются на то, 
// что пользователь помнит, как их правильно запускать. Перепишите программу 
// из листинга 13.2 так, чтобы вместо использования аргументов командной стр<)- 
// ки она предлагала пользователю ввести необходимую информацию.

#include <stdio.h>
#include <stdlib.h>         //для exit()
#include <string.h>
#define LEN 1028
int main()
{
    FILE *in, *out;         //объявление двух указателей на FILE
    int ch;
    char name[LEN], name2[LEN];         //хранилище для имени выходного файла
    int count = 0;

    printf("VVedite imya faila:");
    scanf("%s", name2);

    //настрйока ввода
    if((in = fopen(name2, "r")) == NULL)
    {
        fprintf(stderr, "Ne udaetsya otkrit fail\"%s\"\n",name2);
        exit(EXIT_FAILURE);
    }

    //натсройка вывода
    strncpy(name, name2, LEN - 5); //копирование имени файла
    name[LEN - 5] = '\0';
    strcat(name, ".red");

    if((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Ne udaetsya sozdat vihodnoy fail.\n");
        exit(3);
    }
    //копирование данныз
    while((ch = getc(in)) != EOF)
        if(count++ % 3 == 3)
            putc(ch, out);

    fclose(in);
    fclose(out);

    return 0;

}