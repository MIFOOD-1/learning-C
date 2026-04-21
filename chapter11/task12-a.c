#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int c; 
    int p = ' ';
    int words, letter, big_letter, small_letter, prepinaniya, num;
    words = letter = big_letter = small_letter = prepinaniya = num = 0;
    while ((c = getchar()) != EOF)
    {
        if(isspace(c) == 1)
            { 
            if(isspace(p) != 1)
            words++;
            }
        if(ispunct(c))
            prepinaniya++;
        
        if(c >= 'A' && c <= 'Z')
            big_letter++;
        if(c >= 'a' && c <= 'z')
            small_letter++;
        if(c >= '0' && c <= '9')
            num++;
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




