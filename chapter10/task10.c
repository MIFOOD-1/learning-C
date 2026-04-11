#include <stdio.h>
void copy(int num, double * array1, double * array2, double * array3);
void proverka(int num, double * masiv);
int main(void)
{
double array1[5] = {1, 2, 3, 4, 5};
double array2[5] = {10, 20, 30, 40, 50};
double array3[5];

copy(5, array1, array2, array3);

proverka(5, array3);

return 0;
}


void copy(int num, double * array1, double * array2, double * array3)
{
    double * end = array1 + num;
    for(; array1 < end; array1++, array2++, array3++)
        *array3 = *array1 + *array2;
}

void proverka(int num, double * masiv)
{
    double * end = masiv + num;
    for(; masiv < end; masiv++)
        printf("%.2lf ", *masiv);
}