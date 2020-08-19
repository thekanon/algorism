#include <stdio.h>
void main()
{
	int a,b,n,i,cou=0;

	scanf("%d %d %d",&a,&b,&n);


	for(i=a;i<=n;i+=b){
		cou++;
		if(i==n){
			printf("%d",cou);
			cou=-1;
		}
	}
	if(cou==-1)
		printf("X");
		

	
}