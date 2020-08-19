#include <stdio.h>
void main()
{
	int a[25],n,i,j,tmp,sum=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}



	for(i=0;i<n-1;i++)
	{
		sum+=a[i+1]-a[i];
		
	}

	
	printf("%d",sum*2);



}