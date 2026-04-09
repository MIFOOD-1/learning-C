#include <stdio.h>
void kucha(double *, double *, double *);
int main(void)
{
    double num1, num2, num3;
    printf("Vvedite 3 chisla: ");

    scanf("%lf %lf %lf", &num1, &num2, &num3);

    kucha(&num1, &num2, &num3);

    printf("menchee %.2lf  srednee %.2lf bolshee %.2lf", num1, num2, num3);

    return 0;

}
void kucha(double * num1, double * num2, double * num3)
{
    double temp = *num1;
    
    if(*num1 > *num2 && temp > *num3)
        {
            if(*num2 > *num3)
            {
            *num1 = *num3;
            *num3 = temp;
            }
            else
            {
                *num1 = *num2;
                *num2 = *num3;
                *num3 = temp;
            }
        }
    else if(*num1 > *num2 || *num1 > *num3)
        {
            if(*num2 > *num3)
            {
                *num1 = *num3;
                *num3 = *num2;
                *num2 = temp;
            }
            else
            {
                *num1 = *num2;
                *num2 = temp;
            }
        }
    else
        {
            if(*num2 > *num3)
            {
                temp = *num2;
                *num2 = *num3;
                *num3 = temp;
            }
        }
}

