#include <stdio.h>

int main()
{
   double a,i,total;
   total=0;

   for(i=1;i<=12;i++)
   {
      scanf("%lf",&a);
      total+=a;
   }
   printf("$%.2lf",total/12.0);

   return 0;
}