#include <stdio.h>

double harmonic_mean(double a, double b);

int main(void)
{
    double x, y;
    printf("Vvedite dva chisla u kotorih mi budem sravnavat garmonicheskoe: ");

    scanf("%lf %lf", &x, &y);

    printf("harmonic mean: %lf and %lf = %lf\n", x, y, harmonic_mean(x, y));
    
    return 0;
}

double harmonic_mean(double a, double b)
{
    return 1.0 / ((1.0 / a + 1.0 / b) / 2.0);
}