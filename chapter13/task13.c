#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(void)
{
    int LIM = 20;
    int MAX = 31;
    int num[LIM][MAX];
    char sim[LIM][MAX];
    char map[10] = " .':~*=&%#";
    char ch;

    FILE *fp;
    FILE *fp1;

    srand((unsigned int) time(0));

    for(int i = 0; i < LIM; i++)
    {
        for(int index = 0; index < MAX - 1; index++)
            num[i][index] = rand() % 10;
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
            sim[i][index] = map[num[i][index]];

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