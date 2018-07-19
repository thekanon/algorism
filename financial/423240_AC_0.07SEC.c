#include <stdio.h>
void main()
{
	double i,n,m=0;

	for(i=0;i<12;i++)
	{
		scanf("%lf",&n);
		m+=n;
	}
	printf("$%.2lf",m/12);
	
	
}