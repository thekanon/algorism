#include <stdio.h>
void main()
{
	int n,m,a,b;

	scanf("%d %d",&n,&m);
	
	a=(n+m)/2;
	b=n-a;

	if(a<0 || b<0)
		printf("%d %d",a,b);
	else
		printf("impossible");

}
