#include <stdio.h>
char * strncpy(char * s1, char * s2, int n);
int main(void)
{
    char s1[10] = "hello";
    char s2[5] = "hey";
    char * str = strncpy(s1, s2, 5);
    printf("%s\n",s1);
    printf("%s\n",str);


}
char * strncpy(char * s1, char * s2, int n)
{
  int i;

    for(i = 0; i < n && s2[i] != '\0'; i++)
        s1[i] = s2[i];
    
    while (i < n)
    {
        s1[i] = '\0';
        i++;
    }
    
    return s1;
}