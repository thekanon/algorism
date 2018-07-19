#include <stdio.h>
void main()
{
	int n,m=0;
	scanf("%d",&n);
	while(n!=0)
	{
		m+=n;
			n--;
	}

	printf("%d",m);
}