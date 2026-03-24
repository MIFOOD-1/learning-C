#include <stdio.h>
#define ONE_MOLEKULE 3.0e-23
#define QUART_WATER 950

int main(void)
{
    double quarts, molecules;

    printf("Vvedite obiem vodi v kvartah: \n");
    scanf("lf", &quarts);

    molecules = (quarts * QUART_WATER) / ONE_MOLEKULE;

    printf("Kolehestvo molekul: %e\n", molecules);

    return 0;
}