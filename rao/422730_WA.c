#include <stdio.h>
void main()
{
	//a^2 + b^2 = c^2 right
	//a^2 + b^2 > c^2 acute obtuse

	double a,b,c,max=0;

	scanf("%lf %lf %lf",&a,&b,&c);

	a*=a;
	b*=b;
	c*=c;

	if(max<a)
		max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;

	if(max==a)
		a=0;
	if(max==b)
		b=0;
	if(max==c)
		b=0;





	if(a+b+c==max)
		printf("right");
	else if(a+b+c>max)
		printf("acute");
	else if(a+b+c<max)
		printf("obtuse");


}