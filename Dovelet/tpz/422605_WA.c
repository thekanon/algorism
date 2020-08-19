#include <stdio.h>
void main()
{
	int a,b,c,max=0,n,m;

	scanf("%d",&n);
	scanf("%d %d %d",&a,&b,&c);

	if(max>=a)
	{
		max=a;
	}
	if(max>=b)
	{
		max=b;
	}
	if(max>=c)
	{
		max=b;
	}
	max=n-max;
	a=n-a;
	b=n-b;
	c=n-c;

	printf("%d %d	",max,n-a-b-c);
}