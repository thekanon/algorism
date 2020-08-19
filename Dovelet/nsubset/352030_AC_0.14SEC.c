#include <stdio.h>
void main()
{
	float a,b,c,i;
	scanf("%f %f",&a,&b);


	c=b;
	for(i=0;i<a-1;i++)
	{
		c*=b;
	}


	printf("%.0f",c);
}