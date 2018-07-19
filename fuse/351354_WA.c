#include <stdio.h>
void main()
{
	float a,b,c,d;
	scanf("%f %f %f",&a,&b,&c);
	a*=2.5;
	b*=2.0;
	c*=0.5;
	d=a+b+c;
	d*=2;
	d+=9;
	d/=10;
	d*=10;
	printf("%d amperes",(int)d);
}