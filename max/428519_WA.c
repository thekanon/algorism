#include <stdio.h>
void main()
{
	int n,m,i,max=0;

	

	for(i=0;i<7;i++)
	{
		scanf("%d",&n);
		if(max<i)
			max=i;
	}

	printf("%d",max);

}
