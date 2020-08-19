#include <stdio.h> 

int main() 
{ 
    int a,d,an,n;
 char *p;
 n=0;
 p=0;
 scanf("%d %d %d",&a,&d,&an);
 for(;an=a+(n-1)*d;a++){
  printf("%d",n%((an-a+d)/d)==0 ? "n" : "X");
 }
}