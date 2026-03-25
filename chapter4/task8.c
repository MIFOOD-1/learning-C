#include <stdio.h>
#define ONE_GALON_LITROV 3.785
#define ONE_MIL_V_KM 1.609
#define KM_LITR 100
int main(void)
{
    double galon, mil, galon_mil;
    double km, litrov, litrov_km;

    printf("Vvedite skolko mil vi proehali i skolko potratili gallonov\n");

    printf("MIL:");
    scanf("%lf", &mil);
    printf("Galonov: ");
    scanf("%lf", &galon);

    km = mil * ONE_MIL_V_KM;
    litrov = galon * ONE_GALON_LITROV;

    galon_mil = mil / galon;
    litrov_km = KM_LITR * (litrov / km);

    printf("Mil na gallon: %.1f\n", galon_mil);
    printf("Litrov na 100 km %.1f", litrov_km);

    return 0;
}