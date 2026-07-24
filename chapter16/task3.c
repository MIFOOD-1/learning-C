#include <stdio.h>
#include <math.h>

struct polar
{
    double r;
    double angle;
};

struct rect{
    double x;
    double y;
};

struct rect transform(struct polar p);

int main(void)
{
    struct polar p;
    struct rect r;

    printf("VVdite modul: ");
    scanf("%lf", &p.r);

    printf("Vvedite ugol(v gradusah): ");
    scanf("%lf", &p.angle);

    r = transform(p);

    printf("x = %.2lf\n", r.x);
    printf("y = %.2lf\n", r.y);

    return 0;
}

struct rect transform(struct polar p)
{
    struct rect temp;
    double rad = p.angle * 3.14159 / 180.0;

    temp.x = p.r * cos(rad);
    temp.y = p.r * sin(rad);

    return temp;
}
