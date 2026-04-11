#include <stdio.h>
void copy_arr(double target1[], double source[], int five);
void proverka(int num1, double * masiv);

int main(void)
{
    double source[7] = {1,2,3,4,5,6,7};
    double target1[3];

    copy_arr(target1, source, 3);

    proverka(3, target1);

    return 0;
}


void copy_arr(double target1[], double * source, int five)
{
    double *ptr = source + 2;
    for (int i = 0; i < five; i++, ptr++)
    {
        *(target1 + i) = *ptr;
    }
}

void proverka(int num1, double * masiv)
{
   
    for(int index = 0; index < num1; index++)
        printf("%.2lf ", *(masiv + index));
        
}