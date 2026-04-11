#include <stdio.h>
int bolshee(int * ron, int five);
int main(void)
{
    int masiv[5]= {-1,2,-10,4,-5};
    int big = bolshee(masiv, 5);
    printf("samoe bolshoe chislo v masiv = %d", big);

    return 0;
}

int bolshee(int *ron, int five)
{
    int bol = *ron;
    for(int i = 0; i < five; i++)
    {
        if(bol < *(ron + i))
        bol = *(ron + i);
    }

    return bol;
}