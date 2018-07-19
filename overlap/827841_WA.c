#include <stdio.h>

void main()
{
	int a1,b1,c1,d1;
	int a2,b2,c2,d2;
	int tmp;
	
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
	scanf("%d %d %d %d",&a2,&b2,&c2,&d2);
	
	if(a1>=a2 && d1>=d2)
	{
		if(c2+d2>=a1+b1)
			printf("Overlap");
		else
			printf("No overlap");	
	}
	else if(a1>=a2 && d1<=d2)
	{
		if(c1>=a2 && b1<=d2)
			printf("Overlap");
		else
			printf("No overlap");
	}
	else
		if(c1+d1>=a2+b2)
			printf("Overlap");
		else
			printf("No overlap");	

	
}