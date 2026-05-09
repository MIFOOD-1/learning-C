//1. Перепишите программу из листинга 12.4 так, чтобы в ней не использовались глобальные переменные
//glovbal.c -- использование внешней переменной
#include <stdio.h>
void critic(int * units);
int main(void)
{
    int units = 0;
    printf("Skolko funtov vesit malenkiy bochonok masla?\n");
    scanf("%d", &units);
    while (units != 56)
            critic(&units);
    printf("Vi znali eto!\n");

    return 0;
}

void critic(int * units)
{
    printf("Vam ne povezlo. Poprobuite eshe raz.\n");
    scanf("%d", units);
}