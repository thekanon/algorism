#include <stdio.h>
#include <math.h>
void main()
{
	double a,b;
	scanf("%f %f",&a,&b);
	
	a=a-sqrt(a);
	b=b-sqrt(b);


	b=b-a;
	printf("%.0f",b);
}
