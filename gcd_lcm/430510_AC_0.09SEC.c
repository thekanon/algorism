#include <stdio.h>
void main()
{
	int n,m;
	int i,j,k;

	scanf("%d %d",&n,&m);

	for(i=100;i>=1;i--)
	{
		for(j=100;j>=1;j--)
		{
			if(i*j==n)
			{
				for(k=100;k>=1;k--)
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


	for(i=1;i<=100;i++)
	{
		for(j=1;j<=100;j++)
		{
			if(n*i==m*j)
			{
				printf("%d",n*i);
				i=101;
				break;
			}
		}
	}

}
