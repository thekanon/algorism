#include <stdio.h>
void main()
{
	int m,a,b,c,n,d;

	scanf("%d %d",&m,&n);

	d=m*n;

	a=m/100;
	m%=100;
	b=m/10;
	c=m%10;



	a*=n;
	b*=n;
	c*=n;

	printf("%d\n%d\n%d\n%d",a,b,c,d);
	

}
