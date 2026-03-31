#include <stdio.h>
#define NUM_DANBARA 150
int main(void)
{
    int friend = 5;
    int week = 0;
    while (friend < NUM_DANBARA)
    {
        week++;
        friend -= week;
        friend *= 2;

        printf("Na nedele %d u Robbinsa %d druzey\n", week, friend);
    }
    
    return 0;
}