#include <stdio.h>

int main(void)
{
    char c;
    int zamena = 0;

    for(;(c = getchar()) != '#';)
    {
        switch (c)
        {
        case '!':
            printf("!!");
            zamena++;
            break;
        
        case '.':
            printf("!");
            zamena++;
            break;
        
        default:
            printf("%c", c);
            break;
        }
    }
    printf("stolko zamen bilo: %d", zamena);
    return 0;
}