#include <stdio.h>
#define MAX 8
int main(void)
{
    double mas1[MAX], mas2[MAX];
    double sum = 0;

    for(int i = 0; i < MAX; i++)
    {
        printf("Vvedite znachenie dlya mas1[%d]: ", i);
        scanf("%lf", &mas1[i]);
        mas2[i] = sum+=mas1[i];
    }


    
    printf("\n%s", "mas1");
        for(int i = 0; i < MAX; i++)
    {
        printf("%10.2lf", mas1[i]);
    }


        printf("\n");


    printf("%s", "mas2");
        for(int i = 0; i < MAX; i++)
    {
        printf("%10.2lf" , mas2[i]);
    }
    
    return 0;
}