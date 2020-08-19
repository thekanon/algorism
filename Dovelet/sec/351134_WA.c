#include <stdio.h>
void main()
{
	int a,z,x,c,v;
	
	scanf("%d",&a);

	z=a/5184000;
	a%=5184000;

	x=a/216000;
	a%=216000;

	c=a/3600;
	a/=3600;
	
	v=a/60;

	printf("%d %d %d %d",z,x,c,v);



}