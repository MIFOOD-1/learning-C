#include <stdio.h>
void jolly();
void deny();
int main(void)
{
jolly();
deny();

return 0;
}

void jolly()
{
    int i = 0;
    while (i++ < 3)
    {
       printf("On vesyliy molodec!\n");
    }
}

void deny()
{
    printf("Nikto ne mozet eto otricat!\n");
}