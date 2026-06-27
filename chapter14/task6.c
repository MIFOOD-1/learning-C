#include <stdio.h>
#include <string.h>

#define PLAYERS 19

struct player
{
    int number;
    char firstName[20];
    char lastName[20];

    int out;        
    int punch;      
    int prohod;     
    int run;        

    double average;
};

int main(void)
{
    struct player players[PLAYERS] = {0};

    FILE *fp = fopen("team.txt", "r");

    if (fp == NULL)
    {
        printf("Ne udalos otkrit fail.\n");
        return 1;
    }

    int number;
    int out;
    int punch;
    int prohod;
    int run;

    char firstName[20];
    char lastName[20];

    while (fscanf(fp, "%d %19s %19s %d %d %d %d",
                  &number,
                  firstName,
                  lastName,
                  &out,
                  &punch,
                  &prohod,
                  &run) == 7)
    {
        players[number].number = number;

        strcpy(players[number].firstName, firstName);
        strcpy(players[number].lastName, lastName);

        players[number].out += out;
        players[number].punch += punch;
        players[number].prohod += prohod;
        players[number].run += run;
    }

    fclose(fp);

    int total_out = 0;
    int total_punch = 0;
    int total_prohod = 0;
    int total_run = 0;

    printf("Statistika igrokov:\n\n");

    for (int i = 0; i < PLAYERS; i++)
    {
        if (players[i].out == 0)
            continue;

        players[i].average =
            (double)players[i].punch / players[i].out;

        printf("%2d %-12s %-12s Out:%3d Hits:%3d Walks:%3d Runs:%3d Avg: %.3f\n",
               players[i].number,
               players[i].firstName,
               players[i].lastName,
               players[i].out,
               players[i].punch,
               players[i].prohod,
               players[i].run,
               players[i].average);

        total_out += players[i].out;
        total_punch += players[i].punch;
        total_prohod += players[i].prohod;
        total_run += players[i].run;
    }

    printf("\nStatistika komandy:\n");

    printf("Outs  : %d\n", total_out);
    printf("Hits  : %d\n", total_punch);
    printf("Walks : %d\n", total_prohod);
    printf("Runs  : %d\n", total_run);

    if (total_out > 0)
    {
        printf("Team average: %.3f\n",
               (double)total_punch / total_out);
    }

    return 0;
}