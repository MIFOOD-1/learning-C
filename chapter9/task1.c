#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double num1, num2;
    printf("Vvedite dva chisla: ");
    while(scanf("%lf %lf", &num1, &num2) != 2)
    {
        while (getchar() != '\n');
        printf("Vi vveli ne corretno, poprobuite snowa: ");
    }
    printf("iz chiesel %.2lf and %.2lf menshee: %.2lf", num1, num2, min(num1, num2));

    return 0;
}

double min(double x, double y)
{
    return x > y ?  y :  x;
}