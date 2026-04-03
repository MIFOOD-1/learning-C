#include <stdio.h>

int main(void)
{
    int nechet, chet, sum_chet, sum_nechet, vse_chisla, chislo;
    nechet = chet = sum_chet = sum_nechet = vse_chisla = chislo = 0;

    printf("Vvedite chisla, esli zahotite viity nazmite 0\n");
    while (1)
    {
        if(scanf("%d", &chislo) != 1){
            while (getchar() == '\n'); 
            continue;
        }

        if(chislo == 0)
        {
            break;
        }

        if(chislo % 2 == 0)
        {
            chet++;
            sum_chet += chislo;
        }
        else{
            nechet++;
            sum_nechet += chislo;
        }
        vse_chisla++;
    }
    float sredch =  sum_chet / (float)chet;
    float srednech = sum_nechet /(float)nechet;

    printf("vsego chisel: %d, nechet = %d chet = %d, srednne chet = %f,  srednee nechet = %f",
    vse_chisla, nechet, chet, sredch, srednech);

    return 0;
    
}