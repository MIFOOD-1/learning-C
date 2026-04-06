#include <stdio.h>
#include <ctype.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)
{
    int choice;
    void count(void);
    while((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'c':
            printf("Pokupaite deshevo, prodavaite dorogo.\n");
            break;
        case 'z':
            putchar('\a');
            break;
        case 'p':
            count();
            break;
        
        default: printf("Oshibka\n");
            break;
        }
    }
    printf("programma zavershena");
    return 0;
}

void count(void)
{
    int n, i;
    printf("Do kakogo predela vesti podchet? Vvedite celoe chislo:\n");
    n = get_int();
    for(i = 1; i <= n; i++)
        printf("%d\n", i);
    while (getchar() != '\n')
        continue;
}

char get_choice(void)
{
    int ch;
    printf("Vvedite bukvu, sootvestvuushuu vibranomu variantu:\n");
    printf("c. covet            z. zvonok\n");
    printf("p. podchet          v. vihod\n");
    ch = get_first();
    while (ch != 'c' && ch != 'z' && ch != 'p' && ch != 'v')
    {
        printf("Viberite c, z, p, ili v.\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;
   
    while (isspace(ch = getchar()))
    continue;
    
    while(getchar() != '\n')
        continue;

    
    return ch;
}

int get_int(void)
{
    int input;
    char ch;
    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" ne yavlyaetcya celochislennim.\nVvedite ");
        printf("celoe chislo, takoe kak 25, -178 ili 3: ");
    }
    return input;
}