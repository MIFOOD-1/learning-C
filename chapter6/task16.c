#include <stdio.h>

int main(void)
{
    double Dafna = 100;
    double Deydra = 100;
    int vremya_godah =  1;

    while (1)
    {
        Dafna += 100 * 0.1;
        Deydra *= 1.05;
        if(Deydra > Dafna){
            printf("Deydre potrebavolos %d let chtob previsit chet Dafni\n", vremya_godah);
            printf("Vot summa Deydra: %.2lf$\n",Deydra);
            printf("Vot summa Dafna: %.2lf$", Dafna);
            break;
        }
        vremya_godah++;
    }

    return 0;
    
}