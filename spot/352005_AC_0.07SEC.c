#include <stdio.h>
void main()
{
	float a,b;
	scanf("%f %f",&a,&b);

	a*=(b/100);
	a*=-1;

	printf("%.3f",a);
}