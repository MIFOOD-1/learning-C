#include <stdio.h>
void to_binary(unsigned long n, int s);

int main(void)
{
    unsigned long number;
    int number2;
    printf("Vvedite celoe chislo (q dlya zavesheniya):\n");
    while(scanf("%lu %d", &number, &number2) == 2)
    {
        printf("Dvoichniy ekvivalent and sustema ");
        to_binary(number, number2);
        putchar('\n');
        printf("Vvedite cveloe chislo(q dlya zaversheniya):\n");
    }
    printf("Programma zavershena.\n");
    return 0;
}

void to_binary(unsigned long n, int s)
{
    int r;
    r = n % s;
    if(n >= s)
        to_binary(n / s, s);
    printf("%d", r);
}