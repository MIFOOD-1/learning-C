#include <stdio.h>

int main(void)
{
    char c;
    char pred = 0;
    int podchet = 0;

    while ((c = getchar()) != '#')
    {
        if(pred == 'e' && c == 'i')
        {
            podchet++;
        }
        pred = c;
    }
    printf("Kombinacii 'ei' bylo %d\n", podchet);
    
    return 0;
}