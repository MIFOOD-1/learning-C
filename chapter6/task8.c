#include <stdio.h>


int main(void)
{
    float num1, num2;

    printf("Vvedite dva chisla s plavaushey tochkoy: ");

    while (scanf("%f %f", &num1,  &num2) == 2)
    {
        float urav = (num1 - num2) / (num1 * num2);
        printf("(%.2f - %.2f) / (%.2f * %.2f) = %.2f\n", num1, num2, num1, num2, urav);
        printf("Vvedite sleduushie dva chila ili q dlya vihoda: ");
    }

    return 0;
    
}