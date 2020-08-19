#include <stdio.h>
void main()
{
	float a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	a/=b;

	c/=d;
	if(a>c)
		printf("1");
	else if(a==c)
		printf("0");
	else if(a<c)
		printf("-1");
}