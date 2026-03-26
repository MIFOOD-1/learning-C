#include <stdio.h>
#define MAX 10
int main(void)
{
    int num;
    printf("Vvedite chislo: ");
    scanf("%d", &num);
    int lol = num;

    while (num <= lol + MAX)
    {
      printf("%d  ", num);
      num++;
    }
    
    return 0;

}