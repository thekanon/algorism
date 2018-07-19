#include <stdio.h>
void main()
{
	int a,b,c;
	int sum;

	scanf("%d %d %d",&a,&b,&c);

	if(a<=168)
		printf("CRASH %d",a);
	else if(b<=168)
		printf("CRASH %d",b);
	else if(c<=168)
		printf("CRASH %d",c);
	else
		printf("No CRASH");
}