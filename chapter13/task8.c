/*8. Напишите программу, которая принимает в качестве аргументов командной 
строки символ и ноль или более имен файлов. Если за символом не следуют ар
гументы, программа должна читать стандартный ввод. В противном случае она 
должна открывать каждый файл по очереди и сообщать, сколько раз в нем вcтре
чается указанный символ. Вместе с результатом каждого подсчета должны быть 
указаны имя файла и сам символ. Предусмотрите средства проверки ошибок, 
позволяющие выяснить корректность количества аргументов и возможность от
крытия файлов. Если файл не может быть открыт, программа должна сообщать 
об этом факте и переходить к обработке следующего файла.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    FILE * fp;
    int ch;
    int sim;
    int total = 0;

    if(argc < 2)
    {
        fprintf(stderr, "ne dostatochno argeumentov");
        exit(EXIT_FAILURE);
    }
    
    sim = argv[1][0];

    if (argc == 2)
    {
        total = 0;

        while ((ch = getchar()) != EOF)
        {
            if (ch == sim)
                total++;
        }

        printf("simvol %c vstretilsya %d raz\n", sim, total);
    }

    else
{
    for(int num = 2; num < argc; num++)
    {
        if((fp = fopen(argv[num], "r")) == NULL)
        {
        fprintf(stderr, "oshibka v faile %s", argv[num]);
        continue;
        }
        
        while((ch = getc(fp)) != EOF)
            if(ch == sim)
                total++;

        printf("fail: %s imeet stolko kolichestvo simvolov %c: %d\n", argv[num], sim, total);
        total = 0;
        fclose(fp);
    }
}

    return 0;
}

