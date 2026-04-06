#include <stdio.h> //task2.exe < file

int main(void)
{
    int c;
    int num = 0;
    while ((c = getchar()) != EOF)
    {
        if(num == 10)
        {
            putchar('\n');
            num = 0;
        }

        if(c == '\n' || c == '\t')
        {
            if(c == '\n')
                printf("\\n   ASCII = %d|| ",c);
            else printf("\\t   ASCII = %d|| ", c);
        }
        else(printf("%c = ASCII = %d|| ",c , c));

        num++;
    }
    return 0;
}