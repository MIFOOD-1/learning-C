#include <stdio.h>
#include "pe12-2a.h"
int main(void)
{
    int mode;
    printf("Vvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("\nVvedite 0 dlya metrisheskogo rezima ili 1 dlya amerikanskogo rezima:");
        printf(" (-1 d;ya zaversheniya): ");
        scanf("%d", &mode);
    }
    printf("Programma zavershena.\n");
    return 0;
}