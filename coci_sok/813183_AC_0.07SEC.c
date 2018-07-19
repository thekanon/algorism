#include <stdio.h>
void main()
{
	double a,s,d;
	double z,x,c;
	
	scanf("%lf %lf %lf",&a,&s,&d);
	scanf("%lf %lf %lf",&z,&x,&c);
	
	if(a/z<s/x && a/z<d/c)
		printf("%lf %lf %lf",((a/z)*z-a)*-1,((a/z)*x-s)*-1,((a/z)*c-d)*-1);
	if(a/z>s/x && s/x<d/c)
		printf("%lf %lf %lf",((s/x)*z-a)*-1,((s/x)*x-s)*-1,((s/x)*c-d)*-1);
	if(a/z>d/c && d/c<s/x)
		printf("%lf %lf %lf",((d/c)*z-a)*-1,((d/c)*x-s)*-1,((d/c)*c-d)*-1);
}