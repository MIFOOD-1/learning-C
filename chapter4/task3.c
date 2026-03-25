#include <stdio.h>

int main(void)
{
    double num;

    printf("Vvedite chislo s plavayushey zapyatoy: ");
    scanf("%lf", &num);

    printf("Fiksirovannaya forma: %f\n", num);
    printf("Eksponentsialnaya forma: %e\n", num);

    return 0;
}