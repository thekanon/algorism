#include <stdio.h> 
  
int main() 
{ 
   int a,d,an,n,i; 
  
   scanf("%d %d %d",&a,&d,&an); 
  
   while(1) 
   { 
      if((an-a+d)%d==0) 
      { 
         printf("%d",(an-a+d)/d); 
         break; 
      } 
  
      else if((an-a+d)%d!=0)
      { 
         printf("X"); 
         break; 
      } 
   } 
  
   return 0; 
}