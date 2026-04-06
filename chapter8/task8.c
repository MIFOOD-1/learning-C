#include <stdio.h>
void vvod(char c);


int main(void)
{
    int c;

    while(1)
    {
        printf("Viberite zelaemuyu operaciyu:\n");
        printf("c. clozenie     v.vichitanie\n");
        printf("y. ymnozenie    d. delenie\n");
        printf("z. zaverchenie\n");

        c = getchar();
        while(getchar() != '\n');

        switch (c)
        {
        case 'c':
            vvod(c);
            continue;
        
         case 'v':
            vvod(c);
            continue;

         case 'y':
            vvod(c);
            continue;

         case 'd':
            vvod(c);
            continue;

         case 'z':
            printf("Programma zaverhena\n");
            return 0;
        
        default:
        printf("Net takogo varianta otveta!!!\n");
        continue;
        }
       
    }

    return 0;
}

void vvod(char c)
{
    double num1, num2;
    char d;
    printf("Vvedite pervoe chislo: ");
    while(scanf("%lf", &num1) != 1)
    {
        while((d = getchar()) != '\n')
            printf("%c", d);
    printf("ne yavlyetsya chislom.\n");
    printf("Vvedite chislo, yakoe kak 2.5, -1.78e8 ili 3:");
    }

    while (getchar() != '\n');

    printf("Vvedite vtoroe chislo: ");
    while(scanf("%lf", &num2) != 1 || (c == 'd' && num2 == 0))
    {
        if(num2 != 0)
        {
        while((d = getchar()) != '\n')
           printf("%c", d);
    printf(" ne yavlyetsya chislom.\n");
    printf("Vvedite chislo, takoe kak 2.5, -1.78e8 ili 3:");
        }

        else
        {
            printf("Vvedite chislo, otlichnoe ot 0: ");
        }
    }

    if(c == 'c')
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
    else if(c == 'v')
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
    else if(c == 'y')
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
    else if(c == 'd')
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
   
     while (getchar() != '\n');
}