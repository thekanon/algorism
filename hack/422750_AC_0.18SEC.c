#include <stdio.h>
void main()
{
	int a,b,c;
	int sum;

	scanf("%d %d %d",&a,&b,&c);

	if(a<b-c)
		printf("advertise");
	else if(a>b-c)
		printf("do not advertise");
	else if(a==b-c)
		printf("does not matter");
}