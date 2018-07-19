#include <stdio.h>
void main()
{
	int a[100][100]={0},m;
	int n,i=0,j,ii,jj;
	
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		n--;
		scanf("%d %d",&i,&j);
		
		for(ii=i;ii<i+10;ii++)
		{
			for(jj=j;jj<j+10;jj++)
			{
				a[ii][jj]++;
			}
		}
		i++;
	}
	ii=0;
	jj=0;
	for(i=0;i<50;i++)
	{
		for(j=0;j<50;j++)
		{
		
			if(a[i][j]!=0)
			{
				jj++;
			}
		}
		
	}
	printf("%d",jj);

	
}