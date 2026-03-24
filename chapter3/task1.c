#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
int i = INT_MAX;
printf("Maksimalnoe znachenie: %d\n", i);
 i += 1; 
printf("Perepolnenie: %d\n\n\n", i);

double c = DBL_MAX;
printf("Maksimalnoe znachenie: %lf\n", c);
c *= 2;
printf("perepolnenie: %lf\n", c);



//потеря точности
float a = 1e20;
float b = 1.0;
    printf("a = %e\n", a);
    printf("a + b = %e\n", a + b);
    printf("Raznica (a+b - a) = %e\n", (a + b) - a);

    return 0;
}