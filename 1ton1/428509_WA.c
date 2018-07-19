#include <stdio.h>
void main()
{
	int n,m,i,sum=0;

	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		printf("%d+",i);
		sum+=i;
	}

	printf("%d",n);

}
