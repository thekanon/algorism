#include <stdio.h>

int main()
{
    long int a,b,c,d,n=1,m=1;
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b){
     while(1){

      if(b-a*n==d-c*n)
         break;
    

      n++;
     }
     printf("%d %d",n,b-a*n);
         
      
    }else{
      printf("0 0");
    }
    
    
}
