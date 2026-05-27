/*2. Напишите программу копирования файлов, которая получает имя исходного 
файла и имя копии из командной строки. Используйте стандартный ввод-вывод 
и двоичный режим, если это возможно.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    int ch;
    FILE * fp, *fp2;

    if(argc != 3)
        exit(EXIT_FAILURE);
    
    if((fp = fopen(argv[1], "rb")) == NULL)
        exit(EXIT_FAILURE);
    
    if((fp2 = fopen(argv[2], "wb")) == NULL)
        exit(EXIT_FAILURE);
    
    while((ch = getc(fp)) != EOF)
        putc(ch, fp2);

    fclose(fp);
    fclose(fp2);
    return 0;
}