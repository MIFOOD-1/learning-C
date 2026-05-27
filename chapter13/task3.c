/*3. Напишите программу копирования файлов, которая предлагает пользователю 
ввести имя текстового файла. выступающего в роли исходного, и имя выход
ного файла. Программа должна использовать функцию toupper () из ctype. h 
для перевода текста в верхний регистр во время его записи в выходной файл. 
Применяйте стандартный ввод-вывод и текстовый режим.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE *fp, *fp2;
    int ch;
    char name[100], name2[100];
    printf("VVedite imya failov:\n");
    if((scanf("%99s %99s", name, name2)) != 2)
        exit(EXIT_FAILURE);
    
    if((fp = fopen(name, "r")) == NULL)
        exit(EXIT_FAILURE);
    if((fp2 = fopen(name2, "w+")) == NULL)
        exit(EXIT_FAILURE);

    while((ch = getc(fp)) != EOF)
        putc(toupper(ch), fp2);

    rewind(fp2);

    while((ch = getc(fp2)) != EOF)
        putchar(ch);

    fclose(fp);
    fclose(fp2);

    return 0;
}