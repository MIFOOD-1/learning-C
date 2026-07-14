#include <stdio.h>

int bin(const char * str);

int main(void)
{
    char * pbin = "01001001";

    printf("%d\n", bin(pbin));

    return 0;
}

int bin(const char * str)
{
    int result = 0;

    while(*str)
    {
        result <<= 1;

        if(*str == '1')
            result +=1;

        str++;
    }

    return result;
}