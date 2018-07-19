#include <stdio.h>
void main()
{
	int n,m,i,cou=0;

	scanf("%d %d",&m,&n);

	if(m<0)
	{
		m*=-1;
	}

	for(i=1;i<=n;i++)
	{
		if(m*i==n)
		{
			cou=1;
			break;
		}
	}
	if(cou==1)
		printf("%d | %d",m,n);
	
	else
		printf("%d! | %d",m,n);
}