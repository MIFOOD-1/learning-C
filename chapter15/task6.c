#include <stdio.h>

struct bit
{
    unsigned int indifikator_shrifta : 8;
    unsigned int size_shrift : 7;
    unsigned int viravnivanie : 2;
    unsigned int poluzirniy : 1;
    unsigned int kursiv : 1;
    unsigned int podchernitiy : 1;
};

void ID(struct bit *lol)
{
    
    unsigned int temp;

    printf("Vvedite identifikator (0-255):");
    scanf("%u", &temp);

    lol->indifikator_shrifta = temp & 0xFF;
}

void shrift(struct bit *lol)
{   
    unsigned int temp;

    printf("Vvedite razmer: ");
    scanf("%u", &temp);

    lol->size_shrift = temp & 0x7F;
}

void viravnivanie(struct bit *lol)
{
    unsigned int temp;

    printf("0 - Vlevo\n");
    printf("1 - Po centru\n");
    printf("2 - Vpravo\n");
    printf("Viberite viravnivanie: ");

    scanf("%u", &temp);

    lol->viravnivanie = temp & 0x03;
}

void poluzhirniy(struct bit *lol)
{
    lol->poluzirniy = !lol->poluzirniy;
}

void kursiv(struct bit *lol)
{
    lol->kursiv = !lol->kursiv;
}

void podcherknutiy(struct bit *lol)
{
    lol->podchernitiy = !lol->podchernitiy;
}


int main(void)
{
    struct bit font = {1, 12, 0, 0, 0 ,0};
    char *masiv;

    while(1)
    {
        printf("ID      RAZMER      VIRAVNIVANIE        Z       K       CH\n");
        switch(font.viravnivanie)
        {
            case 0: masiv = "Vlevo"; break;
            case 1: masiv ="Po centru"; break;
            case 2: masiv = "Vpravo"; break;
        }
        printf("%d      %d          %s                  %s      %s      %s\n",
                font.indifikator_shrifta, font.size_shrift, masiv, 
                font.poluzirniy ? "VKL" : "OTKL", 
                font.kursiv ? "VKL" : "OTKL",
                font.podchernitiy ? "VKL" : "OTKL");

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