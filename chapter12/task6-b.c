#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void)
{
    int nums[SIZE];
    int temp;
    int num = 0;
    
    srand((unsigned int) time(0));

    for(int i = 0; i < SIZE; i++)
        nums[i] = rand() % 10 + 1;

    for(int i = 0; i < SIZE - 1; i++)
    {
        for(int index = i + 1; index < SIZE; index++)
        {
            if(nums[i] < nums[index])
            {
                temp = nums[i];
                nums[i] = nums[index];
                nums[index] = temp;
            }
        }
    }

    for(int i = 0; i < SIZE - 1; i++)
    {
        if(nums[i] == nums[i+1])
        num++;


        else
        {
        printf("chislo %d bilo sgenerirovano: %d raz\n", nums[i], num);
        num = 1;
        }
    }

    return 0;
}