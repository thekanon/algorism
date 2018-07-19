#include <stdio.h>
void main()
{
	int a,b,tmp;
	scanf("%d %d",&a,&b);
	tmp=a;
	a=b;
	b=tmp;

	printf("%d %d",a,b);
}