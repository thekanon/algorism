#include <stdio.h>
void main()
{
	long n,i,m,cou=0,a[1000]={0};

	scanf("%d %d",&n,&m);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cou++;
			a[cou]=i;
		}
	}

	printf("%d",a[m]);


	
	

}