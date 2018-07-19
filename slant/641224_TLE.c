#include <stdio.h>

int main()
{
    int a,b,c,d,n=2,m=2;
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    while(1){

      if(b-a*n==d-c*n)
         break;

      n++;
    }
    printf("%d %d",n,b-a*n);
         
    
    
    
    
}
