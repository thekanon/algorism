#include <stdio.h>
void main()
{
	int n,m,i,cou,c=0,max;
	scanf_s("%d %d",&n,&m);

	if(m<n)
	{
		max=n;
		n=m;
		m=max;
	}
		

	max=0;

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
	}
	printf("%d",max);


	System("pause");
}
