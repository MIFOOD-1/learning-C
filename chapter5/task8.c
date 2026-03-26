#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Eta programma vichislyaet rezultati deleniya po modulu.\n");
    printf("Vvedite celoe chislo, kotoroe budet slujit vtorim operandom: ");
    scanf("%d", &num2);

    const int modul = num2;

    printf("Teper vvedite perviy operand: ");
    scanf("%d", &num1);

    while (num1 > 0)
    {
        printf("%d %% %d ravno %d\n", num1, modul, num1 % modul);

        printf("Vvedite sleduushie chislo dlya pervogo operanda (< = 0 dlya vihoda iz programmi): ");
        scanf("%d", &num1);
    }

    printf("Gotovo");
    return 0;
} 
