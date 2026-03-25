#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40];
    char last_name[40];
    int numName, lastNum;

    scanf("%s %s",name, last_name);

     numName = strlen(name);
    lastNum = strlen(last_name);

    printf("%s %s\n%*d %*d\n", name, last_name, numName,numName,lastNum, lastNum);
    printf("%s %s\n%-*d %-*d\n", name, last_name, numName,numName,lastNum, lastNum);

    return 0;
}