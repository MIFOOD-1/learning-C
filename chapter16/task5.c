#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
void masiv(int mas[], int n, int m);

int main(void)
{
    int mas[10] = {1,2,3,4,5,6,7,8,9,10};
    masiv(mas, sizeof(mas) / sizeof(mas[0]), 10);

}
void masiv(int mas[], int n, int m)
{
    
    
    if(n <= 0 || mas == 0 || n < m)
    {
        printf("ERROR");
        return;
    }


    

    bool *pl = calloc(n, sizeof(bool));

    if(pl == NULL)
    {
    printf("AAAA");
    return;
    }
    for(int i = 0; i < n; i++)
        pl[i] = false;


    srand(time(NULL));


    while(m)
    {
    int lol = rand() % n;
    if(pl[lol] == false)
    {
    m--;
    pl[lol] = true;
    printf("%d\n", mas[lol]);
    }
    }

    free(pl);
}