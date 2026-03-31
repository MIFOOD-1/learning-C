#include <stdio.h>
#include <string.h>

#define MAX 255
int main(void)
{
    char name[MAX];
    printf("Vvedite znachenie dlya massiva: ");

    for(int i = 0; i < MAX; i++)
    {
        scanf("%c", &name[i]);
        if(name[i] == '\n' || i == MAX - 1)
        {
            name[i] = '\0';
            break;
        }
    }
    
    int otkuda = strlen(name);

    for(int i = otkuda - 1 ; i >= 0; i--)
    printf("%c", name[i]);

    return 0;
}