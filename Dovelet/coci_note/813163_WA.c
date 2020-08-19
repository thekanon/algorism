#include <stdio.h>
#include <math.h>
void main()
{
	int a[8],i;
	for(i=0;i<8;i++)
		scanf("%d",&a[i]);
	
	if(a[i]-a[i+1]==1)
		printf("ascending");
	else if(a[i]-a[i+1]==-1)
		printf("descending");
	else
		printf("mixed");
	
	
}