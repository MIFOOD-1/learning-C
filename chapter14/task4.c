// 4. Напишите программу, которая создает шаблон структуры с двумя членами в со
// ответствии со следующими критериями.
// а. Первым членом является номер карточки социального страхования. Второй 
// член — это структура, состоящая из трех членов. Ее первый член содержит 
// имя, второй член — отчество и третий член — фамилию. Создайте и инициали
// зируйте массив из пяти таких структур. Программа должна выводить данные 
// в следующем формате:
// Dribble, Flossie М. — 302039823
// Выводиться должна только начальная буква отчества, за которой следует точка. 
// Разумеется, если этот член пуст, не должен выводиться ни инициал, ни точка. 
// Напишите функцию, которая выполняет такой вывод, передайте рассматрива
// емую структуру этой функции.
// б. Модифицируйте часть а) так, чтобы вместо адреса передавалась сама струк
// тура.

#include <stdio.h>

struct iof
{
    char name[20];
    char fatherName[20];
    char personName[20];
};

struct polic
{
    struct iof fullname;
    long polic;
};

void print_polic(struct polic p[], int n);
int main(void)
{
    struct polic kod[2] =
    {
        {
            {"Udji", "Sukunovich", "Itadori"},
            302039823
        },

        {
            {"Pugji", "Dorisovish", "Kenpahi"},
            302039823
        }
    };

    if (kod[0].fullname.fatherName[0] != '\0')
    {
        printf("%s, %s %c. -- %ld\n",
               kod[0].fullname.personName,
               kod[0].fullname.name,
               kod[0].fullname.fatherName[0],
               kod[0].polic);
    }
    else
    {
        printf("%s, %s -- %ld\n",
               kod[0].fullname.personName,
               kod[0].fullname.name,
               kod[0].polic);
    }

    print_polic(kod, 2);

    return 0;
}

void print_polic(struct polic p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s, %s", p[i].fullname.personName, p[i].fullname.name);
        if (p[i].fullname.fatherName[0] != '\0')
            printf(" %c", p[i].fullname.fatherName[0]);
        printf(" - %ld\n", p[i].polic);
    }
    
}
