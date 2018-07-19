#include <stdio.h>
void main(){
  int n,m;
  scanf("%d",&n);
  if(n%2!=0 || n%3!=0){
	  m=1;
  }
  printf("%d %d",n/2+m,n/3+m);

}


