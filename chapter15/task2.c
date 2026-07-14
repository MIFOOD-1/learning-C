#include <stdio.h>
#include <string.h>
#include <limits.h>

int num(const char *bin);
char *bit(int n, char *str);

int main(int argc, char *argv[])
{
    char bin[CHAR_BIT * sizeof(int) + 1];

    if(argc != 3)
    {
        printf("Usage: %s binari1 binary2\n", argv[0]);
        return 1;
    }

    int num1 = num(argv[1]);
    int num2 = num(argv[2]);

    printf("Number 1: %s\n", bit(num1, bin));

    printf("~Number1: %s\n", bit(~num1, bin));

    printf("Number 2: %s\n", bit(num2, bin));

    printf("~Number2 : %s\n\n", bit(~num2, bin));

    printf("AND (&): %s\n", bit(num1 & num2, bin));
    printf(" OR (|): %s\n", bit(num1 | num2, bin));
    printf(" ISKL OR(^): %s\n", bit(num1 ^ num2, bin));

    return 0;
}


int num(const char *bin)
{
    int result = 0;

    while(*bin)
    {
        result  <<= 1;

        if(*bin == '1')
            result |= 1;

        bin++;
    }
    return result;
}

char *bit(int n, char *str)
{
    const int size = CHAR_BIT * sizeof(int);

    for(int i = size - 1; i >= 0; i--, n >>= 1)
        str[i] = (n & 1) + '0';

    str[size] = '\0';

    return str;
}