#include <stdio.h>
void Temperatures(double far);

int main(void)
{
    double far;

    printf("Vvedite temperaturu po Farengeitu: ");

    while (scanf("lf", &far) == 1)
    {
        Temperatures(far);
        printf("\nVvedite temperaturu po Farengeitu ili chtob viyti q: ");
    }
    
    printf("Gotovo");
    return 0;
}

void Temperatures(double far)
{
    const double CEL = 5.0 / 9.0;
    const double FAR = 32.0;
    const double KEL = 273.16;

    double cels = CEL * (far - FAR);
    double kelv = CEL + KEL;

    printf("Farengeit: %.2f F\n", far);
    printf("Celsius: %.2f C\n", cels);
    printf("Kelvin %.2f K\n", kelv);
}