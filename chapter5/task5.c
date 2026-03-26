// addemup.c
// #include <stdio.h>

// int main(void)
// {
//     int count, sum;

//     count  = 0;
//     sum = 0;
//     while (count++ <20)
//      sum = sum + count;

//     printf("sum = %d\n", sum);

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int count, sum, max;

    count  = 0;
    sum = 0;

    printf("Vvedite skolko dney vam budut nachislyata dengi: ");

    scanf("%d", &max);

    while (count++ <max)
     sum = sum + count;

    printf("sum = $%d\n", sum);

    return 0;
}