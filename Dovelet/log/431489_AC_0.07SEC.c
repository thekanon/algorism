#include <stdio.h>
void main()
{
	int i,j,n,cou=0,d;
	
	scanf("%d",&n);


	for(i=1;;i++)
	{
		for(j=1;j<=i;j++)
		{
			cou++;				
			if(cou>=n)			
			{
				d=i;
				break;
			}
		}
		if(cou>=n)
			break;
	}

	cou=0;
	
	printf("%d",d);

	for(;;)
	{
		for(i=d;i>=1;i--)
		{
			n--;
			cou++;
			if(n<=0)
				break;
		}
		d--;
		if(n<=0)
			break;
		cou=0;
	}
	printf(" %d",cou);

}
