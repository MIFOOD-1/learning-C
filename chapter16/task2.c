#include <stdio.h>
#define NUM(X, Y) ((2.0 * ((X) * (Y))) / ((X) + (Y)))

int main(void)
{
    printf("%.1lf %.1lf garmonicheskoe srednee etoh chisel: %lf", (double)10, (double)5,\
    NUM((double)10, (double)5));

    return 0;
}