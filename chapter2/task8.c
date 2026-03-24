#include <stdio.h>
void one_three();
void two();
int main(void)
{
    puts("Nachinaem:");
    one_three();
    puts("poryadok!");

    return 0;
}

void one_three()
{
    puts("odin");
    two();
    puts("tri");
}

void two()
{
    puts("dva");
}
