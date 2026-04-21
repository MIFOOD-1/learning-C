#include <stdio.h>
#include <string.h>
char * string_in(char * string1, char * string2);
int main(void)
{
    char string1[20] = "lol kek kok kik";
    char string2[5] = "kok";
    printf("%s", string_in(string1, string2));

}
char * string_in(char * string1, char * string2)
{
    int num = strlen(string2);
    char * temp2 = string2 + num - 1;
    char * temp3 = string2;

    char * temp = string1;
    while (*temp != '\0')
    {
        char * start = temp;

        while(*temp == *string2)
        {
            if(string2 == temp2)
                return start;

            string2++;
            temp++;
        }
        temp = start + 1;
        string2 = temp3;
    }
    return NULL;
}