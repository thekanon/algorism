#include <stdio.h>
void main()
{
	long long n,i,j,cou=0;
	scanf("%lld",&n);
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i*i + j*j == n*n)
			{
				printf("%lld %lld",i,j);

				i=140000;
				j=140000;
				cou++;
				break;

			}
		}
	}

	if(cou==0)
		printf("impossible");


}
