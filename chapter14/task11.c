
#include <stdio.h>
#include <math.h>

void transform(double source[], double target[], int n,
               double (*func)(double));

double square(double x);
double cube(double x);

void print_array(double arr[], int n);

int main(void)
{
    double source[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double target[5];

    printf("Original:\n");
    print_array(source, 5);

    printf("\nSquare:\n");
    transform(source, target, 5, square);
    print_array(target, 5);

    printf("\nCube:\n");
    transform(source, target, 5, cube);
    print_array(target, 5);

    printf("\nSin:\n");
    transform(source, target, 5, sin);
    print_array(target, 5);

    printf("\nSqrt:\n");
    transform(source, target, 5, sqrt);
    print_array(target, 5);

    return 0;
}

void transform(double source[], double target[], int n,
               double (*func)(double))
{
    for (int i = 0; i < n; i++)
        target[i] = func(source[i]);
}

double square(double x)
{
    return x * x;
}

double cube(double x)
{
    return x * x * x;
}

void print_array(double arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%.3f ", arr[i]);
    printf("\n");
}
