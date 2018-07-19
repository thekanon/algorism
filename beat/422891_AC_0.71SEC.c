#include <stdio.h>
void main()
{
	int n,m,a,b,max;

	scanf("%d %d",&n,&m);
	
	if(n>m)
		max=n;
	else
		max=m;

	

	a=(n+m)/2;
	b=max-a;


	if(a-b==m || b-a==m)	
		printf("%d %d",a,b);
	else
		printf("impossible");

	

}
