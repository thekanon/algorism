#include <stdio.h>
void main()
{
	//a^2 + b^2 = c^2 right
	//a^2 + b^2 > c^2 acute obtuse

	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	a*=a;
	b*=b;
	c*=c;

	if(a+b==c)
		printf("right");
	else if(a+b>c)
		printf("obtuse");
	else if(a+b<c)
		printf("acute");

}