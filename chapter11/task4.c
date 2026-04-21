#include <stdio.h>
#include <ctype.h>

void array_string(char * array, int n);
void proverka(char * array, int n);

int main(void)
{
    char array[20];
    array_string(array, 20);
    proverka(array, 20);

}
void array_string(char * array, int n)
{
    int ch;
    
    while(isspace(ch = getchar()));

    for(int i = 0; i < n; i++, ch = getchar())
        {
            if(ch != EOF && !isspace(ch))
            array[i] = ch;
            else
            {
            array[i] = '\0';
            break;
            }
        }
    while((ch = getchar()) != '\n' && ch != EOF);
}

void proverka(char * array, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] == '\0')
        break;
      printf("%c",array[i]);
    }
}
