#include <stdio.h>
char * adres(char * array1, char array2);
int main(void)
{
    char array1[10] = "privet";
    char array2[20] = "lol kek cheburek";
    char * temp;

    temp = adres(array1, array2[10]);

    if(temp == NULL)
        printf("Ne naideno");
    else   
    printf("%c nahoditsya po adresu array[%d]", *temp, temp - array1);

}
char * adres(char * array1, char array2)
{
    
    while(*array1 !=  array2)
    {
        if(*array1 == '\0')
            return NULL;
        array1++;
    }
    return array1;
}