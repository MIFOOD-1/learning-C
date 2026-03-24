#include <stdio.h>
void br();
void ic();
int main(void)
{
br();
printf(", ");
ic();
printf("\n");
ic();
printf(",\n");
br();

return 0;
}

void br()
{
printf("Braziliya, Rossiya");
}

void ic()
{
printf("Indiya, Kitay");
}