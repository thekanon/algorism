#include <stdio.h>
void main()
{
	int i,j,n,sum=0,k;
	scanf("%d",&n);

	for(k=6;k<=n;k++)
	{
		for(i=1;i<k;i++)
		{
			for(j=1;j<=k;j++)
			{
				if(i*j==k)
				{
					sum+=i;
				}
			}
		}
		if(sum==k)
			printf("%d\n",sum);
		sum=0;
	}
}