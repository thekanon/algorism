#include <stdio.h>
void main(){
  int n,m,mm;
  scanf("%d",&n);
  if(n%2!=0){
	  m=1;
  }else if(n%3!=0){
	  mm=1;
  }
  printf("%d %d",n/2+m,n/3+mm);

}


