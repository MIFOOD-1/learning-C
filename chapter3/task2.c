#include <stdio.h>

int main(void)
{
    int i;
    printf("Vvedite celoe chislo: ");
    
    while(scanf("%d", &i) != 1)
    {
        putchar('\n');
        while (getchar() != '\n');
        printf("Oshibka!!!! Vvedite celoe chislo: ");
    }
    
printf("vashe chislo: %d",i);

return 0;
}