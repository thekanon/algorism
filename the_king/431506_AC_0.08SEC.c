#include <stdio.h>
void main()
{
	int n,m,i,j,sum=1,allsum=0,a[1000];
	scanf("%d %d",&n,&m);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}	
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum*=a[i];
		}

		if(sum>0)
		{
			allsum+=sum;
		}
		sum=1;
	}

	printf("%d",allsum);
}