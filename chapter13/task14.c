#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LIM 20
#define MAX 31

int main(void)
{
    int num[LIM][MAX];
    char sim[LIM][MAX];
    char map[] = " .':~*=&%#";

    FILE *fp;
    FILE *fp1;

    srand((unsigned int) time(0));

    for(int i = 0; i < LIM; i++)
    {
        for(int index = 0; index < MAX - 1; index++)
            num[i][index] = rand() % 10;
    }

int filtered[LIM][MAX];

for(int i = 0; i < LIM; i++)
{
    for(int j = 0; j < MAX - 1; j++)
    {
        int sum = 0;
        int count = 0;

        // верх
        if(i > 0)
        {
            sum += num[i - 1][j];
            count++;
        }

        // низ
        if(i < LIM - 1)
        {
            sum += num[i + 1][j];
            count++;
        }

        // лево
        if(j > 0)
        {
            sum += num[i][j - 1];
            count++;
        }

        // право
        if(j < MAX - 2)
        {
            sum += num[i][j + 1];
            count++;
        }

        int avg = (sum + count / 2) / count;

        if(abs(num[i][j] - avg) > 1)
            filtered[i][j] = avg;
        else
            filtered[i][j] = num[i][j];
    }
}

    if((fp = fopen("rock", "w+")) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < LIM; i++)
    {
        for(int index = 0; index < MAX - 1; index++)
            fprintf(fp, "%d", num[i][index]);
        fprintf(fp,"%c", '\n');
    }

    rewind(fp);

      for(int i = 0; i < LIM; i++)
    {
        for(int index = 0; index < MAX - 1; index++)
            sim[i][index] = map[filtered[i][index]];

        sim[i][MAX - 1] = '\0';
    }
    
     if((fp1 = fopen("image", "w")) == NULL)
    {
        fprintf(stderr, "Ne udaetsya sozdat fail.\n");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < LIM; i++)
    {
        puts(sim[i]);
        fprintf(fp1, "%s\n", sim[i]);
    }



    fclose(fp);
        fclose(fp1);
        return 0;
}