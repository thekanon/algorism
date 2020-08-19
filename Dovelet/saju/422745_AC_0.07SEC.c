#include <stdio.h>
void main()
{
	int a,b,c;
	int sum;

	scanf("%d %d %d",&a,&b,&c);

	sum=a+b+c;

	if(sum%10==0)
	{
		printf("운수대통!");
	}
	else
		printf("노력하세요!");
}