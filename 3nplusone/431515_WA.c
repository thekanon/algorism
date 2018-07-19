#include <stdio.h>
void main()
{
	int n,m,i,cou,c=0,max=0;
	scanf("%d %d",&n,&m);

	for(i=n;i<=m;i++)
	{
		cou=i;
		while(1)
		{
		
			if(cou==1)
			{
				c++;
				break;
			}
			if(cou%2==0)
			{
				c++;
				cou/=2;
			}
			else
			{
				cou=cou*3+1;
				c++;
			}
		}
		if(max<c)
			max=c;
		c=0;

		printf("\n");
	}

	printf("%d",max);
}
