#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    printf("Vvedite vashe imya: ");
    scanf("%s", name);
    printf("\"%s\"\n",name); //a
    printf("\"%20s\"\n", name); //б
    printf("\"%-20s\"\n", name); //в
    printf("\"%*s\"",(strlen(name)) + 3, name); //г

    return 0;
}