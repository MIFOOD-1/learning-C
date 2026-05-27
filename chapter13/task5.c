/*5. Модифицируйте программу в листинге 13.6, чтобы вместо интерактивного ин
терфейса она использовала интерфейс командной строки.*/

//randbin.c -- произвольный доступ, двоичный ввод - вывод
#include <stdio.h>
#include <stdlib.h>

#define ARSIZE 1000

int main(int argc, char *argv[])
{
    double numbers[ARSIZE];
    double value;

    int i;
    long pos;

    FILE *iofile;

    if(argc != 3)
    {
        printf("Ispolzovanie: %s fail index\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);

    if((iofile = fopen(argv[1], "wb")) == NULL)
    {
        fprintf(stderr, "Ne udaetsya otkrit fail.\n");
        exit(EXIT_FAILURE);
    }

    fwrite(numbers, sizeof(double), ARSIZE, iofile);

    fclose(iofile);

    if((iofile = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Ne udaetsya otkrit fail.\n");
        exit(EXIT_FAILURE);
    }

    i = atoi(argv[2]);

    if(i < 0 || i >= ARSIZE)
    {
        printf("Neverniy index.\n");
        exit(EXIT_FAILURE);
    }

    pos = (long)i * sizeof(double);
    fseek(iofile, pos, SEEK_SET);
    fread(&value, sizeof(double), 1, iofile);
    printf("Znachenie: %f\n", value);

    fclose(iofile);

    return 0;
}