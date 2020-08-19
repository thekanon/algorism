#include <stdio.h>
void main()
{
	int a,b,c,i;
	scanf("%d %d",&a,&b);


	c=b;
	for(i=0;i<a-1;i++)
	{
		c*=b;
	}


	printf("%d",c);
}