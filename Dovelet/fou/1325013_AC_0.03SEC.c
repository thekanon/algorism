#include <stdio.h>
void main()
{
   int a,b,c;
   int tmp;
   scanf("%d %d %d",&a,&b,&c);

   if(b>a && b>c){
        tmp=c;
        c=b;
        b=tmp;
   } else if(a>b && a>c){
        tmp=c;
        c=a;
        a=tmp;
   }


   if(b<a && b<a){
        tmp=a;
        a=b;
        b=tmp;
   } else if(c<b && c<c){
        tmp=a;
        a=c;
        c=tmp;
   }


   if(b-a>c-b)
     printf("%d",a*4+(6*(c-b))-a-b-c);
   else
     printf("%d",a*4+(6*(b-a))-a-b-c);
}