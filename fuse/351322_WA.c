#include <stdio.h>
void main()
{
	float a,b,c,d;
	
	scanf("%f %f %f",&a,&b,&c);

	a*=2.5;
	b*=2.0;
	c*=0.5;

	d=a+b+c;

	
	printf("%d",(((int)(d*2)/10)+1)*10);



}