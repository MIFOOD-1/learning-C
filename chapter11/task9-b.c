#include <stdio.h>
#include <string.h>

void reverse(char * str);

int main(void)
{
    char str[10];
    
    printf("Napishite slovo ili nazmite bukvu 'q' chtob viyti\n");
    while(fgets(str, 10, stdin))
    {
        if(str[0] == 'q')
            break;
        reverse(str);
        printf("%s\n", str);
        printf("Napishite slovo ili nazmite bukvu 'q' chtob viyti\n");

    }

    return 0;
}

void reverse(char * str)
{
    int num = strlen(str);

    char array[num + 1];
    for(; *str != '\0'; str++);
    for(int i = 0; i < num; i++)
    {
        array[i] = *(str - i - 1);
    }

    array[num] = '\0';
    strcpy(str - num, array);
}
