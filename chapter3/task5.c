#include <stdio.h>
#define YEAR_SECOND 3.156e7
int main(void)
{
    int Vozrast;
    double Vozrast_vSecond;
    printf("Vedite vash vozrast:\n");
    scanf("%d", &Vozrast);
    Vozrast_vSecond = Vozrast * YEAR_SECOND;
    printf("Vash vozrast v secundah: %.1lf\n",Vozrast_vSecond);

    return 0;
}