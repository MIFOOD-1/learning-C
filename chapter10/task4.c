#include <stdio.h>
int bolshee(double * ron, int five);
int main(void)
{
    double masiv[5]= {-1.1,2.2,-10.1,4.4,-5.5};
    int index = bolshee(masiv, 5);
    printf("samoe bolshoe chislo v masiv nahodista v etom indexe: = %d", index);

    return 0;
}

int bolshee(double *ron, int five)
{
    double bol = *ron;
    int index = 0;
    for(int i = 0; i < five; i++)
    {
        if(bol < *(ron + i))
        {
        bol = *(ron + i);
        index = i;
        }
    }

    return index;
}