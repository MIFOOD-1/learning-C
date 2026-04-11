#include <stdio.h>
double  bolshee_and_menshee(double * ron, int five);
int main(void)
{
    double masiv[5]= {-1.1,2.2,-10.1,4.4,-5.5};
    double raznica = bolshee_and_menshee(masiv, 5);
    printf("Raznica mejdu naibolshem i menshim chislom v massive: = %.2lf", raznica);

    return 0;
}

double bolshee_and_menshee(double *ron, int five)
{
    double bol = *ron;
    double men = *ron;

    for(int i = 0; i < five; i++)
    {
        if(bol < *(ron + i))
            bol = *(ron + i);

        if(men > *(ron + i))
            men = *(ron + i);

    }

    return bol - men;
}