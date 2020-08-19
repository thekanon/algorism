#include <stdio.h>
void main()
{
	int a,b,c,d,s;
	int i,N=0,B=0,j;
	int sum=0,sum2=0;
	int nn=0,bb=0;
	int n=0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&s);

	nn+=a;
	bb+=c;
	while(n<s)
	{
		for(i=0;i<a;i++)
		{
			N++;
			n++;
			
			if(n==s)
			{
				break;
			}
		}
		if(n==s)
		{
			break;
		}
		for(i=0;i<b;i++)
		{
			N--;
			n++;
			
			if(n==s)
			{
				break;
			}
		}
		if(n==s)
		{
			break;
		}

	}
	n=0;
	while(n<s)
	{
		for(i=0;i<c;i++)
		{
			B++;
			n++;
			
			if(n==s)
			{
				break;
			}
		}
		if(n==s)
		{
			break;
		}

		for(i=0;i<d;i++)
		{
			B--;
			n++;
			
			if(n==s)
			{
				break;
			}
		}
		if(n==s)
		{
			break;
		}

	}
	if(N>B)
	{
		printf("Nikky");
	}
	else if(N<B)
		printf("Byron");
	else
		printf("Tied");



}
