#include <stdio.h>
#include <string.h>
void main()
{
	char a[1000]={0};
	int n,i;

	scanf("%s",a);

	n=strlen(a);
	
	if(n==1)
		printf("%s",a);
	
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>52)
		{
			a[i]=48;
			a[i-1]=a[i-1]++;
		}
		else
		{
			if(i!=0)
				a[i]=48;
		}
	}

	for(i=0;i<n;i++)
		printf("%c",a[i]);




}	