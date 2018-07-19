#include <stdio.h>

int main()
{
   float a,i,total;
   total=0;

   for(i=1;i<=12;i++)
   {
      scanf("%f",&a);
      total+=a;
   }
   printf("$%.2f",total/12.0);

   return 0;
}