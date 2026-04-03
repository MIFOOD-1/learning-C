#include <stdio.h>

int main(void)
{
    char c;
    int zamena = 0;

    for(;(c = getchar()) != '#';)
    {
        if(c == '!')
        {
            printf("!!");
            zamena++;
        }
        else if(c == '.')
        {
            printf("!");
            zamena++;
        }
        else
            printf("%c", c);
    }
    printf("stolko zamen bilo: %d", zamena);
    return 0;
}