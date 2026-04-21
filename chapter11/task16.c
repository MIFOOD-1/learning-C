#include <stdio.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
    int n = 'p';
    if(argc >= 2)
    {
        if(argv[1][0] == '-')
            n = argv[1][1];
    }

    int ch;

    while((ch = getchar()) != EOF)
    {
        switch(n)
        {
            case 'u':
                putchar(toupper(ch));
                break;
            
            case 'l':
                putchar(tolower(ch));
                break;
            
            case 'p':
            default:
                putchar(ch);
                break;
        }
    }
    return 0;
}