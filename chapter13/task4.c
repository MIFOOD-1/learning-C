/*4. Напишите программу, которая последовательно отображает на экране содержи
мое всех файлов, перечисленных в командной строке. Для управления циклом 
используйте argc.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    FILE *fp;
    int ch;
    if(argc < 2)
        exit(EXIT_FAILURE);


    for(int index = 1; index < argc && ((fp = fopen(argv[index], "r")) != NULL); index++)
    {
        while((ch = getc(fp)) != EOF)
        putchar(ch);

        printf("\n");
        fclose(fp);
    }

    return 0;
}