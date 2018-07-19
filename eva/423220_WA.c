#include <stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);


	if(c+(b-a)==d)
		printf("%d %d %d %d %d",a,b,c,d,d+(c-b));
	else
		printf("%d %d %d %d %d",a,b,c,d,d*(c/b));

	
}
