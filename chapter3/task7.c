#include <stdio.h>
#define SM_VDUM 2.54
int main(void)
{
    float rost;
    printf("Vvedite vash rost v sm: \n");
    scanf("%f", &rost);
    printf("Vash rost d dumah: %.2f\n", rost / SM_VDUM);

    return 0;
}