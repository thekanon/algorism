#include <stdio.h>
void main()
{
	int m,a,b,c,n,d;

	scanf("%d %d",&m,&n);

	d=m*n;

	a=n/100;
	n%=100;

	b=n/10;

	c=n%10;

	printf("%d\n%d\n%d\n%d",c*m,b*m,a*m,d);
	


}
