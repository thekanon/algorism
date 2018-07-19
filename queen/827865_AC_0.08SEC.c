#include <stdio.h>
void main()
{
	double a,b;
	
	scanf("%lf %lf",&a,&b);
	
	if(a>b)	
		printf("%.0lf",b);
	else
		printf("%.0lf",a);
}