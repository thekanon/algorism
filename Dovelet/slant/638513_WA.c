#include <stdio.h>
void main(){
     int a,b,c,d,m=0,n,sw=0;
     
     scanf("%d %d %d %d",&a,&b,&c,&d);
     
     while(1){       
       if(b-a>=0 && sw==0){
        m++;
        b-=a;
        if(b==0)
          sw=1;
       }else {
        n=b;
        break;
       }
     }
     printf("%d %d",m,n);
     

          
}
