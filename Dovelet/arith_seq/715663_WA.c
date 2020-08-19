#include <stdio.h> 

int main() 
{ 
    int a,d,an,n;
 scanf("%d %d %d",&a,&d,&an);
 n=(an-a+d)/d;
 if((n%(d/(an-a+d))==1)){
  printf("%d",n);
 }else{
  printf("X");
 }
}