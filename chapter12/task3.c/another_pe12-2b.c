#include <stdio.h>
#include "another_pe12-2a.h"
int main(void)
{
    int mode = 0;
    int b2 = mode;
    double rasstoyanie ,rashod;
    printf("Vvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        
        set_mode(&mode, mode, b2);
        get_info(mode, &rasstoyanie, &rashod);
        show_info(mode, rashod, rasstoyanie);
        printf("\nVvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima:");
        printf(" (-1 d;ya zaversheniya): ");
        b2 = mode;
        scanf("%d", &mode);
    }
    printf("Programma zavershena.\n");
    return 0;
}