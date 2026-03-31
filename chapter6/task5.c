#include <stdio.h>

int main(void)
{
    char max;

    printf("Vvedite zaglavnuyu bukvu: ");

    scanf("%c", &max);

    for(char index = 'A'; index <= max; index++)
    {
        for(char i = max; i > index; i--)
        {
            printf(" ");
        }

        for(char front = 'A'; front <= index; front++)
        {
            printf("%c", front);
        }

        for(char back = index - 1; back >= 'A'; back--)
        {
            printf("%c", back);
        }

        printf("\n");

    }

    return 0;
}