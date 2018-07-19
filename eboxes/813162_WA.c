#include <stdio.h> 

int main() 
{ 
     int N,K,T,F; 
     int i=1,A,B,result; 
     scanf("%d %d %d %d",&N,&K,&T,&F); 
      
     for(B=1 ; i<T ; i++) 
          B=2*B; 
      
     i=(F-N)/(B*K-1); 
     A=T*(T+1)/2; 
     result=N+(i*K*A); 
     printf("%d",result); 
     return 0; 
} 
