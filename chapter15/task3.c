#include <stdio.h>
#include <limits.h>
void bit(int num, char * lol);
int number(char * lol);

int main(void)
{
    int num;
    scanf("%d", &num);

    char masiv[CHAR_BIT * sizeof(int) + 1];


    bit(num, masiv);

    printf("%s\n", masiv);

    int vkl = number(masiv);
    printf("%d stolkoi vklucchinh bitov v chisle %d", vkl, num);

    return 0;
}


void bit(int num, char * lol)
{
    int size = CHAR_BIT * sizeof(int);
    for(int i = size - 1; i >= 0; i--, num >>= 1)
    {
        lol[i] = (num & 1) + '0';
    }
    lol[size] = '\0';
}

int number(char * lol)
{
    int size = CHAR_BIT * sizeof(int);
    int vkl = 0;
    for(int i = 0; i < size; i++)
    {
        if(lol[i] == '1')
            vkl++;
    }
return vkl;
}


// int count_bits(int num)
// {
//     int count = 0;

//     while (num)
//     {
//         if (num & 1)
//             count++;

//         num >>= 1;
//     }

//     return count;
// }