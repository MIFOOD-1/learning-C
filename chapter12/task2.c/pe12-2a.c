#include <stdio.h>
#include "pe12-2a.h"

static int mode = 0;
static double rasstoyanie;
static double rashod;
void set_mode(int m)
{
    if(m == 0 || m == 1)
    {
        mode = m;
    }
    else
        printf("Ukazan nedopustimiy rezhim. Ispolzuetsya rezhim %d.\n", mode);
    
}

void get_info()
{
    if(!mode)
    {
        printf("Vvedite proidennoe rasstoyanie v killometrah: ");
        scanf("%lf", &rasstoyanie);
        printf("Vvedite obiom izrachodanovogo topliva v litrah: ");
        scanf("%lf", &rashod);
    }
    else
    {
        printf("Vvedite proidennoe rastoyanie v milyah ");
        scanf("%lf", &rasstoyanie);
        printf("Vvedite obiom izrachodanovogo topliva v galonah: ");
        scanf("%lf", &rashod);
    }
}

void show_info()
{
    if(!mode)
    printf("Rashod topliva sostovlyaet %.2lf litrov na 100 km", rashod / rasstoyanie * 100);

    else
    printf("Rashod topliva sostovlyaet %.2lf mili na gallon", rasstoyanie / rashod);
}