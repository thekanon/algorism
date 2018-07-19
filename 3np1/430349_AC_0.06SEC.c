#include <stdio.h>
void main()
{
	int i,n;

	scanf("%d",&n);

	while(1)
	{
		printf("%d ",n);

		if(n==1)
			break;

		if(n%2==0)
			n/=2;
		else
		{
			n*=3;
			n+=1;
		}

	}
}
