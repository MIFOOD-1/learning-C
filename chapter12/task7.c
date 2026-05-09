#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char brosok(int * bros);
void kubik(int * kosti, int * grani);
int main(void)
{
    int broski, kosti, grani, total;
    srand((unsigned int) time(0));

    while(brosok(&broski) != 'q')
    {
        kubik(&kosti, &grani);
        printf("Imeem %d brosaniy %d kostey c %d granyami\n", broski, kosti, grani);
        for(int i = 0; i < broski; i++)
        {
            total = 0;
            for(int index = 0; index < kosti; index++)
            total += rand() % grani + 1;
            printf("%d ", total);

            if((i + 1) % 15 == 0)
                printf("\n");
        }
        putchar('\n');
    }
}
char brosok(int * bros)
{
    char c;
    int prok = 1;
    printf("Vvedite kolichestvo brosaniy ili q dlya zaversheniya: ");
    while(prok)
    {
    if(scanf("%d", bros) != 1)
    {
        if((c = getchar()) == 'q')
        return c;
        else
        {
            printf("Vi vveli necorectno, vi dolzni vvesi libo kolisesto broskov ili 'q' dlya zaversheniya: ");
            continue;
        }
    }
    prok = 0;
    return 0;
    }

    
}

void kubik(int * kosti, int * grani)
{
    printf("Skolko granei i skolko kostey? ");
    scanf("%d %d",kosti, grani);
}

