#include <stdio.h>
void main()
{
	int n,a,b,cou=0;

	scanf("%d",&n);

	a=n;
	b=0;


	while(1)
	{
		
		cou++;
		if(a-1<=b+1)
		{
			break;
		}
		a--;
		b++;
	}

	printf("%d",cou);
}