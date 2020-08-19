#include <stdio.h>
void main()
{
	int a,b,c=0,d=0;

	float aa,bb;



	scanf("%d %d",&a,&b);


	aa=a;
	bb=b;

	aa/=8.0;
	bb/=8.0;

	a/=8;
	b/=8;

	if(a!=aa)
		c=b;

	if(b!=bb)
		d=a;



	printf("The number of whole tiles is %d  part tiles is %d",a*b,d+c);
}