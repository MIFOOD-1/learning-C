#include <stdio.h>
#include <time.h>


void time2(double delta)
{

  double time1;
  if((time1 = clock()) == -1)
  {
    puts("-1");
    return;
  }

  double time2 = time1 + delta;
   
   
   while(clock() < time2)
   {
    
   }
   
};
int main(void)
{
    time2(300);

    return 0;
}
