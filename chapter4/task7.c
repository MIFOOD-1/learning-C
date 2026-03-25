#include <stdio.h>
#include <float.h>

int main(void)
{
    float num1 = 1.0 / 3.0;
    double num2 = 1.0 / 3.0;

    printf("%.4f, %.4lf\n", num1, num2);
    printf("%.12f, %.12lf\n", num1, num2);
    printf("%.16f, %.16lf\n", num1, num2);

    printf("\n%d %d", FLT_DIG, DBL_DIG); //ответ да

    return 0; 
}