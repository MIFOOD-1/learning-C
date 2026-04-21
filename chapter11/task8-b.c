#include <stdio.h>
char * string_in(char * string1, char * string2);
int main(void)
{
    char string1[20] = "lol kek kik kok";
    char string2[5] = "kok";
    printf("%s", string_in(string1, string2));

}
char * string_in(char * string1, char * string2)
{
    while(*string1 != '\0')
    {
        char *p1 = string1;
        char *p2 = string2;

        while(*p1 == *p2 && *p2 != '\0')
        {
            p1++;
            p2++;
        }

        if(*p2 == '\0')
            return string1;

        string1++;
    }
    return NULL;
}