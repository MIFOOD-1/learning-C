#include <stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
    char ch;
    int i, j;
    printf("Vvedite simvol: ");
    scanf("%c",  &ch);
    while(getchar() != '\n');

    printf("Vvedite nomer nachanlnogo i konechnogo stolbca: ");
    scanf("%d %d", &i, &j);

    chline(ch, i, j);

}
void chline(char ch, int i, int j)
{
    int index;
    for(index = 1; index < i; index++)
        putchar(' ');
    for(index = i; index <= j; index++)
        printf("%c", ch);
}