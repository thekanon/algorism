#include <stdio.h>
void main(){
  int n;
  scanf("%d",&n);
  if(n%2==1){
	  n++;
  }else if(n%3>0){
	  n+=n%3;
  }

  printf("%d %d",n/2,n/3);
}