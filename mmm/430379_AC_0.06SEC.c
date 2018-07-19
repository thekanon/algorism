#include <stdio.h>
void main()
{
	int a[13]={0};
	int i,sum=0,max=0,min=999;

	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);

		sum+=a[i];
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];

	}

	printf("%d %d %d",sum,max,min);
}