#include <stdio.h>
void main()
{
	int a,b,c,d,s;
	int i,N=0,B=0;

	scanf("%d %d %d %d %d",&a,&b,&c,&d,&s);

	for(i=0;i<s;i++)
	{
		N+=a;
		N-=b;
		B+=c;
		B-=d;

	
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
