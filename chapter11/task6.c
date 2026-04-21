#include <stdio.h>
int is_within(char c, char * string);
int main(void)
{
    char string[] = "menya zovut MIFOOD";
    
    printf("%d",is_within('c', string));

    return 0;
}
int is_within(char c, char * string)
{

   while(*string != c)
   {
    if(*string == '\0')
        return 0;
    string++;
   }
   return 1;
}