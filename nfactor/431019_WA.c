#include <stdio.h>
void main()
{
	int n,i,cou;

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			cou++;
	}

	printf("%d",cou);

}