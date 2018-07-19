#include <stdio.h>
#include <math.h>
void main()
{
	double a,b,c;	
	scanf("%lf %lf",&a,&b);
	b=pow(10,b);
	a+=(b*5)/10;
	
	printf("%d",((int)a/(int)b)*(int)b);
}