#include <stdio.h>
void string(char c, int longe, int strok);
int main(void)
{
    char c;
    int longe, strok;

    printf("Vvedte simvol kotoriy nuzno budet otobrazit: ");

    c = getchar();
    while(getchar() != '\n');

    printf("Vvedite kolichestvo dlinu i kolichestvo strok: ");
    while(scanf("%d %d", &longe, &strok) != 2){
        while(getchar() != '\n');
        printf("NE POZVOLITELNIY VVOD POPROBUITE SNOVA!!!\n");
        }
    string(c, longe, strok);

    return 0;
}
void string(char c, int longe, int strok)
{
    for(int index = 0; index < strok; index++, putchar('\n'))
        for(int i = 0; i < longe; i++)
        putchar(c);
}
