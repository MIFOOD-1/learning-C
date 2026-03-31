#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    
    printf("vvedite slovo: ");
    scanf("%s", name);

    int num = strlen(name);

    for(int i = num - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    return 0;

}