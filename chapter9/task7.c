#include <stdio.h>
int proverka(char c);

int main(void)
{
    char c;
    while((c = getchar()) != EOF)
    {
        int res = proverka(c);
        if(res == -1)
            printf("%c ne yavlyatsya bukvoy\n", c);
        else
            printf("%c yvlyetsa №%d bukvoi alfavita", c, res);
    }

    
    return  0;

}

int proverka(char c)
{
    if(c >= 'A' && c <= 'Z')
        return c - 64;
    else if (c >= 'a' && c <= 'z')
        return c - 96;

    return -1;
}