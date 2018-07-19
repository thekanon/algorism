#include <stdio.h>
#include <math.h>
void main()
{
	double a,b;
	int c;

	scanf("%lf %lf",&a,&b);
	
	a=a-sqrt(a);
	b=b-sqrt(b);


	b=b-a;
	c=b;
	
	printf("%d",c);
	
}
