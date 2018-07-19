#include <stdio.h>
void main()
{
	int a,b,c,max=0,n;

	scanf("%d",&n);
	scanf("%d %d %d",&a,&b,&c);

	if(max<=a)
	{
		max=a;
	}
	if(max<=b)
	{
		max=b;
	}
	if(max<=c)
	{
		max=b;
	}

	printf("%d",n-max,n-a-b-c);
}