#include <stdio.h>
void get_s(char * array, int n);
void proverka(char * array, int n);
int main(void)
{
    char array[20];
    puts("Vvedite simvoli:");
    get_s(array, 20);
    puts("proverka");
    proverka(array, 20);

}
void get_s(char * array, int n)
{
    for(int i = 0; i < n; i++)
    {
        
        int ch = getchar();
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            array[i] = '\0';
            break;
        }

        if(ch == EOF)
        {
            array[i] = '\0';
            break;
        }
            
        array[i] = ch;
    }
    
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
