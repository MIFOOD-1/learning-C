#include <stdio.h>
#include <limits.h>

unsigned int bit(unsigned int x, int n);
int main(void)
{
    printf("%d", bit(0x80000000, 4));

}
unsigned int bit(unsigned int x, int n)
{
    int bits = sizeof(unsigned int) * 8;

    while(n-- > 0)
    {
        unsigned int last = x >> (bits - 1);

        x <<= 1;

        x |= last;
    }
return x;
}