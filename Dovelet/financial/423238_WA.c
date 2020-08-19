#include <stdio.h>
void main()
{
	float i,n,m=0;

	for(i=0;i<12;i++)
	{
		scanf("%f",&n);
		m+=n;
	}
	printf("%.2f",m/12);
	
	
}