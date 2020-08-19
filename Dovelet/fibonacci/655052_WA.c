#include <stdio.h>
void main()
{
     int n,i,a=0,b=1,c[82]={0},cnt=0;
      
     while(1){
         scanf("%d",&n);
          
         for(i=0;i<=n-2;i++){
            a=a+b;
            b=a-b;
            a=a-b;
            b=a+b;
         }
         if(a+b%2==1){      
             c[cnt]=b;
             c[cnt+1]=a+b;
         }
         else {
             c[cnt]=a+b;
             c[cnt+1]=b;
         }
         if(n==-2)
           break;
         cnt+=2;
          
         a=0;
         b=1;
     }
     a=1;
     for(i=0;i<cnt;i+=2){
        printf("Case #%d:\n%d %d\n\n",a,c[i],c[i+1]);
        a++;
     }
}