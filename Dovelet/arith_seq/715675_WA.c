#include <stdio.h> 

int main() 
{ 
    int a,d,an,n;
 scanf("%d %d %d",&a,&d,&an);

 if((n%(d/(an-a+d))==1)){
 n=(an-a+d)/d;
  printf("%d",n);
 }else{

 }
}