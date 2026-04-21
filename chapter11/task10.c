#include <stdio.h>
#include <ctype.h>
#include <string.h>

void deleted_probel(char * string);

int main(void)
{
    char str[10];
    
    printf("Napishite slovo\n");
    while(fgets(str, 10, stdin))
    {
        if(isspace(str[0]))
            break;
        deleted_probel(str);
        printf("%s\n", str);
        printf("Vvedite pustuyu stroku ' ' dlya vihoda\n");
    }

    return 0;
}

void deleted_probel(char * string)
{
    int num = strlen(string) + 1;
    int sum_probel = 0;
    int index = 0;
    for(int i = 0; i < num; i++)
        if(isspace(string[i]))
            sum_probel++;
    char bezprobelov[num - sum_probel];
    for(int i = 0; i < num; i++)
    {
        if(!isspace(string[i]))
        {
            bezprobelov[index] = string[i];
            index++;
        }
    }

    strcpy(string, bezprobelov);
}