#include <stdio.h>

int main(void)
{
    int probel, simvol, new_string, another_simvol;
    another_simvol= new_string = probel = simvol = 0;
    

    char c;
    printf("Vvedite luboi simvol ili chtob viity == #\n");
    while ((c = getchar()) != '#')
    {
       simvol++;
       if(c == ' ')
       {
        probel++;
       }
      else if(c == '\n')
       {
        new_string++;
        //printf("Vvedite luboi simvol ili chtob viity == #\n");
       }
       else{
        another_simvol++;
       }
    }

    printf("Simvolov = %d, probelov = %d, novih strok = %d, ostalnig simvolov = %d",
    simvol, probel, new_string, another_simvol);

    return 0;

}