#include <stdio.h>
#define WEEK_DAY 7

int main(void)
{
    int day;

    printf("Vvedite kolichestvo dney: ");
    scanf("%d",&day);

    while(day > 0)
    {
        printf("%d dney sostavlyaut %d nedeli i %d dnya\n", day, day / WEEK_DAY, day % WEEK_DAY);
        printf("Vvedite kolichestvo dney ili chtob vity nazmite <= 0\n");
        scanf("%d",&day);
    }

return 0;

}