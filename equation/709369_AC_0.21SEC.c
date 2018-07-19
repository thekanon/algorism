#include <stdio.h> 

int main() 
{ 
     double a,b,c,d;   
      
     scanf("%lf%lf%lf%lf",&a,&b,&c,&d);  
     if(a+b-c-d==0)printf("many");  
      
     else if(a-c==0)printf("none");  
      
     else printf("%.3f",(d-b)/(a-c)); 
      
     return 0; 
}