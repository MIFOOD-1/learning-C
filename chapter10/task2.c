#include <stdio.h>
void copy_arr(double target1[], double source[], int five);
void copy_ptr(double * target2, double * source, int five);
void copy_ptrs(double * target3, double * source, double * source_1);
int main(void)
{
double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[5];
double target2[5];
double target3[5];

copy_arr(target1, source, 5);
copy_ptr(target2, source, 5);
copy_ptrs(target3, source, source + 5);

for(int i = 0; i < 5; i++)
{
    printf("Target1[%d] = %.1lf ",  i, target1[i]);
    printf("Target2[%d] = %.1lf ", i, target2[i]);
    printf("Target3[%d] = %.1lf \n", i, target3[i]);
}



return 0;
}

void copy_arr(double target1[], double source[], int five)
{
    for (int i = 0; i < five; i++)
    {
        target1[i] = source[i];
    }
}

void copy_ptr(double * target2, double * source, int five)
{
    for(int i = 0; i < five; i++)
    {
        *(target2 + i) = *(source + i);
    }
}

void copy_ptrs(double * target3, double * source, double * source_1)
{
    for( ;source < source_1; source++, target3++)
    {
        *target3 = *source;
    }
}

