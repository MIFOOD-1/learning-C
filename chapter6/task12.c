#include <stdio.h>

int main(void)
{
    int num;
    double sum1 = 0.0;
    double sum2 = 0.0;
    int sign = 1;

    printf("Vvedite predel elementov: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        sum1 += 1.0 / i;
        sum2 += sign * (1.0 / i);
        sign *= -1;
    }

    printf("Summa 1: %lf\n", sum1);
    printf("Summa 2: %lf\n", sum2);

    return 0;
}