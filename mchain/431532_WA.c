#include <stdio.h>
void main()
{
	int n,i,max=0,ai,gab=0,b,cou=0;

	scanf("%d",&n);

	
	

	

	for(i=1;i<=5;i++)
	{
		printf("%d %d ",n,i);
		b=i;
		ai=n;
		while(1)
		{
			if(b<0)
				break;
			printf("%d ",ai-b);
			b=ai-b;
			ai=ai-b;
			cou++;
			if(b<0)
				break;			
		}
		if(max<cou)
			max=cou;
		cou=0;

		printf("\n");
	}
	printf("%d",max+1);


}
		