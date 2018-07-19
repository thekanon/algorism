#include <stdio.h>
void main()
{
	long n,m,i,j,k,cou=0;

	scanf("%d %d",&n,&m);

	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i*j==n)
			{
				for(k=1;k<=n;k++)
				{
					if(i*k==m)
					{
						cou++;
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