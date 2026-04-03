#include <stdio.h>
#define ARTISHOK 2.05
#define SVEKLA 1.15
#define MORKOV 1.09
#define SKIDKA 0.05
#define SUMMA_DLY_SKIDIKI 100
#define PLATA1_ZA_DOSTAVKU 6.50
#define PLATA2_ZA_DOSTAVKU 14.00
#define PLATA3_ZA_DOSTAVKU 0.50
#define DO1_DOSTAVKA 5.0
#define DO2_DOSTAVKA 20.0

double funt(double n, double *m);
double skidka(double n, double m, double t);
double dostavka(double *m, double minfunt, double maxfunt, double plata1, double plata2, double plata3);

int main(void)
{
    double funt_ovoshey[3] = {0, 0, 0};
    double artishoki_money, svekla_money, morkov_money;
    artishoki_money = svekla_money = morkov_money = 0;
    double skidon, cena_za__prodkti, plata_za_dostavku, konechnaya_summa;
    char c;
    int proverka = 1;
    
    while(proverka)
    {
        printf("Vvedie variant chto vi hotite nabrat: \n");
        printf("a) artishoki            b)sveklu\n");
        printf("c) morkov               q)gotovo\n");

        c = getchar();
        while (getchar() != '\n');
        
        switch (c)
        {
        case 'a':
            artishoki_money += funt(ARTISHOK, &funt_ovoshey[0]);
            continue;
        
        case 'b':
            svekla_money += funt(SVEKLA, &funt_ovoshey[1]);
            continue;

        case 'c':
            morkov_money += funt(MORKOV, &funt_ovoshey[2]);
            continue;

        case 'q':
            proverka = 0;
            break;
        
        default: 
            printf("Nepreemliy vvod!!!\n");
            continue;
        }
    }


    while(!proverka){
    cena_za__prodkti = artishoki_money + svekla_money + morkov_money;  

    skidon = skidka(cena_za__prodkti, SKIDKA, SUMMA_DLY_SKIDIKI);

    plata_za_dostavku = dostavka(funt_ovoshey, DO1_DOSTAVKA, DO2_DOSTAVKA, PLATA1_ZA_DOSTAVKU, PLATA2_ZA_DOSTAVKU, PLATA3_ZA_DOSTAVKU);

    konechnaya_summa = cena_za__prodkti - skidon + plata_za_dostavku;

        if(artishoki_money != 0)
            printf("cena za %.2lf funtov artishok = %.2lf$\n", funt_ovoshey[0], artishoki_money);
        if(svekla_money != 0)
            printf("cena za %.2lf funtov svekli = %.2lf$\n", funt_ovoshey[1], svekla_money);
        if(morkov_money != 0)
            printf("cena za %.2lf funtov morkovi = %.2lf$\n", funt_ovoshey[2], morkov_money);

        printf("Cena za vse produkti: %.2lf$\n", cena_za__prodkti);
        
        if(skidon != 0)
            printf("Izza togo chto vi nabrali bolee %d$ u vas skidka v %.2lf$\n", SUMMA_DLY_SKIDIKI, skidon);

        printf("Vsego funtov vi nabrali: %.2lf\n",  funt_ovoshey[0] +  funt_ovoshey[1] + funt_ovoshey[2]);
        printf("Dostavka stoit: %.2lf$\n", plata_za_dostavku);
        printf("S vas %.2lf$", konechnaya_summa);

        proverka = 1;
}

        
    return 0;
}

double funt(double n, double *m)
{
    double suma;
    double funts;
    
    printf("Vvedite skolko vi vzyali funtov: ");
    while(scanf("%lf", &funts) != 1)
    {
        printf("nepreemlimiy vvod!!!\n");
        while (getchar() != '\n');

    }
    
    *m += funts;
    suma = n * funts;
    while (getchar() != '\n');

    return suma;
}


double skidka(double n, double m, double t)
{
    double skidka;
    
    if(n >= t)
    {
       skidka = n * m;
       return skidka;
    }

    return 0;
}

double dostavka(double *m, double minfunt, double maxfunt, double plata1, double plata2, double plata3)
{

    double all_funts = 0;

    for(int i = 0; i < 3; i++)
    {
        all_funts += m[i];
    }

    if(all_funts <= minfunt)
        return plata1;
    else if(all_funts > minfunt && all_funts <= maxfunt)
        return plata2;
    else
    {
        return ((all_funts - maxfunt) * plata3) + plata2;
    }
}