#include <stdio.h>
#include <stdlib.h>
int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
    int * pa;
    int size;
    int value;

    printf("vvedite kolichestvo elementov: ");

    while(scanf("%d", &size) == 1 && size > 0)
    {
        printf("Vvedite znachenie dlya inicializacii: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if(pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Vvedite kolichestvo elementov (<1 dlya zaversheniya): ");
    }
    printf("Programma zavershena.\n");

    return 0;
}

int * make_array(int elem, int val)
{
    int *arr = malloc(elem * sizeof(int));

    if (arr == NULL)
        return NULL;
    for(int i = 0; i < elem; i++)
    arr[i] = val;

    return arr;
}

void show_array(const int ar[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);

        if((i + 1) % 8 == 0)
            putchar("\n");
    }
    if(n % 8 != 0)
        putchar('\n');
}