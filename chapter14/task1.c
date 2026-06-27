// 1. Переделайте задание из вопроса 5 таким образом, чтобы артуменг был представ
// лен названием месяца, а не его номером. (Не забывайте о функции strcmp ().) 
// Протестируйте готовую функцию в простой программе.

#include <stdio.h>
#include <string.h>

struct month
{
    char name[20];
    char abbr[4];
    int days;
    int number;
};

int fun(const struct month fp[], char name[]);

int main(void)
{
    struct month play[12] =
    {
        {"January",   "Jan", 31, 1},
        {"February",  "Feb", 28, 2},
        {"March",     "Mar", 31, 3},
        {"April",     "Apr", 30, 4},
        {"May",       "May", 31, 5},
        {"June",      "Jun", 30, 6},
        {"July",      "Jul", 31, 7},
        {"August",    "Aug", 31, 8},
        {"September", "Sep", 30, 9},
        {"October",   "Oct", 31, 10},
        {"November",  "Nov", 30, 11},
        {"December",  "Dec", 31, 12}
    };

    printf("Obshee kolichestvo dney do konca %s: %d\n",
           play[3].name,
           fun(play, "April"));

    return 0;
}

int fun(const struct month fp[], char name[])
{
    int sum = 0;

   for(int i = 0; i < 12; i++)
   {
    sum += fp[i].days;

    if(strcmp(fp[i].name, name) == 0)
        return sum;
   }

    return 0;
}