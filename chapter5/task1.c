#include <stdio.h>

int main(void)
{
    const int MIN_IN_HOUR = 60;
    int min;
    
    printf("Vvedite minuti: ");
    while (scanf("%d", &min))
    {
        if(min == 0)
        break;

        printf("%d minut eto %d chasov i %d minut\n", 
        min, min / MIN_IN_HOUR, min % MIN_IN_HOUR);

        printf("Vvedite novoe kolichestvo minut ili 0 chtob vity: ");
    }
    

    return 0;
}