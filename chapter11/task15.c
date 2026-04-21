#include <stdio.h>
#include <ctype.h>

int atoi1(const char *str);

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("oshibka\n");
        return 0;
    }
    int result = atoi1(argv[1]);

    printf("result = %d", result);

    return 0;
}

int atoi1(const char *str)
{
    int i = 0;
    int result = 0;

    while(str[i] != '\0' && str[i] != '\n')
    {
        if(!isdigit(str[i]))
            return 0;

        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result;
}