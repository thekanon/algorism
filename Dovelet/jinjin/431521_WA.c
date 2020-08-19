#include <stdio.h>
void main()
{
	int n,i,a[8][2]={0},max=0,sum,maxi;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
		sum=a[i][0]+a[i][1];

		if(sum>max)
		{
			max=sum;
			maxi=i;
		}
	}
	printf("%d",maxi);
}

