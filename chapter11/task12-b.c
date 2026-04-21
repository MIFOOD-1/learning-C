#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;
    int p = ' ';

    int words, letter, big_letter, small_letter, prepinaniya, num;
    words = letter = big_letter = small_letter = prepinaniya = num = 0;

    while((c = getchar() != EOF))
    {
        if(isspace(c))
            if(!isspace(p))
                words++;

        if(isupper(c))
            big_letter++;
        if(islower(c))
            small_letter++;
        if(isdigit(c))
            num++;
        if(ispunct(c))
            prepinaniya++;
        
        p = c;
    }

    if(!isspace(p))
        words++;

    printf("slov: %d\n", words);
    printf("strochnih bukv: %d\n", small_letter);
    printf("zaglavnig bukv: %d\n", big_letter);
    printf("znakov prepinaniy: %d\n", prepinaniya);
    printf("cifr: %d\n", num);

    return 0;
}