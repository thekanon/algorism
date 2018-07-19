#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	a=b-a;
	b=c-b;

	if(a>b)
		printf("%d",a-1);
	else
		printf("%d",b-1);
}