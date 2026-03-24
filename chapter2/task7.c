#include <stdio.h>
void smile();
int main(void)
{
    int index = 3;
    while (index){
    for(int i = index; i > 0; i--)
    {
        smile();
    }
    printf("\n");
    --index;
    }
    return 0;

}

void smile()
{
    printf("Ulibaysya! ");
}