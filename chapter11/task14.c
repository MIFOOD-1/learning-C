#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
 
    if(argc != 3)
    {
        printf("oshibka");
        return 0;
    }
    int stepen = atoi(argv[2]);
    double num = atof(argv[1]);

    double result = 1.0;
    int n = stepen;

    if(n < 0)
        n = -n;

    for(int i = 0; i < n; i++)
        result *= num;

    if(stepen < 0)
    result = 1.0 / result;

    printf("%lf v stepeni %d = %lf\n", num, stepen, result);


    return 0;
}