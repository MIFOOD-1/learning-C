#include <stdio.h>
void zapolnenie(int num, int num2, double (* masiv)[num2]);
void copy(int num, int num2, double (* masiv)[num2], double (* masiv2)[num2]);
void proverka(int num, int num2, double (* masiv)[num2]);
int main(void)
{
    int num = 3;
    int num2 = 5;
    double array[num][num2];
    double array_copy[num][num2];

    zapolnenie(num, num2, array);

    copy(num, num2, array, array_copy);

    proverka(num, num2, array_copy);

    return 0;
}

void zapolnenie(int num, int num2, double (* masiv)[num2])
{
    double n = 0;
    for(int i = 0; i < num; i++)
        for(int index = 0; index < num2; index++)
            *(*(masiv + i) + index) = ++n;
}



void copy(int num, int num2, double (* masiv)[num2], double (* masiv2)[num2])
{
    
    for(int i = 0; i < num; i++)
    {
        for(int index = 0; index < num2; index++)
        *(*(masiv2 + i) + index) = *(*(masiv + i) + index);
    }
}

void proverka(int num, int num2, double (* masiv)[num2])
{
    for(int i = 0; i < num; putchar('\n'), i++)
        for(int index = 0; index < num2; index++)
            printf("%.2lf ",*(*(masiv + i) + index));
}


