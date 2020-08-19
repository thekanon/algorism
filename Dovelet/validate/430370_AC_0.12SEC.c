#include <stdio.h>
void main()
{
	int su[10]={0};
	int i,sum=0;


	for(i=0;i<5;i++)
		scanf("%d",&su[i]);


	for(i=0;i<5;i++)
	{
		sum+=su[i]*su[i];
	}

	

	printf("%d",sum%10);

}
