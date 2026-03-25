#include <stdio.h>

int main(void)
{
    float speed; 
    float size;
    float time;

    printf("Vvedite skorost zagruski Mbit/s: ");
    scanf("%f", &speed);

    printf("Vvedite razmer fayla Mb: ");
    scanf("%f", &size);

    time = (size * 8) / speed;
    printf("Pri skorosti zagruski %.2f megabit v secundu \
fayl razmerom %.2f megabayt zagruzaetsya za %.2f sekund",
    speed, size, time);

    return 0;
}