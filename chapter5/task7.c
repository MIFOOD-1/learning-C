#include <stdio.h>  
void cub(double n);
int main(void)
{
double num;
printf("Vvedite chislo: ");
scanf("%lf", &num);

cub(num);

return 0;
}

void cub(double n)
{
    printf("%.1lf v kube = %.1lf",n, n * n * n);
}