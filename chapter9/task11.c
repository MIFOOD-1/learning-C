#include <stdio.h>
void Fibonacci(int n);
int main(void)
{
int num; 

printf("Vvedite skolko chosel Fibonacci vi hotite uvidet: ");
scanf("%d", &num);

Fibonacci(num);

return 0;
}
void Fibonacci(int n)
{
    long fi = 1;
    long fi1 = 0;
    for(int i = 1; i <= n;)
    {
        printf("%ld ", fi);
        i++;
        if(i > n) break;

        fi1 += fi;

        printf("%ld ", fi1);
        i++;
        if(i > n) break;
        
        fi += fi1;
    }
}