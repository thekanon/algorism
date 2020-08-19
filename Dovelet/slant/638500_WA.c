
#include <stdio.h>
void main(){
     int a,b,c,d;
     
     scanf("%d %d %d %d",&a,&b,&c,&d);
     
     if(b==0){
       printf("%d %d",d/c,0);
     }else {
       printf("%d %d",b/a,b%a);
     }
     
}
