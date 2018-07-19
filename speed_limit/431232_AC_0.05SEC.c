#include <stdio.h>
void main()
{
	int a[100],n,b[100],i,sum=0;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);

	sum=a[0]*b[0];

	for(i=1;i<n;i++)
	{
		sum+=a[i]*(b[i]-b[i-1]);
	}

	printf("%d miles",sum);
	


}
