#include <stdio.h>
void main()
{
	int a,z,x,c;
	scanf("%d",&a);
	a=1000-a;
	z=a/100;
	x=z*100;
	a-=x;
	x=a/50;
	c=x*50;
	a-=c;
	c=a/10;
	printf("%d %d %d",z,x,c);
}