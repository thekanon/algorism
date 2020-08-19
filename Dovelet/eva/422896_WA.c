#include <stdio.h>
void main()
{
	int a,b,c,d,e;

	scanf("%d %d %d %d %d",&a,&b,&c,&d);

	printf("%d %d %d %d ",a,b,c,d);

	if(c+b-a==d)
	{
		printf("%d",b-a+d);
	}
	else
		printf("%d",e*(c-b));
}