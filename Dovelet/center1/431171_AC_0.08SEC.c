#include <stdio.h>
void main()
{
	int n,i,sum=0,sum2=0;
	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		sum+=i;
	}
	for(i=n+1;;i++)
	{
		sum2+=i;
		if(sum==sum2)
		{
			printf("O");
			break;
		}
		else if(sum<sum2)
		{
			printf("X");
			break;
		}
	}


}
