#include <stdio.h>

int main(void)
{
    float rost_sm;
    char name[40];

    printf("Vvedite svoe imya i rost v sm: ");

    scanf("%s %f",name, &rost_sm);
    //scanf("%f", &rost_sm);

    printf("%s, vash rost sostovlyaet %.2f metrov",name, rost_sm / 100);

    return 0;
}