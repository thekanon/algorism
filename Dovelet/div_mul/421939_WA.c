#include <stdio.h>
void main()
{
	int n,m,i,cou=0;

	scanf("%d %d",&m,&n);

	for(i=1;i<=n;i++)
	{
		if(m*i==n)
		{
			cou=1;
			break;
		}
	}
	if(cou==1)
		printf("%dㅣ%d",m,n);
	
	else
		printf("%d!ㅣ%d",m,n);
}