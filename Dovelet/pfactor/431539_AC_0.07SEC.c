#include <stdio.h>
void main()
{
	int n,i;

	scanf("%d",&n);

	while(1)
	{
		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				printf("%d ",i);
				n/=i;
				break;
			}
		}
		if(n==1)	break;
	}



}

				
