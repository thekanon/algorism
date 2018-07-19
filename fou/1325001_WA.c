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

   printf("%d %d %d",a,b,c);
   
}