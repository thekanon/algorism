#include <stdio.h>
void main()
{
	long n,m,i,j,k,cou=0;

	scanf("%d %d",&n,&m);

	for(i=2;i<=n;i++)
	{
		for(j=2;j<=n;j++)
		{
			if(i*j==n)
			{
				for(k=2;k<=m;k++)
				{
					if(i*k==m)
					{
					
						k=10000;
						i=10000;
						j=10000;
						cou++;
						break;
					}
				}
			}
		}
	}


	if(cou==0)
	{
		printf("yes");
	}
	else
		printf("no");

	

}