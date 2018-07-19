#include <stdio.h>
void main()
{
	int n,i,m,max,min;
	scanf("%d %d",&m,&n);

	max=m>n?m:n;

	min=m<n?m:n;

	for(i=min;i<=max;i++)
		printf("%d ",i);
}
