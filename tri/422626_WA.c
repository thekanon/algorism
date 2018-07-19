#include <stdio.h>
void main()
{
	int a,b,c,max=0,n,m;

	scanf("%d %d %d",&a,&b,&c);
	
	if(max<a)
	{
		max=a;
		a=0;
	}
	if(max<b)
	{
		max=b;
		b=0;
	}

	if(max<c)
	{
		max=c;
		c=0;
	}

	if(max<a+b+c)

		printf("no");

	else
		printf("yes");

}