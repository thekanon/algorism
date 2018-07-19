#include <stdio.h>

void main()
{
	int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	int tmp;
	
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
	scanf("%d %d %d %d",&a2,&b2,&c2,&d2);
	
	if(a1>a2 && b1>b2)
	{
		tmp=a1;
		a1=a2;
		a2=tmp;
		
		tmp=b1;
		b1=b2;
		b2=tmp;

		tmp=c1;
		c1=c2;
		c2=tmp;
		
		tmp=d1;
		d1=d2;
		d2=tmp;		
	}
	
	if(c1+d1>=a2+b2)
		printf("Overlap");
	else
		printf("No overlap");
	
}