#include<stdio.h> 
#include<math.h> 

int main() 
{ 
     long a,b,i,cnt;     
     scanf("%d %d",&a,&b);
     cnt=b-a+1;
     
     for(i=sqrt(a);i*i<=b;i++)
     {
        if(i+i>=a)
          cnt--;
     }    
     printf("%d",cnt);
} 
