#include <stdio.h>


#define MAX_SIZE 10
int func(int * mas, int size, int num);
int main(void)
{
    int masiv[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int num = 12;

    printf("%d", func(masiv, MAX_SIZE, num));

    return 0;
}
int func(int * mas, int size, int num)
{
   
    int biggets = size - 1;
    int smalles = 0;
    int centr;

    while (smalles <= biggets)
    {
        centr = smalles + (biggets - smalles) / 2;

        if(mas[centr] == num)
            return 1;

        mas[centr] < num ? (smalles = centr + 1) : (biggets = centr - 1);
    }

    return 0;
}