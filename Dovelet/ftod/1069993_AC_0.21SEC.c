#include <stdio.h>
int main(){    
int i,n,m,p; 
scanf("%d %d %d",&n,&m,&p); 
printf("0."); 
for(i=1;i<=p;i++)  {
   n*=10; 
   printf("%d",n/m); n%=m; } 
return 0; 
}