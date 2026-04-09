#include <stdio.h>
double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Vvedite chislo i polozitelnuyu celuyu ctepen,");
    printf(" v kotoruu\nchislo budet vozvdedeno. Dlya zaversheniya programmi");
    printf(" vvedite q.\n");

    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g v stepeni %d ravno %.5g\n", x, exp, xpow);
        printf("Vvedite sleduushuu paru chisel ili q dlya zaverheniya.\n");
    }
    printf("Nadeemsya, chto vi ocenili eto upraznenie -- do svidaniya!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    if(n == 0 && p == 0)
    {
        printf("0^0 ne opredeleno, vozvrashaem 1\n");
        return 1;

    }

    if(n == 0)
        return 0;

    

    if(p > 0)
    {
    for(i = 1; i <= p; i++)
        pow *= n;
    }


    else if(p < 0)
    {
        for(i = -1; i >= p; i--)
        pow /= n;
    }

    else if(p == 0)
    {
       pow = n / n;
    }




    return pow;
}