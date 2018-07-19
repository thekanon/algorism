#include<stdio.h> 
#include<math.h> 
int main() 
{ 
     int n,m,k; 
     scanf("%d %d",&n,&m); 
     k=m-sqrt((float)m)-n-1-sqrt((float)n); 
     printf("%d",k); 
     return 0; 
} 