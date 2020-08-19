#include <stdio.h>
void main(){
	int n,m,i=0,max=0,min=9000000,r;

	scanf("%d %d",&n,&m);

	while(i<m){
		scanf("%d",&r);
		
		if(r>max)
			max=r;
		if(r<min)
			min=r;
		i++;
	}

	printf("%d %d",n-max,n-min);
}