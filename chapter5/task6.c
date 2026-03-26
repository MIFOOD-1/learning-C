#include <stdio.h>

int main(void)
{
    int count, sum, max;

    count  = 0;
    sum = 0;

    printf("Vvedite skolko dney vam budut nachislyata dengi: ");

    scanf("%d", &max);

    while (count++ <max)
    {
    sum = sum + count * count;
    printf("$%d ", count * count);
    } 
 printf("\nsum = $%d\n", sum);

    return 0;
}