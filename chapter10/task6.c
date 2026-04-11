#include <stdio.h>
void smena(double * masiv, int num);
void proverka(double * masiv, int num);
int main(void)
{
    double masiv[5] = {1,2,3,4,5};

    proverka(masiv, 5);
    smena(masiv, 5);
    proverka(masiv, 5);
    return 0;
}

void smena(double * masiv, int num)
{
    double masiv2[num];
    for(int i = 0; i < num; i++)
    {
        masiv2[i] = masiv[i];
    }
    
    for(int i = num-1, index = 0; i >= 0; i--, index++)
        masiv[index] = masiv2[i];
}

void proverka(double * masiv, int num)
{
    for(int i = 0; i < num; i++)
        printf("%.2lf ", masiv[i]);
    printf("\n");
}