#include <stdio.h>
#define ODIN 17850
#define GLAV_CHAD 23900
#define BRAK_SOVHOZ 29750
#define BRAK_RAZHOZ 14875
#define NALOG_DO 0.15
#define NALOG_PO 0.28
int main(void)
{
    double summa, chistaya, nalog, predel;
    char c; 

    while (1)
    {
        printf("Vvedite v kakuyu kategoriu vi vhodite:\n");
        printf("a) Odinokiy\n");
        printf("b) Glava  semeistva\n");
        printf("c) Sostoite v brake, sovmestnoe vvedenie hozyaystvo\n");
        printf("d) Sostoite v brake, razdelnoe vvedenie hozyaystvo\n");
        printf("e) Zaconchit\n");

        c = getchar();
        while (getchar() != '\n');

        switch (c)
        {
        case 'a':
            predel = ODIN;
            break;

         case 'b':
            predel = GLAV_CHAD;
            break;

         case 'c':
            predel = BRAK_SOVHOZ;
            break;

         case 'd':
            predel = BRAK_RAZHOZ;
            break;
        
         case 'e':
            return 0;
    
        default:
            printf("Net takogo varianta otveta!!!\n");
            continue;
        }
        
        printf("teper vvetie summu kotoriu vi zarabotali: ");
        while (scanf("%lf", &summa) != 1)
        {
           while(getchar() != '\n');
           printf("Vvedite eshe raz oshibka!!");
        }
        
        if(summa <= predel)
        nalog = summa * NALOG_DO;
        else
        nalog = (summa - predel) * NALOG_PO + predel * NALOG_DO;
        chistaya = summa - nalog;

        printf("Vi zarabotali %.2lf$\nnalog sostovlyaet %.2lf$\nposele uplati nalogov vasha pribil sostovlyaet: %.2lf$\n\n", summa, nalog, chistaya);
        while(getchar() != '\n');
    }
    
    return 0;
}