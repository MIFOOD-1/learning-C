#include <stdio.h>
#define FOOT 30.48
#define DUM 2.54
int main(void)
{
    double sm;
    printf("Vvedite visotu v santimetrah: ");
    scanf("%lf", &sm);

    while (sm > 0)
    {
        int foot;
        double dum;
        if(sm > FOOT)
        {
            foot = sm / FOOT;
            dum = (sm - foot * FOOT) / DUM;
            printf("%.1lf sm = %d futov, %.1lf dumov\n", sm, foot, dum);
        }
       else
        {
            printf("%.1lf sm = %d futov, %.1lf dumov\n", sm, 0, sm / DUM);
        }

        printf("Vvedite visotu v santimetrah (<= 0 dlya vihoda iz programmi): ");
        scanf("%lf", &sm);
    }

    printf("Rabota zaveshena");

    return 0;
}

//Я идиот, можно было без условий просто   
 
//int foot = sm / FOOT;                                           
//double dum = (sm - foot * FOOT) / DUM; //так как из за того что foot тип int он срубает все после точки с запятой