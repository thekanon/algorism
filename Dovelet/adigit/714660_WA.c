#include <stdio.h>

int main()
{
   int a,b,c,d,i;
   b=0;
   c=0;
   d=0;

   for(i=1;i<=7;i++)
   {
      scanf("%d",&a);

      if(a<10)
         b+=a;

      else if(10<=a<100)
         c+=a;
    
      else if(100<=a<1000)
         d+=a;
   }

   printf("%d %d %d",b,d,c);

   return 0;
}