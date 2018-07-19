#include <stdio.h> 

int main() 
{ 
    int a,d,an,n;
 n=0;
 scanf("%d %d %d",&a,&d,&an);
 if((n%(d/(an-a+d))==1)){
  printf("%d",n);
 }else{
  printf("X");
 }
}