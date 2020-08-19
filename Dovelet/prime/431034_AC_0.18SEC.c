#include <stdio.h>
void main()
{
	long n,i,cou=0;

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cou++;
		}
	}

	if(cou==2)
		printf("prime");
	else
		printf("not prime");

	

}