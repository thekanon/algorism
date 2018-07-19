#include <stdio.h>
void main()
{
	int n,i,cou=1;

	scanf("%d",&n);

	while(1)
	{
		cou++;
		n*=cou;
		for(i=1;i<n;i++)
		{
			if(i*i==n)
				break;
		}
		if(i*i==n)
			break;
	}
	printf("%d",cou);


}