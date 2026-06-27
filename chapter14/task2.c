#include <stdio.h>
#include <string.h>

struct base {
int days;
char month[20];
int yers;
};

struct month 
{
    char months[20];
    int days;
};


int main(void)
{
    struct base data;
    printf("Vvedite den mesyac and god:\n");
    scanf("%d %s %d", &data.days, data.month, &data.yers);

    int sum;
    sum = 0;

    if(data.yers % 4 == 0 && data.yers % 100 != 0 || data.yers % 400 == 0)
       sum = 1;

    struct month moh[12] =
    {
    {"January",   31},
    {"February",  28},
    {"March",     31},
    {"April",     30},
    {"May",       31},
    {"June",      30},
    {"July",      31},
    {"August",    31},
    {"September", 30},
    {"October",   31},
    {"November",  30},
    {"December",  31}
    };

    int i = 0;
    while(1)
    {
        if(strcmp(moh[i].months, data.month) == 0)
            break;
        sum += moh[i].days;
        i++;
    }

    sum += data.days;

    printf("\nS nachla goda %d do %d %s vsego stok dney: %d", data.yers, data.days, data.month, sum);

    return 0;
}