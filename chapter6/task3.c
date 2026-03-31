#include <stdio.h>

int main(void)
{
    const int MAX = 6;

    for(int index = 1; index <= MAX; index++)
    {
        for (int i = 0; i < index; i++)
        {
            printf("%c", 'F' - i);
        }
        printf("\n");
    }

    return 0;

}