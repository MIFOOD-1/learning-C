#include <stdio.h>

int main(void)
{
    int min, max;

    printf("Vvedite nizniy i cerniy predel tablici: ");
    scanf("%d %d", &min, &max);

    printf("%10s %15s %20s\n", "chislo", "kvadrat", "kub");

    for( ;min <= max; min++)
    {
        printf("%*d %*d %*d\n", 10, min, 15, min * min, 20, min * min * min);
    }
    return 0;
}