#include <stdio.h>
void main()
{
	int a[4];

	int i,max=0,cou=0;

	scanf("%d",&a[0]); 
	scanf("%d",&a[3]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);

	for(i=0;i<4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}

	while(1)
	{
		if(a[cou]==max)
		{
			break;
		}
		cou++;
	}



	printf("%d",cou);



}