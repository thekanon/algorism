#include <stdio.h>

void main()
{
	int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
	scanf("%d %d %d %d",&a2,&b2,&c2,&d2);
	
	if(c1+d1>=a2+b2)
		printf("Overlap");
	else
		printf("No overlap");
	
}