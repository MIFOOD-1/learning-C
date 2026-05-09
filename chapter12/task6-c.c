#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main(void)
{
    int count[10];
    int x;

    for (int seed = 1; seed <= 10; seed++)
    {
        for (int i = 0; i < 10; i++)
            count[i] = 0;

        srand(seed);

        for (int i = 0; i < SIZE; i++)
        {
            x = rand() % 10 + 1;
            count[x - 1]++;  
        }

        printf("Seed = %d\n", seed);

        for (int i = 0; i < 10; i++)
        {
            printf("%2d: %d\n", i + 1, count[i]);
        }

        printf("\n");
    }

    return 0;
}