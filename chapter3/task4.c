#include <stdio.h>

int main(void)
{
    float i;
    printf("Vvedite znachenie s plavaushey zapyatoi:\n");
    scanf("%f", &i);

    printf("Zapis s fiksirovannoi zapyatoi: %f\n", i);
    printf("Ekscponencialnaiya forma zapisi: %e\n", i);
    printf("Dvoichno-eksponencialnoe predstavlenie: %a\n", i);

    return 0;
}