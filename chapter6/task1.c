#include <stdio.h>
#define MAX 26
int main(void)
{
    char num[MAX];

    for(int index = 0; index < MAX; index++)
    {
        num[index] = 'a' + index;
        printf("%c\n", num[index]);
    }
    
printf("gotovo");
return 0;

}