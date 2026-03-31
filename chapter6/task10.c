#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("vvedite nizniy i verhniy celochislennie predeli: ");
    scanf("%d %d", &num1, &num2);

    while (num1 < num2)
    {
        int sum = 0;
        for(int index = num1; index <= num2; index++)
        {
            sum+= index * index;
        } 
        printf("Summa kvadratov celih chisel ot %d do %d ravna: %d\n",
             num1 * num1, num2 * num2, sum);
        printf("vvedite sledushuu kombinaciu chisel: ");
        scanf("%d %d", &num1, &num2);
    }

    printf("Rabota zavershena");

    return 0;
    
}