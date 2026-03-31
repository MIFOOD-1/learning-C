#include <stdio.h>
#define MAX 8
int main(void)
{
    int lol[MAX];

    lol[0] = 1;

    for(int i = 1; i < MAX; i++)
    {
        lol[i] = (lol[i - 1]) * 2;
    }

    int i = 0;

    do
    {
        printf("%d ", lol[i]);
    } while (++i < MAX);
    
    return 0;

}