#include <stdio.h> 
int block(void);

int main(void)
{
int kol;
 block();
 block();
 block();
 kol = block();
 printf("%d - stolko raz bila vizvana funkciya block()", kol);

return 0;
}
int block(void)
{
    static int chet = 0;
    printf("kek\n");
    chet++;
    return chet;
}