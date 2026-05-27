/*7. Напишите программу, которая открывает два файла. Получать имена файлов 
можно либо через командную строку, либо предложив пользователю ввести их.
а. Сделайте так, чтобы эта программа выводила строку 1 первого файла, строку 1 
второго файла, строку 2 первого файла, строку 2 второго файла и т.д., пока нс 
будет выведена последняя строка более длинного (по количеству строк) файла.
б. Модифицируйте программу так, чтобы строки с одним и тем же номером вы
водились в одной экранной строке.*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 100
int main(void)
{
    char name1[LEN], name2[LEN];
    FILE *fp1, *fp2;
    int ch, rm, lm;
    lm = rm = 0;

    printf("Vvedite imya faila nomer 1 and nomer 2:");
    scanf("%s %s", name1, name2);

    if((fp1 = fopen(name1, "r")) == NULL)
    {  
        fprintf(stderr, "oshibka ne otkrivaetsya fail %s", name1);
        exit(EXIT_FAILURE);
    }
    if((fp2 = fopen(name2, "r")) == NULL)
    {  
        fprintf(stderr, "oshibka ne otkrivaetsya fail %s", name2);
        exit(EXIT_FAILURE);
    }

    while(1)
    {
        if(rm != EOF)
        while((ch = getc(fp1)) != '\n' && ch != EOF)
            putchar(ch);

        rm = ch;
        if(rm != EOF)
            putchar(' ');

        if(lm != EOF)
        while((ch = getc(fp2)) != '\n' && ch != EOF)
            putchar(ch);

        lm = ch;
        if(lm != EOF)
            putchar('\n');
       
        if(rm == EOF && lm == EOF)
        {
            fclose(fp1);
            fclose(fp2);
            return 0;
        }
    }
}