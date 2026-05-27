// 11. Напишите программу, которая принимает два аргумента командной строки. 
// Первый аргумент - это строка, а второй - имя файла. Программа должна ис
// кать в файле и выводить все строки, содержащие указанную. Поскольку зада
// ча ориентирована на строки, а не на символы, используйте функцию fgets () 
// вместо getc (). Для поиска строки, содержащей заданную, применяйте функцию 
// strstr () (кратко описанную в упражнении 7 из главы 11) из стандартной биб
// лиотеки С.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 256

int main(int argc, char * argv[])
{
    FILE *fp;
    char line[LEN];

    if(argc < 3)
        exit(EXIT_FAILURE);
    
    

    if((fp = fopen(argv[2], "r")) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    while(fgets(line, LEN, fp) != NULL)
    {
        if(strstr(line, argv[1]) != NULL)
            printf("%s", line);
    }

    fclose(fp);

    return 0;
}