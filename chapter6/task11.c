#include <stdio.h>

int main(void)
{
    int num[8];

    for(int index = 0; index < 8; index++)
    {
        printf("Vvedite chislo:");
        scanf("%d", &num[index]);
    }

      for(int index = 7; index >= 0; index--)
    {
        printf("%d", num[index]);
    }

    return 0;
    
}