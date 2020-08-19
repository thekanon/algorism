#include <stdio.h>
void main()
{
	int i,n,sum=0,min=999;

	for(i=0;i<7;i++)
	{
		scanf("%d",&n);
		if(n%2==1)
		{
			sum+=n;
			if(min>n)
			{
				min=n;
			}
		}
	}
	printf("%d\n%d",sum,min);
}