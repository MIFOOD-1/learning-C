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

        if(ch == EOF)
        {
            break;
        }
            
        array[i] = ch;
    }
    
}

void proverka(char * array, int n)
{
    for(int i = 0; i < n; i++)
    {
      printf("%c",array[i]);
    }
}

