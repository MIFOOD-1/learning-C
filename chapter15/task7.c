#include <stdio.h>

#define ID_MASK      0xFF
#define SIZE_MASK    (0x7F << 8)
#define ALIGN_MASK   (0x3 << 15)

#define BOLD_MASK    (1 << 17)
#define ITALIC_MASK  (1 << 18)
#define UNDER_MASK   (1 << 19)


void ID(unsigned long *lol)
{
    
    unsigned int temp;

    printf("Vvedite identifikator (0-255):");
    scanf("%u", &temp);

    *lol &= ~ID_MASK;
    *lol |= (temp & 0xFF);
}

void shrift(unsigned long *lol)
{   
    unsigned int temp;

    printf("Vvedite razmer: ");
    scanf("%u", &temp);

    *lol &= ~SIZE_MASK;
    *lol |= ((temp & 0x7F) << 8);
}

void viravnivanie(unsigned long *lol)
{
    unsigned int temp;

    printf("0 - Vlevo\n");
    printf("1 - Po centru\n");
    printf("2 - Vpravo\n");
    printf("Viberite viravnivanie: ");

    scanf("%u", &temp);

    *lol &= ~ALIGN_MASK;
    *lol |= ((temp & 0x03) << 15);
}

void poluzhirniy(unsigned long *lol)
{
    *lol ^= BOLD_MASK;
}

void kursiv(unsigned long *lol)
{
    *lol ^= ITALIC_MASK;
}

void podcherknutiy(unsigned long *lol)
{
    *lol ^= UNDER_MASK;
}


int main(void)
{
    unsigned long font = 0;
    
    font |= 1;
    font |= (12 << 8);

    char *masiv;
    while(1)
    {
        unsigned int aligin = (font & ALIGN_MASK) >> 15;
        printf("ID      RAZMER      VIRAVNIVANIE        Z       K       CH\n");
        switch(aligin)
        {
            case 0: masiv = "Vlevo"; break;
            case 1: masiv ="Po centru"; break;
            case 2: masiv = "Vpravo"; break;
        }
        printf("%d      %d          %s                  %s      %s      %s\n",
                (font & ID_MASK), ((font & SIZE_MASK) >> 8), masiv, 
                 font  & BOLD_MASK ? "VKL" : "OTKL", 
                 font  & ITALIC_MASK ? "VKL" : "OTKL",
                 font  & UNDER_MASK ? "VKL" : "OTKL");

        char ch;

        printf("\n");
        printf("f - izmenit ID\n");
        printf("s - izmenit razmer\n");
        printf("a - viravnivanie\n");
        printf("b - poluzhirniy\n");
        printf("i - kursiv\n");
        printf("u - podcherknutiy\n");
        printf("q - vihod\n");

        scanf(" %c", &ch);  
        while(getchar() != '\n');

        switch (ch)
        {
        case 'f':
            ID(&font);
            break;
        case 's':
            shrift(&font);
            break;
        case 'a':
            viravnivanie(&font);
            break;
        case 'b':
            poluzhirniy(&font);
            break;
        case 'i':
            kursiv(&font);
            break;
        case 'u':
            podcherknutiy(&font);
            break;
         case 'q':
            return 0;
            break;
        
        default: printf("Ne verniy vvod poprobite snova\n");
            break;
        }
    }
}