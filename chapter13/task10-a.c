/*10. Напишите программу, открывающую текстовый файл, имя которого получается 
интерактивно. Организуйте цикл, который предлагает пользователю ввести по
зицию в файле. Затем программа должна вывести часть файла, начиная с этой 
позиции и заканчивая следующим символом новой строки. Цикл ввода должен 
завершаться при вводе отрицательного или нечислового значения.*/

#include <stdio.h>
#include <stdlib.h>

#define LIN 40
int main(void)
{
    FILE * fp;
    int ch;
    char name[LIN];
    int num = 0;
    int pos;
    int start = 0;

    printf("VVetite umya faila:");
    scanf("%s", name);

    if((fp = fopen(name, "r")) == NULL)
    {  
        fprintf(stderr, "Oshibka!!");
        exit(EXIT_FAILURE);
    }
    
    while(1)
    {
        printf("Vvedite poziciy");
        
         if(scanf("%d", &pos) != 1 || pos < 0)
            break;

         while((ch = getc(fp)) != EOF)
        {
            if(num >= pos)
                start = 1;

            if(start)
            {
                putchar(ch);

                if(ch == '\n')
                    break;
            }

            num++;
        }
        rewind(fp);
        num = 0;
        start = 0;
    }
}