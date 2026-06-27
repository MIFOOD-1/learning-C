// 10. Напишите программу, которая реализует меню с использованием массива ука
// зателей на функции. Например, выбор пункта а в меню должен активизировать 
// функцию, на которую указывает первый элемент массива


#include <stdio.h>

int umnojit(int a, int b);
int delit(int a, int b);
int plus(int a, int b);
int minus(int a, int b);

int main(void)
{
    int (*fp[4])(int, int) = {
        umnojit,
        delit,
        plus,
        minus
    };

    printf("Vviberite deistvie: \n");
    printf("a) umnojenie\n");
    printf("b) delenie\n");
    printf("c) slozenie\n");
    printf("d) vichitanie\n");

    char ch;

    ch = getchar();

    switch (ch)
    {
    case 'a':
        printf("%d\n", fp[0](10, 5));
        break;
    case 'b':
        printf("%d\n", fp[1](10, 5));
        break;
    case 'c':
        printf("%d\n", fp[2](10, 5));
        break;
    case 'd':
        printf("%d\n", fp[3](10, 5));
        break;
    
    default:
        printf("Net takogo varianta otveta dosvidanie");
        return 0;
    }

return 0;
}


int umnojit(int a, int b)
{
    return a * b;
}

int delit(int a, int b)
{
    return a / b;
}

int plus(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}