#include <stdio.h>
#include <string.h>
void main()
{
	char a[10];
	int i,n,m=0,j;

	scanf("%s",a);

	n=strlen(a);



	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]-48==i+1)
			{
				m++;
				break;
			}
		}
	}

	if(n==m)
		printf("yes");
	else
		printf("no");






}
