#include <stdio.h>
#include <stdlib.h>

#define LIN 40
int main(void)
{
    FILE * fp;
    int ch;
    char name[LIN];
    int pos;

    printf("VVetite umya faila:");
    scanf("%s", name);

    if((fp = fopen(name, "r")) == NULL)
    {  
        fprintf(stderr, "Oshibka!!");
        exit(EXIT_FAILURE);
    }
    
    while(1)
    {
        printf("Vvedite poziciy");
        
         if(scanf("%d", &pos) != 1 || pos < 0)
            break;
            
        fseek(fp, pos, SEEK_SET);
        
        while((ch = getc(fp)) != EOF && ch != '\n')
        {
            putchar(ch);
        }
        putchar('\n');
    }

fclose(fp);
return 0;
}