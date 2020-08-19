#include <stdio.h>
void main()
{
	int a,b,c,max,n,m;

	scanf("%d",&n);
	scanf("%d %d %d",&a,&b,&c);
	max=a;
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
		max=c;
	}
	max=n-max;
	a=n-a;
	b=n-b;
	c=n-c;

	m=n-a-b-c;
	if(m<0)
		m=0;

	printf("%d %d	",n-max,m);
}