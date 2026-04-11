#include <stdio.h>
void proverka(int num, int * masiv);
void znachenie(int num, int * masiv);
void umnozit(int num, int * masiv);
int main(void)
{
    int num = 5;
    int array[num];

    znachenie(num, array);
    proverka(num, array);
    umnozit(num, array);
    proverka(num, array);

}
void znachenie(int num, int * masiv)
{
    int znac;
    for(int i = 0; i < num; i++)
    {
        while(scanf("%d", &znac) != 1)
        {   while(getchar() != '\n');
            printf("eto ne chislo! Vvedite chislovoe znacenie\n");
        }
        masiv[i] = znac;
    }
}

void proverka(int num, int * masiv)
{
    int * end = masiv + num;
    for(; masiv < end; masiv++)
        printf("%d ", *masiv);
    printf("\n");
}

void umnozit(int num, int * masiv)
{
    int * end = masiv + num;
    for(; masiv < end; masiv++)
        *masiv = *masiv * 2;
}