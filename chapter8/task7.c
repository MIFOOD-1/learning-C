#include <stdio.h>
// #define DEFOLT_STAVKA 10.00
// #define SVERH_STAVKA (DEFOLT_STAVKA * 1.5)
#define SVERH_CHAS 40
#define NALOG_PERVIY 15
#define NALOG_VTOROY 20
#define NALOG_OSTATOK 25
#define NALOG_DO 300
#define NALOG_PO 150
#define NALOG_SVERH (NALOG_DO + NALOG_PO)

int main(void)
{
    int chasi;
    double zarabatok, nalog, chistaya_pribil, DEFOLT_STAVKA, SVERH_STAVKA;
    char vibor;

    while (1)
{
    printf("Vvedite chislo, sootvestvushie zelaemoi tarifnoy stavke ili  deystviy:\n");
    printf("a) $8.75/chas           b) $9.33/chas\n");
    printf("c) $10.00/chas           d) $11.20/chas\n");
    printf("q) Vihod\n");

    vibor = getchar();

    while (getchar() != '\n');

    switch (vibor)
    {
    case 'a':
        DEFOLT_STAVKA = 8.75;
        break;
     case 'b':
        DEFOLT_STAVKA = 9.33;
        break;
     case 'c':
        DEFOLT_STAVKA = 10.00;
        break;
     case 'd':
        DEFOLT_STAVKA = 11.20;
        break;
     case 'q':
        return 0;
        
    default:
        printf("neverniy vvod!!!\n");
            continue;
    }

    SVERH_STAVKA = DEFOLT_STAVKA * 1.5;
    printf("Skolko chasov vi otrabotali za nedelu: ");
    scanf("%d", &chasi);
    while (getchar() != '\n');

    if(chasi <= SVERH_CHAS)
        zarabatok = chasi * DEFOLT_STAVKA;
    else
    {
        zarabatok = SVERH_CHAS * DEFOLT_STAVKA + (chasi - SVERH_CHAS) * SVERH_STAVKA;
    }

    if(zarabatok <= NALOG_DO)
        nalog = zarabatok * NALOG_PERVIY / 100;
    else if(zarabatok <= (NALOG_DO + NALOG_PO))
        nalog = NALOG_DO * NALOG_PERVIY / 100 + (zarabatok - NALOG_DO) * NALOG_VTOROY / 100;
    else
        nalog = NALOG_DO * NALOG_PERVIY / 100 + NALOG_PO * NALOG_VTOROY / 100 + (zarabatok - NALOG_SVERH) * NALOG_OSTATOK / 100;

    chistaya_pribil = zarabatok - nalog;

    printf("Za %d chasov v nedelu vi zarabotali: %.2lf$\n", chasi, zarabatok);
    printf("Zaplatili nalog v summe %.2lf$\n", nalog);
    printf("Vasha zarplata posle uplati nalogov: %.2lf$\n\n", chistaya_pribil);

}

return 0;

}