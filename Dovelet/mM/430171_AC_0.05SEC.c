#include <stdio.h>
void main()
{
	int i;
	int a[8],max=0,min=999;

	for(i=0;i<7;i++)
		scanf("%d",&a[i]);


	for(i=0;i<7;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}

	printf("%d %d",max,min);


}
