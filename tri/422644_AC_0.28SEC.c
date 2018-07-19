#include <stdio.h>
void main()
{
	int a,b,c,max=0,n,m;

	scanf("%d %d %d",&a,&b,&c);
	
	if(max<a)
		max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;

	if(max==a)
		a=0;
	if(max==b)
		b=0;
	if(max==c)
		c=0;

//	printf("%d %d %d %d",max,a,b,c);

	if(max<a+b+c)

		printf("yes");

	else
		printf("no");

}