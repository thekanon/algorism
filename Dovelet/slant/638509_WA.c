#include <stdio.h>
void main(){
     int a,b,c,d,m=0,n;
     
     scanf("%d %d %d %d",&a,&b,&c,&d);
     
     while(1){       
       if(b-a>0){
        b-=a;
        m++;
       }else {
        n=b;
        break;
       }
     }
     printf("%d %d",m,n);
     
          
}
