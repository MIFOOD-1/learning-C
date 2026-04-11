#include <stdio.h>
#define MONTHS 12
#define YEARS 5
void kol_osadkov_year(int years, int months, const float (*rain)[months]);
void kol_osadkov_month(int years, int months, const float (*rain)[months]);
int main(void)
{
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

   kol_osadkov_year(YEARS, MONTHS, rain);
   kol_osadkov_month(YEARS, MONTHS, rain);
 
    return 0;
}


void kol_osadkov_year(int years, int months, const float (*rain)[months])
{
float subtot, total;
int year, month;
printf("GOD    KOLICHESTVO OSADKOV (v duimah)\n");
    for(year = 0, total = 0; year < years; year++)
    {
        for(month = 0, subtot = 0; month < months; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nSrednegodovoe kolichestvo osadkov sostavlyaet %.1f duimov.\n\n",
            total/years);
}


void kol_osadkov_month(int years, int months,const float (*rain)[months])
{
float subtot;
int year, month;
printf("SREDNEMESYACHNOE KOLICHESTVO OSADKOV:\n\n");
    printf(" Yan  Fev  Mar  Apr  Mai  Iun  Iul  Avg  Sen  Okt");
    printf("  Noy  Dek\n");
    for(month = 0; month < months; month++)
    {
        for(year = 0, subtot = 0; year < years; year++)
            subtot+= rain[year][month];
        printf("%4.1f ", subtot/years);
    }
    printf("\n");
}