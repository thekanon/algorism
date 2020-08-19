#include <stdio.h>
void main(){
  int n;
  scanf("%d",&n);
  if(n!=1)
	printf("%d %d",(n+n%2)/2,(n+n%3)/3);
  else
	printf("1 1");
}


