#include <stdio.h>

int main(void)
{
    double Chaki_Laki =  1000000;
    int vremya_godah =  1;

    while (1)
    {
        Chaki_Laki *= 1.08;
        Chaki_Laki -= 100000;
    
        if(Chaki_Laki <= 0){
            printf("Chaki Laki potrebavolos %d years chtob potratit vse dengi\n", vremya_godah);
            break;
        }
        vremya_godah++;
    }

    return 0;
    
}