#include <stdio.h>

int main(void)
{
    int c;

    int word, bukv, proverka;
    proverka = 0;
    bukv = 0;
    word = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n')
        {
            proverka = 0;
        }
        else{
            bukv++;
            if(!proverka)
            {
            word++;
            proverka = 1;
            }
        }
    }

    printf("%d bukv, %d slov, srednee kolichestvo bukv v slovah:%d\n", bukv, word, bukv / word);

    return 0;
}