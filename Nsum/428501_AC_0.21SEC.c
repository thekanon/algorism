#include <stdio.h>
void main()
{
	int n,m,i,sum=0;

	scanf("%d",&m);

	for(i=1;i<=100;i++)
	{
		sum+=i;

		if(sum==m)
			printf("%d",i);
	}

}
