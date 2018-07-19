#include <stdio.h>
void main()
{
	long long int n,m=1;
	int a[1000]={0},i;
	
	scanf("%lld",&n);
	



	for(i=0;;i++)
	{
		if(n==1)
		{
			printf("%d ",i);
			break;
		}

		if(n%2==0)
			a[i]=0;
		else
			printf("%d ",i);
		
		n/=2;
		
	}
	

}