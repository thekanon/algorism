#include <stdio.h>
void main()
{
	float n,m;

	scanf("%f %f",&n,&m);

	if((int)n%5!=0 || n==m || m<n)
	{
		printf("%.2f",m);
	}
	else
	{
		if(m-n-0.5<0)
		{
			printf("%.2f",m);
		}
		else
		{
			printf("%.2f",m-n-0.5);
		}
	}

}