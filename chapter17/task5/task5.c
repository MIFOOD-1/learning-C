#include <stdio.h>
#include "task5.h"

int main(void)
{
    item_t sim;
    stack_t stack;

    Initializatoin(&stack);
    printf("VVedite simvol:");
    while((sim.simvol = getchar()) != '\n')
        Push(&sim, &stack);
    


    while(Pop(&sim, &stack))
        putchar(sim.simvol);

    printf("\nGG");
    return 0;
}