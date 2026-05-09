#include <stdio.h>
#include "another_pe12-2a.h"


void set_mode(int * mode, int m, int b2)
{
    if(m == 0 || m == 1)
    {
        *mode = m;
    }
    else
    {
        *mode = b2;
        printf("Ukazan nedopustimiy rezhim. Ispolzuetsya rezhim %d.\n", b2);
    }
}

void get_info(int mode, double * rasstoyanie, double * rashod)
{
    if(!mode)
    {
        
        printf("Vvedite proidennoe rasstoyanie v killometrah: ");
        scanf("%lf", rasstoyanie);
        printf("Vvedite obiom izrachodanovogo topliva v litrah: ");
        scanf("%lf", rashod);
    }
    else
    {
        printf("Vvedite proidennoe rastoyanie v milyah ");
        scanf("%lf", rasstoyanie);
        printf("Vvedite obiom izrachodanovogo topliva v galonah: ");
        scanf("%lf", rashod);
    }
}

void show_info(int mode, double rashod, double rasstoyanie)
{
    if(!mode)
    printf("Rashod topliva sostovlyaet %.2lf litrov na 100 km", rashod / rasstoyanie * 100);

    else
    printf("Rashod topliva sostovlyaet %.2lf mili na gallon", rasstoyanie / rashod);
}
