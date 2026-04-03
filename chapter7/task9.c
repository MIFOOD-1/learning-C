#include <stdio.h>

int main(void)
{
    int num;
    printf("Vvedite polozitelnoe chislo: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++)
    {
        int proverka = 1;

        for(int index = 2; index * index <= i; index++)
        {
            if(i % index == 0)
            {
                proverka = 0;
                break;
            }
        }
        if(proverka)
            printf("%d ", i);
    }
    
    return 0;
}