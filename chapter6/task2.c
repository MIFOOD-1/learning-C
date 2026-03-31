#include <stdio.h>

int main(void)
{
 const int MAX = 5;
 char sim[MAX];
 
 for(int index = 0; index < MAX; index++){
    for(int i = 0; i <= index; i++)
    {
        sim[index] = '$';
        printf("%c", sim[i]);
    }
    printf("\n");
}

return 0;
}