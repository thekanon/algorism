#include <stdio.h>
void main()
{
	int a[10];
	int i,max=0;

	a[0]=0;

	for(i=1;i<=7;i++)
	{
		scanf("%d",&a[i]);

	

		if(a[max]<a[i])
			max=i;
		
	}
	printf("%d",max);


}
	