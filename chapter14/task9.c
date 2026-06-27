#include <stdio.h>
#include <stdbool.h> 
#include <string.h>

struct airaplan{
    int index_num;
    bool bronya;
    bool confirm;
    char first_name[20];
    char second_name[20];
};

struct flight{
    int flight_num;
    struct airaplan seats[12];
};

void show_free_place(struct airaplan plan[]);
void num(struct airaplan plan[]);
void show_place_abc(struct airaplan plan[]);
int BronMesta(struct airaplan plan[]);
int SnatMesta(struct airaplan plan[]);
int Seat(struct airaplan plan[]);

int main(void)
{
struct flight plan[4] ={
    {102},
    {311},
    {444},
    {519}
};

FILE *fp = fopen("plane.dat", "rb");

if (fp != NULL)
{
    fread(plan, sizeof(struct flight), 4, fp);
    fclose(fp);
}
else
{
    for (int f = 0; f < 4; f++)
{
    for (int i = 0; i < 12; i++)
    {
        plan[f].seats[i].index_num = i + 1;
        plan[f].seats[i].bronya = false;
        plan[f].seats[i].confirm = false;
        plan[f].seats[i].first_name[0] = '\0';
        plan[f].seats[i].second_name[0] = '\0';
    }
}
}

int current;

printf("Viberite reis:\n1) Flight 102\n2) Flight 311\n3) Flight 444\n4) Flight 519\n");
scanf("%d", &current);
current--;
while(getchar() != '\n');

    char ch;

    while(1)
    {
    printf("\nReis %d\n", plan[current].flight_num);
    printf("Dlya vibora fukcii vvedite ee bukveniyu metku:\n");
    printf("a) Pokazat kolichestvo svobodnih mest\n");
    printf("b) Pokazat spisok svobodnih mest\n");
    printf("c) Pokazat spisok zabronirovannih mest v alfavitnom poryadke\n");
    printf("d) Zabronirovat mesto dlya passajira\n");
    printf("e) Snyat bronyu s mesta\n");
    printf("g) potverdite bron\n");
    printf("f) Vity iz programmi\n");

        ch = getchar();

        while(getchar() != '\n');

        switch (ch)
        {
        case 'a':
            num(plan[current].seats);
            break;
        case 'b':
            show_free_place(plan[current].seats);
            break;
        case 'c':
            show_place_abc(plan[current].seats);
            break;
        case 'd':
            BronMesta(plan[current].seats);
            break;
        case 'e':
            SnatMesta(plan[current].seats);
            break;
        case 'g':
            Seat(plan[current].seats);
            break;
        case 'f':

            fp = fopen("plane.dat", "wb");

            if (fp != NULL)
            {
            fwrite(plan, sizeof(struct flight), 4, fp);
            fclose(fp);
            }

            printf("konec raboti\n");
            return 0;

        
        default:
            printf("Net takogo varianta otveta!!!\n");
            continue;
        }
    }

}

void show_free_place(struct airaplan plan[])
{

    for(int index = 0; index < 12; index++)
    {
        if(plan[index].bronya == 0)
        printf("mesto nomer %d svobodno\n", plan[index].index_num);
    }
}

void num(struct airaplan plan[])
{
    int free = 0;
      for(int index = 0; index < 12; index++)
    {
        if(plan[index].bronya == 0)
            free++;
    }
    if(free != 0)
    printf("svobodnih mest: %d\n", free);
    else
        printf("Vse mesta zabronirovani");
}

void show_place_abc(struct airaplan plan[])
{
    int proverka = 0;
    struct airaplan temp;

     for(int index = 0; index < 12; index++)
        for(int i = index + 1; i < 12; i++)
            if(plan[index].bronya == 1 && plan[i].bronya == 1)
            if(strcmp(plan[index].first_name, plan[i].first_name) > 0)
            {
                temp = plan[index];
                plan[index] = plan[i];
                plan[i] = temp;
            }


    for(int index = 0; index < 12; index++)
    {
        if(plan[index].bronya == 1)
        {
        proverka++;
        printf("%s %s mesto %d confirmed:%d\n", plan[index].first_name, plan[index].second_name, plan[index].index_num, plan[index].confirm);
        }
    }
    if(proverka == 0)
        printf("Net zabronirovannih mest\n");
}

int BronMesta(struct airaplan plan[])
{
    int mesto;
    struct airaplan pl;
    printf("Vvedite imya i familiyu: ");
    scanf("%19s %19s", pl.first_name, pl.second_name);
    while(1)
{
    printf("Vvedite mesto kotoroe hottite zabronirovat ili vvedite '0' esli hotite viyti: ");
    scanf("%d", &mesto);

    if(mesto > 12)
        printf("oshibka takogo mesta net\n");
    else if(mesto == 0)
    {
        while(getchar() != '\n');
        return 0;
    }
    else{
        for(int index = 0; index < 12; index++)
        {
            if(mesto == plan[index].index_num)
                if(plan[index].bronya == 0)
                    {
                        plan[index].bronya = 1;
                        plan[index].confirm = 0;
                        strcpy(plan[index].first_name, pl.first_name);
                        strcpy(plan[index].second_name, pl.second_name);
                        while(getchar() != '\n');
                        return 1;
                    }
                else
                    printf("\nEto mesto uze zabroniravano viberite drugoe\n");

        }
    }
}
}


int SnatMesta(struct airaplan plan[])
{
    int mesto;
    while(1)
{
    printf("Vvedite mesto kotoroe hottite snyat ili vvedite '0' esli hotite viyti: ");
    scanf("%d", &mesto);

    if(mesto > 12)
        printf("oshibka takogo mesta net\n");
    else if(mesto == 0)
    {
        while(getchar() != '\n');
        return 0;
    }
    else{
        for(int index = 0; index < 12; index++)
        {
            if(mesto == plan[index].index_num)
                if(plan[index].bronya == 1)
                    {
                        plan[index].bronya = 0;
                        plan[index].confirm = 0;
                        while(getchar() != '\n');
                        return 1;
                    }
                else
                    printf("\nEto mesto ne zabroniravano viberite drugoe\n");

        }
    }
}
}

int Seat(struct airaplan plan[])
{
    int seat;
    printf("Potverdit mesto: ");
    scanf("%d", &seat);

    for(int i = 0; i < 12; i++)
    {
        if(plan[i].index_num == seat && plan[i].bronya)
        {
            plan[i].confirm = 1;
            return 1;
        }
    }
    return 0;
}