#include <stdio.h>
void main()
{
	long n,i,cou=0,sum=0,mt=1;

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			cou++;
			sum+=i;
			mt*=i;
			mt%=10;
		}
	}

	printf("\n%d\n%d\n%d",cou,sum,mt%10);



}