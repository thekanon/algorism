#include <stdio.h>
void main()
{
	int a,z,x,c,v;
	
	scanf("%d",&a);

	z=a/86400;
	a%=86400;

	x=a/3600;
	a%=3600;
	
	c=a/60;
	v=a%60;

	printf("%d %d %d %d",z,x,c,v);



}