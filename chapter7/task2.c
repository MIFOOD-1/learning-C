#include <stdio.h>

int main(void)
{
    char c;
    int chet = 0;

    for(printf("Vvedite simvoli ili # dlya vihoda\n"); (c = getchar()) != '#'; chet++)
    {
        if(chet % 8 == 0 && chet != 0)
        {
            printf("\n");
        }
        printf("(%c == %d)", c, c);
    }

    return 0;
}