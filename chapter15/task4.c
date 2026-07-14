#include <stdio.h>

int proverka(int num, int mesto);
int main(void)
{
    int num = 5;
    int bit = 3;

    printf("%d", proverka(num, bit));

    return 0;
}
int proverka(int num, int mesto)
{
    num>>=mesto-1;

    if(num & 1)
        return 1;
    else 
        return 0;
}