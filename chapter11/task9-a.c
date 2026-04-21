#include <stdio.h>
#include <string.h>

void string_reverse(char * string);

int main(void)
{
    char str[10];
    
    printf("Napishite slovo ili nazmite bukvu 'q' chtob viyti\n");
    while(fgets(str, 10, stdin))
    {
        if(str[0] == 'q')
            break;
        string_reverse(str);
        printf("%s\n", str);
        printf("Napishite slovo ili nazmite bukvu 'q' chtob viyti\n");

    }

    return 0;
}

void string_reverse(char * string)
{
    int num = strlen(string);
    char temp;

    for(int i = 0; i < num / 2; i++)
    {
        temp = string[i];
        string[i] = string[num - 1 - i];
        string[num - 1 - i] = temp;
    }
}