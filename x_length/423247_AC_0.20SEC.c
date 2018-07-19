#include <stdio.h>
#include <math.h>
void main()
{
	double a,b,n,m,sum;
	double sq=0;
	scanf("%lf %lf",&a,&b);	
	
	n=((a*2)*3.14159)/2;
	m=((b*2)*3.14159)/2;

	sum=n+m;

	a=a*a*2;
	b=b*b*2;

	
	sq+=sqrt(a);
	sq+=sqrt(b);

	sum+=sq;


	printf("%.3lf",sum);
}