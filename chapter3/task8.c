#include <stdio.h>

int main()
{
    double chaska;
    scanf("%lf", &chaska);

    double pinta =chaska / 2;
    double unc = chaska * 8;
    double stolovaya = unc * 2; 
    double chainaya = stolovaya * 3;

    printf("ctolko chasek vi veli: %.2lf\n v pintah eto: %.2lf\n v unciyah eto: %.2lf\n v stolovih lozkah eto: %.2lf\n v chainih lozkah eto: %.2lf", chaska, pinta, unc, stolovaya, chainaya);

    return 0;

}