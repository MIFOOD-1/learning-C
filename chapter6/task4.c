#include <stdio.h>
#define MAX 6
int main(void)
{
    char sim = 'A';
    for(int index = 1; index <= MAX; index++)
    {
        for(int i = 0; i < index; i++)
        {
            printf("%c", sim);
            sim++;
        }
        printf("\n");
    }
    return 0;

}