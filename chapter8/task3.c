#include <stdio.h>

int main(void) 
{
    int c;
    int another, Big, small;
    another = Big = small = 0;

    while ((c = getchar()) != EOF)
    {
        if(c >= 65 && c <= 90)
        Big++;
        else if(c >= 97 && c <= 122)
        small++;
        else
        another++;
    }

    printf("propisnih: %d\nstrochnih: %d ostalnih: %d", Big, small, another);

    return 0;
}


// второй вариант

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     int c;
//     int another, Big, small;
//     another = Big = small = 0;

//     while ((c = getchar()) != EOF)
//     {
//         if(isupper(c))
//             Big++;
//         else if(islower(c))
//             small++;
//         else
//             another++;
//     }  

//     printf("propisnih: %d\nstrochnih: %d ostalnih: %d", Big, small, another);

//     return 0;
// }