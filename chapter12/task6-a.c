#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void)
{
    int nums[SIZE];
    int temp;
    int num1, num2, num3, num4,  num5, num6, num7, num8, num9, num10;
    num1 = num2 = num3 = num4 = num5 = num6 = num7 = num8 = num9 = num10 = 0;

    
    srand((unsigned int) time(0));

    for(int i = 0; i < SIZE; i++)
    {
        nums[i] = rand() % 10 + 1;
        if(nums[i] == 1)
        num1++;
        else if(nums[i] == 2)
        num2++;
        else if(nums[i] == 3)
        num3++;
        else if(nums[i] == 4)
        num4++;
        else if(nums[i] == 5)
        num5++;
        else if(nums[i] == 6)
        num6++;
        else if(nums[i] == 7)
        num7++;
        else if(nums[i] == 8)
        num8++;
        else if(nums[i] == 9)
        num9++;
        else if(nums[i] == 10)
        num10++;
    }

    printf("chislo %d bilo sgenerirovano: %d raz\n", 1, num1);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 2, num2);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 3, num3);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 4, num4);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 5, num5);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 6, num6);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 7, num7);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 8, num8);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 9, num9);
    printf("chislo %d bilo sgenerirovano: %d raz\n", 10, num10);

    return 0;
}