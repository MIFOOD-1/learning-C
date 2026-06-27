// 5. Напишите программу, которая соответствуем следующим требованиям.
// 624 Глава 14
// а. Программа внешне определяет шаблон срук'^ры name с двумя членами: стро
// кой для хранения имени и строкой для хранения фамилии.
// б. Программа внешне определяет шаблон структуры student с тремя членами: 
// сфуктурой name, массивом grade для хранения трех оценок в виде чисел с плава
// ющей запятой и переменной для хранения среднего значения этих трех оценок.
// в. Программа содержит функцию main (), где объявляется массив из CSIZE 
// (с CSIZE = 4) структур student, в которых инициализируются члены name 
// именами по вашему выбору. Для выполнения задач, описанных в частях г), д), 
// е) и ж), используйте функции.
// г. Программа интерактивно вводит оценки для каждого студента, запрашивая 
// у пользователя ввод имени студента и его оценок. Поместите оценки в мас
// сив grade соответствующей структуры. Требуемый цикл можно реализовать в 
// main () или в специальной функции по вашему усмотрению.
// д. Программа вычисляет среднюю оценку для каждой структуры и присваивает 
// ее соответствующему члену.
// е. Программа выводит информацию из куклой структуры.
// ж. Программа выводит среднее значение по курсу для каждого числового члена 
// структуры.

#include <stdio.h>
#include <string.h>

#define CSIZE 4

struct name{
    char name[20];
    char personName[20];
};

struct student{
    struct name allname;
    double grade[3];
    double srednee_grade;
};

void ocenka(struct student lol[], char name[]);
void srednee(struct student lol[]);
double srednee_vseh(struct student lol[]);

int main(void)
{
    char name[20];
    struct student students[CSIZE] = 
    {
        {{"Rostislav"}},
        {{"Longsliv"}},
        {{"Rahivhvn"}},
        {{"Lapuhiv"}},

    };

   

    ocenka(students, name);
    ocenka(students, name);
    ocenka(students, name);
    ocenka(students, name);

    srednee(students);

    for(int index = 0; index < CSIZE; index++)
    {
        if(students[index].srednee_grade != 0)
        printf("%s   %s  ocenka1 %lf ocenka2 %lf ocenka3 %lf  srednee znachenie %lf\n",
            students[index].allname.name, students[index].allname.personName, students[index].grade[0],
        students[index].grade[1], students[index].grade[2], students[index].srednee_grade);
        else
            continue;
    }
    
    printf("srednee vseh kursov %lf\n",srednee_vseh(students));

    return 0;
}

void ocenka(struct student lol[], char name[])
{
    int i = 0;
    while(1)
    {
        printf("Vvedite imya uchenika:\n");
        scanf("%s", name);
        if(strcmp(name, lol[i].allname.name) == 0)
        {
            for(int index = 0; index < 3; index++)
            {
                printf("VVedite ocenku po %d predmetu: ", index+1);
                scanf("%lf", &lol[i].grade[index]);
            }
            break;
        }
        else if(++i >= CSIZE)
        {
            printf("Net takogo imeni");
            break;
        }
    }

}

void srednee(struct student lol[])
{
    for(int i = 0; i < CSIZE; i++)
    {
        double sum = 0;

        for(int index = 0; index < 3; index++)
            sum += lol[i].grade[index];

        lol[i].srednee_grade = sum / 3.0;
    }
}

double srednee_vseh(struct student lol[])
{
    double sum = 0;
    for(int index = 0; index < CSIZE; index++)
        sum += lol[index].srednee_grade;

    return sum / CSIZE;
}

