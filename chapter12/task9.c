#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(void)
{
    int count;

    printf("Skolko slov vi hotite vvesti? ");
    scanf("%d", &count);

    getchar();

    char **words = malloc(count * sizeof(char*));

    if(words == NULL)
        return 1;

    printf("teper vvedite %d slov:\n", count);

    char temp[MAX];

    for(int i = 0; i < count; i++)
    {
        scanf("%99s", temp);

        words[i] = malloc(strlen(temp) + 1);
        if(words[i] == NULL)
            return 1;

        strcpy(words[i], temp);
    }
    printf("Vvedenie slova:\n");
    for(int i = 0; i < count; i++)
        printf("%s\n", words[i]);

    for(int i = 0; i < count; i++)
        free(words[i]);

    free(words);

    return 0;
}