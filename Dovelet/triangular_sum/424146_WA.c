#include <stdio.h>
void main()
{
	int n,i,j;
	int m=0,k=1;
	scanf("%d",&n);
	

	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			m+=j;
		}
		k*=m;
		m=0;
	}


	printf("%d",k/2);

	
}