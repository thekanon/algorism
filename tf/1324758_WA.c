#include <stdio.h>
void main()
{
  int n,a=0;

  scanf("%d",&n);
  
  while(1){
    if(n%2==1)
       break;
    n/=2;
  }

  printf("%d %d",n,a);
     
  

}