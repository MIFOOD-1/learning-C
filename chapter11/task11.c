#include <stdio.h>
#include <string.h>
#define num 20
#define nums 10
void string(int num1, int num2, char masiv[][num2]);
void ishod(int num1, int num2, char masiv[][num2]);
void pos_ascii(int num1, int num2, char masiv[][num2]);
void long_string(int num1, int num2, char masiv[][num2]);
void long_word(int num1, int num2, char masiv[][num2]);
int kolbukv(char masiv[]);

int main(void)
{
    char str[nums][num];
    char c;

        printf("Vvedite stroki:\n");
        string(nums, num, str);
        
        while(1)
        {
        printf("Vvedite chto vi hotite sdelat\n");
        printf("a) vivod ishodnogo spiska strok                 b)vivod strok soglasno posledovatelnosti ASCII\n");
        printf("c) vivod strok v poryadke vozrastaniya dliny    d)vivod strok v poryadke vozrastanie dlini pervogo slova\n");
        printf("e) vihod iz programmi\n");
        
        c = getchar();
        while(getchar() != '\n');
        
        switch (c)
        {
        case 'a':
            ishod(nums, num, str);
            break;
        
        case 'b':
            pos_ascii(nums, num, str);
            break;

        case 'c':
            long_string(nums, num, str);
            break;

        case 'd':
            long_word(nums, num, str);
            break;

        case 'e':
            printf("Dosvidanie");
            return 0;
            break;
        
        default:
            printf("Vi vveli ne pravilno, poprobute snova\n");
            while(getchar() != '\n');
        }
        putchar('\n');
    }
}



    

void string(int num1, int num2, char masiv[][num2])
{
    for(int i = 0; i < num1; i++)
    {
       if(fgets(masiv[i], num2, stdin) == NULL)
        break;
    }
}

void ishod(int num1, int num2, char masiv[][num2])
{
    for(int i = 0; i < num1; i++)
        printf("%s", masiv[i]);
}

void pos_ascii(int num1, int num2, char masiv[][num2])
{
    char array[num1][num2];
    char copy[num2];
    for(int i = 0; i < num1; i++)
        strcpy(array[i], masiv[i]);

    for(int i = 0; i < num1; i++)
        for(int index = 0; index < num1; index++)
            if(strcmp(array[i], array[index]) > 0);
            {
                strcpy(copy, array[i]);
                strcpy(array[i], array[index]);
                strcpy(array[index], copy);
            }
        
    for(int i = 0; i < num1; i++)
        printf("%s", array[i]);
}
        
void long_string(int num1, int num2, char masiv[][num2])
{
    char array[num1][num2];
    char copy[num2];
    for(int i = 0; i < num1; i++)
        strcpy(array[i], masiv[i]);

    for(int i = 0; i < num1; i++)
        for(int index = 0; index < num1; index++)
            if(strlen(array[i]) > strlen(array[index]))
            {
                strcpy(copy, array[i]);
                strcpy(array[i], array[index]);
                strcpy(array[index], copy);
            }
        
    for(int i = 0; i < num1; i++)
        printf("%s", array[i]);
}

void long_word(int num1, int num2, char masiv[][num2])
{
    char array[num1][num2];
    char copy[num2];
    for(int i = 0; i < num1; i++)
        strcpy(array[i], masiv[i]);

    for(int i = 0; i < num1; i++)
        for(int index = 0; index < num1; index++)
            if(kolbukv(array[i]) > kolbukv(array[index]))
            {
                strcpy(copy, array[i]);
                strcpy(array[i], array[index]);
                strcpy(array[index], copy);
            }
        
    for(int i = 0; i < num1; i++)
        printf("%s", array[i]);
}

int kolbukv(char masiv[])
{
int simvol = 0;

while(masiv[simvol] != ' ' && masiv[simvol] != '\n' && masiv[simvol] != '\0')
    simvol++;

return simvol;
}
