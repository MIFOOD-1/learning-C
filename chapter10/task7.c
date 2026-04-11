#include <stdio.h>
#define NUM1 5
#define NUM  3
void ptr(int num1, int num, double masiv[][num], double masiv_copy[][num]);
void proverka(int num1, int num, double masiv[][num]);

int main(void)
{
    double masiv[NUM1][NUM] = 
    {
    {5, 10, 15},
    {20, 25, 30},
    {35, 40, 45},
    {50, 55, 60},
    {65, 70, 75}
    };

    double masiv_copy[NUM1][NUM];

    ptr(NUM1, NUM, masiv, masiv_copy);

    proverka(NUM1, NUM, masiv);

    return 0;
}
void ptr(int num1, int num, double masiv[][num], double masiv_copy[][num])
{
    for(int index = 0; index < num1; index++)
        for(int i = 0; i < num; i++)
            masiv_copy[index][i] = masiv[index][i];
            
}

void proverka(int num1, int num, double masiv[][num])
{
   
    for(int index = 0; index < num1; putchar('\n'), index++)
        for(int i = 0; i < num; i++)
            printf("%.2lf ",masiv[index][i]);
        
}

