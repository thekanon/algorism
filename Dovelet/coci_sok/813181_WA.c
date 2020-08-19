#include <stdio.h>
void main()
{
	double a,s,d;
	double z,x,c;
	
	scanf("%lf %lf %lf",&a,&s,&d);
	scanf("%lf %lf %lf",&z,&x,&c);
	
	printf("%lf %lf %lf",((a/z)*z-a)*-1,((a/z)*x-s)*-1,((a/z)*c-d)*-1);
}