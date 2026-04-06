#include <stdio.h>

int main(void)
{
    int min, max, c;
    min = 1;
    max = 100;
    int guess = 1;
    printf("Viberite celoe chislo v intervale ot 1 do  100. Ya porobuu ugadat ");
    printf("ego. \nNazmite klavishu y, esli moya dogadka verna ");
    printf("\nklavishu n v protivnom slychae.\n");

    while(min <= max){
        
        guess = (min + max) / 2;
        printf("Vashim chislom yavlyatsya %d?\n", guess);
        
        if(getchar() == 'y')
        {
            printf("Ya tak i znal!");
            break;
        }

        while ((getchar()) != '\n');
        while (1)
        {
            
            printf("Vashe chislo bolzhe ili menhe chem %d\n", guess);
            printf("Esli menche nazmite 'm' esli bolse to 'b'\n");

            c = getchar();

             if(c == 'm')
                max = guess - 1;


             else if(c == 'b')
                min = guess + 1;

             else
            {
                printf("Vi otvetili ne tak kak vas prosili!!!\n");
                while ((getchar()) != '\n');
                continue;
            }
             while (getchar() != '\n');
             break;
        }
    }
    return 0;
}