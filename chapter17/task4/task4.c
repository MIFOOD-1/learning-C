//Листинг 17.9 Прграммма mall.c
//mall.c -- использует интерфейс Queue
//компилировать вместе с queue.c
#include <stdio.h>
#include <stdlib.h>     //для rand() и srand()
#include <time.h>       //для time()
#include "queue_task4.h"      //измените определение типа Item
#define MIN_PER_HR 60.0

bool newcustomer(double x);     //имеется новый клиент?
Item customertime(long when);   //установка параметров клиента

int main(void)
{
    Queue line1;
    Queue line2;
    Item temp;  //данные о новом клиенте
    int hours;  //количество часов моделирвания
    int perhour; //среднее количество прибывающих клиентов в час
    long cycle, cyclelimit;// счетчик и граничное значение цикла
    long turnaways = 0; // количество отказов из-за переполненной очереди
    long customers = 0; // количество клиентов присоединившихся к очереди
    long served = 0;  // количество клиентов, обслуженных за время моделирования
    long sum_line = 0; // накопительное значение длины очереди
    int wait_time1 = 0; // время до освобождения Зигмунда
    int wait_time2 = 0; // время до освобождения Зигмунда
    double min_per_cust; // среднее время между прибытиями клиентов
    long line_wait = 0; // накопительное значение времени в очереди

    InitializeQueue(&line1);
    InitializeQueue(&line2);

    srand((unsigned int) time(0));      //случайная инициализация rand()
    puts("Uchebniy primer: koncultacoinniy kiosk Zigmunda Landera");
    puts("VVedite dlitelnost modelirovaniya v chasah:");
    scanf("%d", &hours);
    cyclelimit =  MIN_PER_HR * hours;
    puts("Vvedite srednee kolichestvo klientov, pribivaushih za chas:");
    scanf("%d", &perhour);
    min_per_cust = MIN_PER_HR / perhour;

    for(cycle = 0;cycle < cyclelimit; cycle++)
    {
        if(newcustomer(min_per_cust))
        {
            if(QueueIsFull(&line1) && QueueIsFull(&line2))
                turnaways++;
            else
            {
                customers++;

                temp = customertime(cycle);
                if(QueueIsFull(&line1))
                    EnQueue(temp, &line2);
                else if(QueueIsFull(&line2))
                    EnQueue(temp, &line1);
                else if(QueueItemCount(&line1) <= QueueItemCount(&line2))
                    EnQueue(temp, &line1);
                else
                    EnQueue(temp, &line2);
            }
        }
        if(wait_time1 <= 0 && !QueueIsEmpty(&line1))
        {
            DeQueue(&temp, &line1);
            wait_time1 = temp.processtime;
            line_wait += cycle - temp.arrive;
            served++;
        }

        if(wait_time2 <= 0 && !QueueIsEmpty(&line2))
        {
            DeQueue(&temp, &line2);
            wait_time2 = temp.processtime;
            line_wait += cycle - temp.arrive;
            served++;
        }
        if(wait_time1 > 0)
            wait_time1--;
        if(wait_time2 > 0)
            wait_time2--;
        sum_line += QueueItemCount(&line1) + QueueItemCount(&line2);
    }
    if(customers > 0)
    {
        
        printf("    Prinyatih klientov: %ld\n", customers); 
        printf(" obsluzanoh klientov: %ld\n", served); 
        printf("            otkazov: %ld\n", turnaways);
        printf(" srednya dlina ocheredi: %.2f\n",
            (double)sum_line / cyclelimit); 
        printf("srednee vremya ozidaniya: %.2f min\n", 
            (double)line_wait / served);
    }
    else
        puts("Klienti otsustvuut!");
    EmptyTheQueue(&line1);
    EmptyTheQueue(&line2);

    puts("Programma zavershena.");

    return 0;
}

//x - среднее время между прибытием клиентов в минутах
//возвращает true, если клиент появляется в течении данной минуты
bool newcustomer(double x)
{
    if(rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

//when - время прибытия клиента
//функция возвращает структуру Item со временем прибытия,
//установленным в when, и временем обслуживания,
//установленным в случайное значение из диапазона от 1 до 3 
Item customertime(long when)
{
    Item cust;
    cust.processtime = rand() % 3 + 1;
    cust.arrive = when;

    return cust;
}