#include <stdio.h>
void main()
{
	int n,m;
	int i,j,k;

	scanf("%d %d",&n,&m);

	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(i*j==n)
			{
				for(k=n;k>=1;k--)
				{
					if(i*k==m)
					{
						printf("%d ",i);
						i=-1;
						break;
						
					}
				}
			}
		}
	}


	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(n*i==m*j)
			{
				printf("%d",n*i);
			}
		}
	}


}
