#include <stdio.h>
void main()
{
	int n,m,a,b;

	scanf("%d %d",&n,&m);
	
	a=(n+m)/2;
	b=n-a;

	if(a-b==m || b-a==m)	
		printf("%d %d",a,b);
	else
		printf("impossible");

}
