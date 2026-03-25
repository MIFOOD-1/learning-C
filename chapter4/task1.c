#include <stdio.h>

int main(void)
{
    char name[40];
    char last_name[40];

    printf("Vvedite imya i familiyu: ");
    scanf("%s %s",name, last_name);
    printf("Vasha FAmiliya i Imya: %s %s", last_name, name);

    return 0;
}