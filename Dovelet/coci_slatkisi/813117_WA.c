#include <stdio.h>
#include <math.h>
void main()
{
	double a,b,c;	
	scanf("%lf %lf",&a,&b);
	a+=5;
	b=pow(10,b);
	
	printf("%d",((int)a/(int)b)*(int)b);
}