#include <stdio.h>
void main()
{
	int n,m,i,cou=0,k;

	scanf("%d %d",&m,&n);

	k=m;
	if(m<0)
	{
		k=m*-1;
	}


	for(i=0;i<=n;i++)
	{
		if(k*i==n)
		{
			cou=1;
			break;
		}
	}
	if(cou==1)
		printf("%d | %d",m,n);
	
	else
		printf("%d !| %d",m,n);
}