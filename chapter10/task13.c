#include <stdio.h>
void dobavlenie_znach(int num1, int num2, double (*array)[num2]);
void proverka(int num1, int num2, double (*array)[num2]);
double srednee_otdelno(int num1, double  * array);
double srednee_vseh(int num1, int num2, double (*array)[num2]);
double naibolshee(int num1, int num2, double (*array)[num2]);

int main(void)
{
    double array[3][5];

    dobavlenie_znach(3, 5, array);
    proverka(3, 5, array);
    
    for(int index = 0; index < 3; index++)
        {
          printf("Srednee znachenie[%d] = %.2lf\n",index, srednee_otdelno(5, array[index]));
        }

    printf("Srednee znachenie dlyavseh znacheniy: %.2lf\n", srednee_vseh(3, 5, array));
    printf("Naiboshlee znachenie v massive array: %.2lf\n", naibolshee(3, 5, array));




    
}

void dobavlenie_znach(int num1, int num2, double (*array)[num2])
{
    double znachenie;

    for(int index = 0; index < num1; index++)
    {
        printf("Vvedite znachenie dlya massiva: ");
        for(int i = 0; i < num2; i++)
        {
            while(scanf("%lf", &znachenie) != 1)
            {
                printf("Ne correctniy vvod!!!\n");
                printf("poprobuite snova.\n");
                while(getchar() != '\n');
            }
            *(*(array + index) + i) = znachenie;
        }
    }
}

void proverka(int num1, int num2, double (*array)[num2])
{
        for(int index = 0; index < num1; index++)
    {
        printf("Znachenie masiva:[%d] ", index);
        for(int i = 0; i < num2; i++) 
        {
           
            printf("%.2lf ", *(*(array + index) + i));
        }
        putchar('\n');
    }
}

double srednee_otdelno(int num1, double  * array)
{
    double sum = 0;
    for(int i = 0; i < num1; i++)
        sum += array[i];

    return sum / num1;
}

double srednee_vseh(int num1, int num2, double (*array)[num2])
{
    int podchet = 0;
    double znachenie = 0;

    for(int index = 0; index < num1; index++)
    {
        for(int i = 0; i < num2; i++)
        {
           
            podchet++;
            znachenie +=  *(*(array + index) + i);
        }
    }

    return znachenie / podchet;
}



// double naibolshee(int num1, int num2, double (*array)[num2])
// {
   
//     double naibolshee = **array;

//     for(int i = 0; i < num1; i++)
//         {
//             for(int index = 0; index < num2; index++)
//             {
//                 if(*((*(array + i)) + index) > naibolshee)
//                 {
//                 naibolshee = *((*(array + i)) + index);
//                 }
//             }
//         }
//         return naibolshee;
// }

double naibolshee(int num1, int num2, double (*array)[num2])
{
    double * ptr = &array[0][0];
    double *end = ptr + num1 * num2;
    double naibolshee = *ptr;

    for(; ptr < end; ptr++)
        {
            if(*ptr > naibolshee)
            {
                naibolshee = *ptr;
            }
        }
        return naibolshee;
}
